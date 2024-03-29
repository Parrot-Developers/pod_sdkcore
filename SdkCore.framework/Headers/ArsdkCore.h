//    Copyright (C) 2019 Parrot Drones SAS
//
//    Redistribution and use in source and binary forms, with or without
//    modification, are permitted provided that the following conditions
//    are met:
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//    * Neither the name of the Parrot Company nor the names
//      of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written
//      permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//    PARROT COMPANY BE LIABLE FOR ANY DIRECT, INDIRECT,
//    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
//    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
//    AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
//    OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
//    SUCH DAMAGE.

#import <Foundation/Foundation.h>
#import "ArsdkBackendType.h"
#import "ArsdkApiCapabilities.h"

/**
 ArsdkCore listener, notified when a device has been added/removed form arsdk
 */
@protocol ArsdkCoreListener <NSObject>
/**
 Called when a device has been added to the native backend

 @param uid: unique identifier for this device
 @param type: type of the device
 @param backendType: type of the backend this device is comming from
 @param name: name of the device
 @param handle: handle on the arsdk device
 */
- (void)onDeviceAdded:(nonnull NSString *)uid type:(NSInteger)type backendType:(ArsdkBackendType)backendType
                 name:(nonnull NSString *)name api:(ArsdkApiCapabilities)api handle:(int16_t)handle;

/**
 Called when a device has been removed from the native backend

 @param uid: unique identifier for this device
 @param type: type of the device
 @param backendType: type of the backend this device is comming from
 @param handle: handle on the arsdk device
 */
- (void)onDeviceRemoved:(nonnull NSString *)uid type:(NSInteger)type backendType:(ArsdkBackendType)backendType
                 handle:(int16_t)handle;

@end

struct arsdk_cmd;

/**
 Command listener, notified of command received only (released when the device is disconnected)
 */
@protocol ArsdkCoreDeviceCommandListener <NSObject>

/**
 Called when a command has been received

 @param command: received command
 */
- (void)onCommandReceived:(nonnull const struct arsdk_cmd *)command;

@end

/**
 Arsdk Controller
 Wrapper around arsdk-ng.
 */
@interface ArsdkCore : NSObject

/** Native arsdk manager */
@property (nonatomic, assign, readonly, nonnull) struct arsdk_ctrl *ctrl NS_RETURNS_INNER_POINTER;

/**
 Constructor

 @param backendControllers: array of ArsdkBackendController to use
 @param listener: listener notified when devices are added and removed
 @param controllerDescriptor: controller description string
 @param controllerVersion: controller version string
 */
- (nonnull instancetype)initWithBackendControllers:(nonnull NSArray *)backendControllers
                                          listener:(nonnull id<ArsdkCoreListener>)listener
                              controllerDescriptor:(nonnull NSString *)controllerDescriptor
                                 controllerVersion:(nonnull NSString *)controllerVersion;

/**
 Start the backend controllers and run the loop
 */
- (void)start;

/**
 Stop the loop and the backend controllers
 */
- (void)stop;

@end
