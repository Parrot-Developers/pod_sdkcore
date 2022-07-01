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

#import "SdkCoreSource.h"

/** Source to open and close video streams from an Arsdk device. */
@interface ArsdkSource: NSObject <SdkCoreSource>

/**
 Create a video stream source.

 @param arsdkCore: Arsdk controller
 @param deviceHandle: device handle
 @param url: stream url
 */
- (nonnull instancetype)initWithArsdkCore:(nonnull ArsdkCore *)arsdkCore
                             deviceHandle:(short)deviceHandle
                                      url:(nonnull NSString *)url;

@end

/** Media stream source. */
@interface ArsdkSourceMedia: ArsdkSource
@end

/** Stream live camera type. */
typedef NS_ENUM(NSInteger, ArsdkSourceLiveCameraType) {
    /// Unspecified camera type.
    ArsdkSourceLiveCameraTypeUnspecified = 0,

    /// Front camera video stream.
    ArsdkSourceLiveCameraTypeFrontCamera = 1,

    /// Stereo camera left video stream.
    ArsdkSourceLiveCameraTypeFrontStereoCameraLeft = 2,

    /// Stereo camera right video stream.
    ArsdkSourceLiveCameraTypeFrontStereoCameraRight = 3,

    /// Vertical camera video stream.
    ArsdkSourceLiveCameraTypeVerticalCamera = 4,

    /// Disparity video stream.
    ArsdkSourceLiveCameraTypeDisparity = 5,
};

/** Live camera stream source. */
@interface ArsdkSourceLive: ArsdkSource
@end

/**
 Arsdk Controller, Stream related method.
 */
@interface ArsdkCore (Source)

/**
 Create a native video live source.

 @param handle: device handle
 @param cameraType: type of camera live to stream

 @return a stream live source object
 */
- (nonnull ArsdkSourceLive *)createVideoSourceLive:(int16_t)handle cameraType:(ArsdkSourceLiveCameraType)cameraType;

/**
 Create a native video media source.

 @param handle: device handle
 @param url: url of the media to stream
 @param trackName: specifique track name to stream
 
 @return a stream media source object
 */
- (nonnull ArsdkSourceMedia *)createVideoSourceMedia:(int16_t)handle url:(nonnull NSString *)url
                                           trackName:(nullable NSString *)trackName;

@end
