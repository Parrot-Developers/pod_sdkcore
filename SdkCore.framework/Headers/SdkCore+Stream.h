//    Copyright (C) 2016-2019 Parrot Drones SAS
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

#import "PompLoopUtil.h"
#import "SdkCore+Renderer.h"
#import "SdkCore+Sink.h"
#import "SdkCore+Source.h"
#import "SdkCore+MediaInfo.h"

/** Stream close reason. */
typedef NS_ENUM(NSInteger, SdkCoreStreamCloseReason) {
    /** No close reason, when close has not been called yet */
    SdkCoreStreamCloseNone = -1,
    /** Unspecified reason */
    SdkCoreStreamCloseUnspecified = 0,
    /** Closed by interruption */
    SdkCoreStreamCloseInterrupted = 1,
    /** Closed by user request */
    SdkCoreStreamCloseUserRequested = 2,
    /** Closed for internal reason */
    SdkCoreStreamCloseInternal = 3,
};

@protocol SdkCoreStreamListener;

/** Video stream object that have a native stream object. */
@interface SdkCoreStream: NSObject

/** Open the stream. */
- (void)open;

/**
 Close the stream.

 - parameter reason: reason why the stream is closed.
 */
- (void)close:(SdkCoreStreamCloseReason)reason;

/** Play the stream. */
- (void)play;

/** Pause the stream. */
- (void)pause;

/** Seek to a time position.

 - parameter position: position in milliseconds.
 */
- (void)seekTo:(int)position;


/**
 Start renderer.
 Must be called in the GL thread.

 - parameter renderZone: rendering area.
 - parameter fillMode: rendering fill mode.
 - parameter zebrasEnabled: 'true' to enable the zebras of overexposure zone.
 - parameter zebrasThreshold: threshold of overexposure used by zebras, used by zebras, in range [0.0, 1.0].
                              '0.0' for the maximum of zebras and '1.0' for the minimum.
 - parameter textureWidth: texture width in pixels, unused if 'textureLoaderlistener' is nil.
 - parameter textureDarWidth: texture aspect ratio width, unused if 'textureLoaderlistener' is nil.
 - parameter textureDarHeight: texture aspect ratio height, unused if 'textureLoaderlistener' is nil.
 - parameter textureLoaderlistener: texture loader listener.
 - parameter histogramsEnabled: 'true' to enable histograms computation.
 - parameter overlayListener: overlay rendering listener.
 - parameter listener: renderer listener.
 */
- (SdkCoreRenderer * _Nullable)startRendererWithZone:(CGRect)renderZone
                                            fillMode:(SdkCoreStreamRenderingFillMode)fillMode
                                       zebrasEnabled:(BOOL)zebrasEnabled zebrasThreshold:(float)zebrasThreshold
                                        textureWidth:(int)textureWidth
                                     textureDarWidth:(int)textureDarWidth textureDarHeight:(int)textureDarHeight
                               textureLoaderlistener:(id<SdkCoreTextureLoaderListener> _Nullable)textureLoaderlistener
                                   histogramsEnabled:(BOOL)histogramsEnabled
                                     overlayListener:(id<SdkCoreRendererOverlayListener> _Nonnull)overlayListener
                                            listener:(id<SdkCoreRendererListener> _Nonnull)listener
NS_SWIFT_NAME(startRenderer(renderZone:fillMode:zebrasEnabled:zebrasThreshold:textureWidth:textureDarWidth:textureDarHeight:textureLoaderlistener:histogramsEnabled:overlayListener:listener:));

/**
 Starts stream sink.

 Must be called on main thread. Stream must be opened.

 - parameter sink:    sink to start
 - parameter mediaId: identifies the stream media to deliver to the sink
 */
- (void) startSink:(SdkCoreSink * _Nonnull)sink mediaId:(UInt32)mediaId;

/**
 Create a native video stream.

 - parameter pompLoopUtil: pomp loop utility
 - parameter source: video stream source
 - parameter listener: a listener that will be called when events happen on the stream
 */
- (instancetype _Nullable)initWithPompLoopUtil:(PompLoopUtil * _Nonnull)pompLoopUtil
                                        source:(id<SdkCoreSource> _Nonnull)source
                                         track:(NSString * _Nullable)track
                                      listener:(id<SdkCoreStreamListener> _Nonnull)listener;

@end

/**
 Listener that will be called when events about the stream are emitted by the native stream object.
 */
@protocol SdkCoreStreamListener <NSObject>

/** Called when the stream has been open.
 
 - parameter stream: the stream
 */
- (void)streamDidOpen:(SdkCoreStream * _Nonnull)stream;

/** Called when the stream is closing.
 
 - parameter stream: the stream
 - parameter reason: close reason
 */
- (void)streamDidClosing:(SdkCoreStream * _Nonnull)stream
                  reason:(SdkCoreStreamCloseReason)reason;

/** Called when the stream is closed.
 
 - parameter stream: the stream
 - parameter reason: close reason
 */
- (void)streamDidClose:(SdkCoreStream * _Nonnull)stream
                reason:(SdkCoreStreamCloseReason)reason;

/** Called when the stream is ready and when the playback state changed.
 
 - parameter stream: the stream
 - parameter duration: stream duration, in milliseconds, 0 when irrelevant
 - parameter position: playback position, in milliseconds
 - parameter speed: playback speed (multiplier), 0 when paused
 - parameter timestamp: state collection timestamp, based on time provided by 'systemUptime' method of 'NSProcessInfo'
 */
- (void)streamPlaybackStateDidChange:(SdkCoreStream * _Nonnull)stream
                            duration:(int64_t)duration
                            position:(int64_t)position
                               speed:(double)speed
                           timestamp:(NSTimeInterval)timestamp;

/** Called when a new media is available for the stream.

 - parameter stream: the stream
 - parameter mediaInfo: information concerning the new media
 */
- (void)mediaAdded:(SdkCoreStream * _Nonnull)stream
         mediaInfo:(SdkCoreMediaInfo * _Nonnull)mediaInfo;

/** Called when a media became unavailable for the stream.

 - parameter stream: the stream
 - parameter mediaInfo: information concerning the removed media
 */
- (void)mediaRemoved:(SdkCoreStream * _Nonnull)stream
           mediaInfo:(SdkCoreMediaInfo * _Nonnull)mediaInfo;

@end
