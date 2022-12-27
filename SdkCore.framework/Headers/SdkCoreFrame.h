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

/** Contextual information on a frame. */
@protocol SdkCoreFrameInfo <NSObject>

/** Frame timestamp, in `timeScale` units. */
@property (nonatomic, assign, readonly) NSInteger timestamp;

/** Frame timescale, in Hz. */
@property (nonatomic, assign, readonly) NSInteger timeScale;

/** Capture time of the frame, in microseconds on the monotonic clock of the drone; `0` if unknown.*/
@property (nonatomic, assign, readonly) long captureTimestamp;

/** Frame monotonic index. */
@property (nonatomic, assign, readonly) NSInteger index;

/** Frame flags. */
@property (nonatomic, assign, readonly) long flags;

/**
 `true` when the frame contains a visual error.

 This flag indicates that the frame is valid, but may contain visual errors.
 A frame with this flag can be displayed, but should not be used for vision algorithms.
 */
@property (nonatomic, assign, readonly) BOOL visualError;

/**
 `true` when the frame is not intended to be displayed.

 This flag is usually applied during a pipeline initialization to the first few frames.
 Such frames are not intended to be displayed nor used for vision algorithms.
 */
@property (nonatomic, assign, readonly) BOOL silent;

@end

/** Video frame. */
@interface SdkCoreFrame: NSObject

/**
 Native pointer on to the `struct mbuf_raw_video_frame` C structure which is this frame native backend.

 This pointer remains valid until this frame is released.

 */
@property (nonatomic, assign, readonly, nonnull) void *nativePtr NS_RETURNS_INNER_POINTER;

/**
 Frame information.

 Returned data is only valid until the frame is released.

 @returns an `SdkCoreFrameInfo` instance, containing information relative to the frame
 */
@property (nonatomic, strong, readonly, nonnull) id<SdkCoreFrameInfo> frameInfo;

/**
 Data for each frame plane.

 Returned data is only valid until the frame is released.

 @returns an Array of ByteBuffer where each buffer contains the data of one frame plane
 */
@property (nonatomic, strong, readonly, nonnull) NSArray<NSData *> *planes;

/**
 Stride for each frame plane.

 Returned data is only valid until the frame is released.

 @returns an IntArray where each element represents the stride of one frame plane
 */
@property (nonatomic, strong, readonly, nonnull) NSArray<NSNumber *> *strides;

/**
 Frame metadata.

 Returned data is only valid until the frame is released.
 Metadata are in Parrot vmeta protobuf format.

 @returns a ByteBuffer which wraps the frame metadata
 */
@property (nonatomic, strong, readonly, nullable) NSData *metadataProtobuf;

- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 Copies this frame.

 Copied instance and its data are completely separate from the source and MUST be released
 independently when not used anymore, otherwise its memory will be leaked.

 @returns a new frame copy
 */
- (nonnull SdkCoreFrame*)copy;

@end
