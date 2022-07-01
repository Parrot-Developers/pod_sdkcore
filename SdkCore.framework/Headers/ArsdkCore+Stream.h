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
#import "SdkCoreSource.h"
#import "SdkCoreMediaInfo.h"
#import "SdkCoreRenderer.h"
#import "SdkCoreSink.h"

// Forward declaration.
@class ArsdkStream;

/** ArsdkStream state */
typedef NS_ENUM(NSInteger, ArsdkStreamState) {
    /** Stream open has been requested */
    ArsdkStreamStateOpening = 0,
    /** Stream is open, playback control is available */
    ArsdkStreamStateOpened = 1,
    /** Stream has not been opened yet */
    ArsdkStreamStateClosing = 2,
    /** Stream is closed, cannot be used any further */
    ArsdkStreamStateClosed = 3
};

/** Stream playback state protocol. */
@protocol ArsdkStreamPlaybackState <NSObject>

/** Stream duration in microseconds  */
@property (nonatomic, readonly) int64_t duration;
/** Current reading position in microseconds. */
@property (nonatomic, readonly) int64_t position;
/** Stream speed, is a multiplier. */
@property (nonatomic, readonly) double speed;

@end

/** Command completion block. */
typedef void(^ArsdkStreamCmdCb)(int status);

/**
 Listener that will be called when events about the stream are emitted by the native stream object.
 */
@protocol ArsdkStreamListener <NSObject>

/**
 Called when the stream state changed.

 @param stream: the stream
 */
- (void)streamStateDidChange:(nonnull ArsdkStream *)stream;

/**
 Called when the stream is ready and when the playback state changed.

 @param stream: the stream
 @param playbackState: playback state
 */
- (void)streamPlaybackStateDidChange:(nonnull ArsdkStream *)stream
                       playbackState:(nonnull id<ArsdkStreamPlaybackState>)playbackState;

/**
 Called when a new media is available for the stream.

 @param stream: the stream
 @param mediaInfo: information concerning the new media
 */
- (void)mediaAdded:(nonnull ArsdkStream *)stream
         mediaInfo:(nonnull SdkCoreMediaInfo *)mediaInfo;

/**
 Called when a media became unavailable for the stream.

 @param stream: the stream
 @param mediaInfo: information concerning the removed media
 */
- (void)mediaRemoved:(nonnull ArsdkStream *)stream
           mediaInfo:(nonnull SdkCoreMediaInfo *)mediaInfo;
@end

/** Video stream object that have a native stream object. */
@interface ArsdkStream: NSObject <SdkCoreSourceTarget>

/** Pdraw state */
@property (nonatomic, assign, readonly) ArsdkStreamState state;

/** `YES` if the stream is busy and no command can be executed, `NO` if the stream is ready to a new command. */
@property (nonatomic, assign, readonly) BOOL busy;

/**
 Creates a native video stream.
 
 @param pompLoopUtil: pomp loop utility
 @param listener: a listener that will be called when events happen on the stream
 */
- (nonnull instancetype)initWithPompLoopUtil:(nonnull PompLoopUtil *)pompLoopUtil
                                    listener:(nonnull id<ArsdkStreamListener>)listener;

/**
 Opens the stream.

 The stream `state` must be `ArsdkStreamStateClosed` and `busy` must be`NO`.

 @param source: source to open
 @param completion: completion block called at the command end
 */
- (void)open:(nonnull id<SdkCoreSource>)source completion:(nonnull ArsdkStreamCmdCb)completion;

/**
 Plays the stream.

 The stream `state` must be `ArsdkStreamStateOpened` and `busy` must be`NO`.

 @param completion: completion block called at the command end
 */
- (void)play:(nonnull ArsdkStreamCmdCb)completion;

/**
 Pauses the stream.

 The stream `state` must be `ArsdkStreamStateOpened` and `busy` must be`NO`.

 @param completion: completion block called at the command end
 */
- (void)pause:(nonnull ArsdkStreamCmdCb)completion;

/**
 Seeks to a time position.
 The stream `state` must be `ArsdkStreamStateOpened` and `busy` must be`NO`.

 @param position: position in milliseconds.
 @param completion: completion block called at the command end
 */
- (void)seekTo:(int)position completion:(nonnull ArsdkStreamCmdCb)completion;

/**
 Closes the stream.

 The stream `state` must be `ArsdkStreamStateOpened` or `ArsdkStreamStateOpening` and `busy` must be`NO`.

 @param completion: completion block called at the command end
 */
- (void)close:(nonnull ArsdkStreamCmdCb)completion;

/**
 Retrieves the playback state.

 @return the playback state, or `nil`if `state`is not equals to `ArsdkStreamStateOpened`.
 */
- (nullable id<ArsdkStreamPlaybackState>) playbackState;

/**
 Starts a renderer.
 Must be called in the GL thread.

 @param renderZone: rendering area.
 @param fillMode: rendering fill mode.
 @param zebrasEnabled: 'true' to enable the zebras of overexposure zone.
 @param zebrasThreshold: threshold of overexposure used by zebras, used by zebras, in range [0.0, 1.0].
                         '0.0' for the maximum of zebras and '1.0' for the minimum.
 @param textureWidth: texture width in pixels, unused if 'textureLoaderlistener' is nil.
 @param textureDarWidth: texture aspect ratio width, unused if 'textureLoaderlistener' is nil.
 @param textureDarHeight: texture aspect ratio height, unused if 'textureLoaderlistener' is nil.
 @param textureLoaderlistener: texture loader listener.
 @param histogramsEnabled: 'true' to enable histograms computation.
 @param overlayListener: overlay rendering listener.
 @param listener: renderer listener.
 */
- (nonnull SdkCoreRenderer *)startRendererWithZone:(CGRect)renderZone
                                          fillMode:(SdkCoreStreamRenderingFillMode)fillMode
                                     zebrasEnabled:(BOOL)zebrasEnabled zebrasThreshold:(float)zebrasThreshold
                                      textureWidth:(int)textureWidth
                                   textureDarWidth:(int)textureDarWidth textureDarHeight:(int)textureDarHeight
                             textureLoaderlistener:(nullable id<SdkCoreTextureLoaderListener>)textureLoaderlistener
                                 histogramsEnabled:(BOOL)histogramsEnabled
                                   overlayListener:(nonnull id<SdkCoreRendererOverlayListener>)overlayListener
                                          listener:(nonnull id<SdkCoreRendererListener>)listener
NS_SWIFT_NAME(startRenderer(renderZone:fillMode:zebrasEnabled:zebrasThreshold:textureWidth:textureDarWidth:textureDarHeight:textureLoaderlistener:histogramsEnabled:overlayListener:listener:));

/**
 Starts stream sink.

 Must be called on main thread. Stream must be opened.

 @param sink:    sink to start
 @param mediaId: identifies the stream media to deliver to the sink
 */
- (void)startSink:(nonnull SdkCoreSink *)sink mediaId:(UInt32)mediaId;

@end

/**
 Arsdk Controller, Stream related method.
 */
@interface ArsdkCore (Stream)

/**
 Creates a native video stream.

 @param handle: device handle
 @param listener: a listener that will be called when events happen on the stream
 @return a stream object
 */
- (nonnull ArsdkStream *)createVideoStream:(nonnull id<ArsdkStreamListener>)listener;

@end
