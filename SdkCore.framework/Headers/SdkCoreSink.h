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
#import "PompLoopUtil.h"
#import "SdkCoreFrame.h"

/**
 Listener that will be called when events about the renderer are emitted by the native renderer object
 */
@protocol SdkCoreSinkListener <NSObject>

/**
 Notifies that a new frame is available from the sink.
 Called in pomp thread.

 @param frame: new available frame
 */
- (void)onFrame:(SdkCoreFrame * _Nonnull)frame;

/**
 Notifies that the sink has stopped.
 */
- (void)onStop;

@end

/** Video sink. */
@interface SdkCoreSink: NSObject

/**
 Init sink.

 @param queueSize: desired queue size
 @param listener: Sink listener.
 */
- (instancetype _Nullable)initWithQueueSize:(unsigned int)queueSize
                                   listener:(id<SdkCoreSinkListener> _Nonnull)listener;
/**
 Starts the sink.

 @param pdraw:   pdraw instance that will deliver frames to the sink
 @param pomp:    stream pomp loop
 @param mediaId: identifies the stream media to be delivered to the sink
 */
- (void)start:(/*struct pdraw **/void * _Nonnull)pdraw
         pomp:(PompLoopUtil * _Nonnull)pompLoopUtil
      mediaId:(unsigned int)mediaId;

/** Stops the sink. */
- (void)stop;

@end
