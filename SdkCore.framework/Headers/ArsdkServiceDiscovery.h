//    Copyright (C) 2023 Parrot Drones SAS
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

/** Service Discovery */
@interface ArsdkServiceDiscovery : NSObject

/** Name of service. */
@property (nonatomic, strong, readonly, nonnull) NSString *name;
/** Type of service. */
@property (nonatomic, strong, readonly, nonnull) NSString *type;
/** Domain name. */
@property (nonatomic, strong, readonly, nonnull) NSString *domain;
/** IP address. */
@property (nonatomic, strong, readonly, nonnull) NSString *address;
/** Port number. */
@property (nonatomic, assign, readonly) NSInteger port;
/** List of TXT records. */
@property (nonatomic, strong, readonly, nonnull) NSArray<NSString *> *recordData;

/**
 Constructor.

 @param name Name of service.
 @param type Type of service.
 @param domain Domain name.
 @param address IP address.
 @param port Port number.
 @param recordData List of TXT records.
 */
- (nonnull instancetype)initWithName:(nonnull NSString *)name
                                type:(nonnull NSString *)type
                              domain:(nonnull NSString *)domain
                             address:(nonnull NSString *)address
                                port:(NSInteger)port
                          recordData:(nonnull NSArray<NSString *> *)recordData NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

/** Service Discovery Browser. */
@protocol ArsdkServiceDiscoveryBrowser <NSObject>

/** Service list. */
@property (nonatomic, copy, readonly, nonnull) NSSet<ArsdkServiceDiscovery *> *services;

@end
