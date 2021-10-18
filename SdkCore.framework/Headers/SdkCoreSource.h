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

/** Target stream to open a source for .*/
@protocol SdkCoreSourceTarget <NSObject>

/**
 Opens the stream targeted by a source.

 @param url: Stream url to open.
 @param mux: Mux context to use, `NULL` if not needed.
 @return 0 on success, a negative error code otherwise.
 */
- (int)open:(NSString * _Nonnull)url mux:(/*struct mux_ctx * */void* _Nullable)mux;

@end

/** Protocol for stream sources. */
@protocol SdkCoreSource <NSObject>

/**
 Opens the source.

 This method is called when a stream is requested to open this source.
 Implementation shall there open the source using the provided stream internal pdrw instance.

 @param target: stream target to be used to open the source as appropriate.
 @return 0 on success, a negative error code otherwise.
 */
- (int)open:(id<SdkCoreSourceTarget> _Nonnull)target;

/**
 Selects the media to stream.

 @param medias: Media available list.
 @param count: Number of the media available in the list.
 @return The media id selected or `0` to select default media or `-ECANCELED` to cancel the source opening.
 */
- (int)selectMedia:(/* const struct pdraw_demuxer_media * */const void* _Nonnull)medias count: (size_t)count;

/**
 Closes the Source.

 This method is called when a stream opened for this source closes.
 Implementation shall there release any related resources that are no longer needed
 as the source itself is no longer needed.
 */
- (void)close;

@end
