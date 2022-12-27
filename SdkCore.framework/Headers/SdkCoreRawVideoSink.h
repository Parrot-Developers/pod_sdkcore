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
#import "PompLoopUtil.h"
#import "SdkCoreFrame.h"

/**
 Listener that will be called when events about the renderer are emitted by the native renderer object
 */
@protocol SdkCoreRawVideoSinkListener <NSObject>

/**
 Notifies that the sink has started and will begin to receive frames.
 */
- (void)onStart;

/**
 Notifies that a new frame is available from the sink.
 Called in pomp thread.

 @param frame: new available frame
 */
- (void)onFrame:(nonnull SdkCoreFrame *)frame;

/**
 Notifies that the sink has stopped and won't receive frames anymore.
 */
- (void)onStop;

@end

/**
 Raw video sink.

 Receives raw video frames from a stream SdkCoreStream.
 */
@interface SdkCoreRawVideoSink: NSObject

/**
 Init sink.

 @param queueSize: size of the sink queue; 0 for unlimited queue, otherwise older frames
 will be automatically dropped when the queue is full to make room for new frames
 @param listener: Sink listener.
 */
- (nonnull instancetype)initWithQueueSize:(unsigned int)queueSize
                                 listener:(nonnull id<SdkCoreRawVideoSinkListener>)listener NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


/** Stops the sink. */
- (void)stop;

@end
