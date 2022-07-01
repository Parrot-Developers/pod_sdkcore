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
#import "ArsdkCore.h"
#import <CoreGraphics/CoreGraphics.h>
#import <CoreLocation/CLLocation.h>

/* Position in frame */
struct vmeta_position_in_frame {
    /* Horizontal coordinate in the image, in range [0, 1] */
    CGFloat x;

    /* Vertical coordinate in the image, in range [0, 1] */
    CGFloat y;

    /* Distance between the drone and the location in meters */
    CGFloat distance;

    /* Horizontal distance between the drone and the location in meters */
    CGFloat horizontal_distance;
};

/** Video frame. */
@interface SdkCoreFrame: NSObject

/** PDRAW video frame, can be cast to (struct mbuf_raw_video_frame *). */
@property (nonatomic, assign, readonly, nullable) void *mbufFrame;
/** Metadata protobuf packed data. */
@property (nonatomic, strong, readonly, nullable) NSData *metadataProtobuf;
/** Video frame data buffer. */
@property (nonatomic, assign, readonly, nullable) const uint8_t *data;
/** Length in bytes of video frame buffer. */
@property (nonatomic, assign, readonly) size_t len;

/** Constructor.

 @param src: pointer to frame to copy, (struct mbuf_raw_video_frame *)
 */
- (nullable instancetype)initWithCopy:(nonnull void *)src;

/** Position from location.

 @param location: the location
 @return the position in the frame, all values will be 0 if an error occurred and the point can not be
 retrieved.
 */
- (struct vmeta_position_in_frame)positionFromLocation:(nonnull CLLocation *)location;

/** Location from position.

 @param position: new position in frame
 @param currentLocation: current location in frame
 @param considerFlatGround: `YES` if flat ground hypothesis is used to compute the new location.
 @return the new location or `nil` if an error occured and the location could not be retrieved.
 */
- (nullable CLLocation *)locationFromPosition:(CGPoint)position
                                  forLocation:(nonnull CLLocation *)currentLocation
                           considerFlatGround:(BOOL)flatGround;

@end
