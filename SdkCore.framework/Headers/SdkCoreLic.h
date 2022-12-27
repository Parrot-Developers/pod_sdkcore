//    Copyright (C) 2022 Parrot Drones SAS
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
#import "ArsdkCore.h"
#import <CoreGraphics/CoreGraphics.h>
#import <CoreLocation/CLLocation.h>

/** Position in frame */
@interface LicPosition: NSObject

/** Horizontal coordinate in the image, in range [0, 1] */
@property(nonatomic, assign, readonly) CGFloat x;

/** Vertical coordinate in the image, in range [0, 1] */
@property(nonatomic, assign, readonly) CGFloat y;

/** Distance between the drone and the location in meters */
@property(nonatomic, assign, readonly) CGFloat distance;

/** Horizontal distance between the drone and the location in meters */
@property(nonatomic, assign, readonly) CGFloat horizontalDistance;

@end

/** SdkCoreLic error domain. */
extern NSErrorDomain const _Nonnull SdkCoreLicErrorDomain;
/** SdkCoreLic errors */
typedef NS_ERROR_ENUM(SdkCoreLicErrorDomain, SdkCoreLicError) {
    /** Unknown error. */
    SdkCoreLicErrorUnknown,
    /** Current frame info unusable. */
    SdkCoreLicErrorFrameInfo,
    /** Result not representable. */
    SdkCoreLicErrorOutOfRange,
};

/** Location from image coordinates context. */
@interface SdkCoreLic: NSObject

/** Updates frame info.

 @param mediaInfoHandle: media info handle
 @param metadata: frame metadata Handle
 */
- (void)updateMediaInfo:(nullable const void *)mediaInfoHandle metadata:(nullable const void *)metadataHandle
NS_SWIFT_NAME(update(mediaInfo:metadata:));

/** Position from location.

 @param location: the location
 @param error: If an error occurs, upon return contains an NSError object with code `SdkCoreLicError` that describes the problem.
 @return the position in the frame or `nil` if an error occured and the position could not be retrieved.
 */
- (nullable LicPosition *)positionFromLocation:(nonnull CLLocation *)location
                                         error:(NSError *_Nullable*_Nullable)error;

/** Location from position.

 @param position: new position in frame
 @param currentLocation: current location in frame
 @param error: If an error occurs, upon return contains an NSError object with code `SdkCoreLicError` that describes the problem.
 @return the new location or `nil` if an error occured and the location could not be retrieved.
 */
- (nullable CLLocation *)locationFromPosition:(CGPoint)position forLocation:(nonnull CLLocation *)currentLocation
                                                                      error:(NSError *_Nullable*_Nullable)error;

/** Location from position with a fixed altitude.

 @param position: new position in frame
 @param altitude: altitude to apply
 @param error: If an error occurs, upon return contains an NSError object with code `SdkCoreLicError` that describes the problem.
 @return the new location or `nil` if an error occured and the location could not be retrieved.
 */
- (nullable CLLocation *)locationFromPosition:(CGPoint)position forAltitude:(float)altitude
                                        error:(NSError *_Nullable*_Nullable)error;

/** Location from position with a fixed distance.

 @param position: new position in frame
 @param distance: new location distance
 @param error: If an error occurs, upon return contains an NSError object with code `SdkCoreLicError` that describes the problem.
 @return the new location or `nil` if an error occured and the location could not be retrieved.
 */
- (nullable CLLocation *)locationFromPosition:(CGPoint)position forDistance:(float)distance
                                        error:(NSError *_Nullable*_Nullable)error;
@end
