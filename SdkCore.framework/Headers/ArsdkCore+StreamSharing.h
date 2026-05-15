//    Copyright (C) 2024 Parrot Drones SAS
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
#import "ArsdkCore+Stream.h"

/** ArsdkStream resolution */
typedef NS_ENUM(NSInteger, ArsdkStreamResolution) {
    ArsdkStreamResolution1080p = 0,

    ArsdkStreamResolution720p = 1,

    ArsdkStreamResolution480p = 2,

    ArsdkStreamResolution360p = 3,

    ArsdkStreamResolution240p = 4
};

/** ArsdkStream RTSP transport */
typedef NS_ENUM(NSInteger, ArsdkStreamRtspTransport) {
    ArsdkStreamRtspTransportUdp = 0,
    ArsdkStreamRtspTransportTcp = 1
};

/** ArsdkStream event  */
typedef NS_ENUM(NSInteger, ArsdkStreamEvent) {
    ArsdkStreamEventStart = 0,
    ArsdkStreamEventStop = 1,
    ArsdkStreamEventBegin = 2,
    ArsdkStreamEventEnd = 3,
    ArsdkStreamEventConnecting = 4,
    ArsdkStreamEventError = 5
};

/** ArsdkStream unit system */
typedef NS_ENUM(NSInteger, ArsdkStreamUnitSystem) {
    ArsdkStreamUnitSystemMetric = 0,

    ArsdkStreamUnitSystemImperial = 1,

    ArsdkStreamUnitSystemAviation = 2
};

/** ArsdkStream coordinate system */
typedef NS_ENUM(NSInteger, ArsdkStreamCoordinateSystem) {

    ArsdkStreamCoordinateSystemDms = 0,

    ArsdkStreamCoordinateSystemDd = 1,

    ArsdkStreamCoordinateSystemMgrs = 2,

    ArsdkStreamCoordinateSystemUtm = 3,

    ArsdkStreamCoordinateSystemSk42 = 4
};

/** ArsdkStream connection state */
typedef NS_ENUM(NSInteger, ArsdkStreamConnectionState) {
    ArsdkStreamConnectionStateUnknown = 0,

    ArsdkStreamConnectionStateDisconnected = 1,

    ArsdkStreamConnectionStateConnecting = 2,

    ArsdkStreamConnectionStateConnected = 3,
};

/** ArsdkStream disconnection reason */
typedef NS_ENUM(NSInteger, ArsdkStreamDisconnectionReason) {
    ArsdkStreamDisconnectionReasonUnknown = 0,

    ArsdkStreamDisconnectionReasonClientRequest = 1,

    ArsdkStreamDisconnectionReasonServerRequest = 2,

    ArsdkStreamDisconnectionReasonNetworkError = 3,

    ArsdkStreamDisconnectionReasonRefused = 4,

    ArsdkStreamDisconnectionReasonAlreadyInUse = 5,

    ArsdkStreamDisconnectionReasonTimeout = 6,

    ArsdkStreamDisconnectionReasonInternalError = 7,
};

/** Stream record stop reason. */
typedef NS_ENUM(NSInteger, ArsdkStreamRecordStopReason) {
    ArsdkStreamRecordStopReasonNone = -1,

    ArsdkStreamRecordStopReasonUnknown = 0,

    ArsdkStreamRecordStopReasonUserRequest = 1,

    ArsdkStreamRecordStopReasonAborted = 2,

    ArsdkStreamRecordStopReasonPeerShutdown = 3,

    ArsdkStreamRecordStopReasonNewSessionRestart = 4,

    ArsdkStreamRecordStopReasonInternalRestart = 5,

    ArsdkStreamRecordStopReasonNoSpaceLeft = 6,

    ArsdkStreamRecordStopReasonInternalError = 7,
};

/** Stream sharing overlay recording resolution */
typedef NS_ENUM(NSInteger, ArsdkStreamOverlayResolution) {
	ArsdkStreamOverlayResolutionUnknown = 0,

	ArsdkStreamOverlayResolutionVideo720p = 1,

	ArsdkStreamOverlayResolutionVideo1080p = 2,

	ArsdkStreamOverlayResolutionVideo2160p = 3,

	ArsdkStreamOverlayResolutionVideo4320p = 4,

	ArsdkStreamOverlayResolutionPhoto12Mpx = 5,

	ArsdkStreamOverlayResolutionPhoto21Mpx = 6,

	ArsdkStreamOverlayResolutionPhoto48Mpx = 7,

	ArsdkStreamOverlayResolutionPhoto50Mpx = 8
};

@protocol ArsdkStreamSharingDelegate

- (void)onRecordEvent:(enum ArsdkStreamEvent)event
               reason:(enum ArsdkStreamRecordStopReason)reason
                 file:(nullable NSString *)fileName;

- (void)onStreamEvent:(enum ArsdkStreamEvent)event
             status:(int)status
                url:(nullable NSString *)url
             reason:(enum ArsdkStreamDisconnectionReason)reason;

@end

@interface ArsdkStreamSharing : NSObject

@property(nonatomic, weak, nullable) id<ArsdkStreamSharingDelegate> delegate;

@property struct sdkcore_stream_sharing *_Nullable sdkCoreStreamSharing;

/** Dispatch queue running the pomp loop */
@property(nonatomic) PompLoopUtil *_Nonnull pompLoopUtil;

- (nonnull instancetype)initWithPompLoopUtil:(nonnull PompLoopUtil *)pompLoopUtil
                       streamSharingDelegate:(nonnull id<ArsdkStreamSharingDelegate>)streamSharingDelegate;

- (void)start;

- (void)stop;

- (void)setStream:(nullable ArsdkStream *)stream;

- (void)startRecording:(nonnull NSString *)mediaDir
            privateDir:(nonnull NSString *)privateDir
            resolution:(ArsdkStreamResolution)resolution
               bitrate:(int)bitrate
               overlay:(BOOL)overlay
            unitSystem:(ArsdkStreamUnitSystem)unitSystem
      coordinateSystem:(ArsdkStreamCoordinateSystem)coordinateSystem;

- (void)stopRecording;

- (void)createRecord;

- (void)finalizeRecord:(ArsdkStreamRecordStopReason)reason;

- (void)startStream:(nonnull NSString *)url
          resolution:(ArsdkStreamResolution)resolution
          maxBitrate:(int)maxBitrate
             overlay:(BOOL)overlay
          unitSystem:(ArsdkStreamUnitSystem)unitSystem
    coordinateSystem:(ArsdkStreamCoordinateSystem)coordinateSystem
       rtspTransport:(ArsdkStreamRtspTransport)rtspTransport;

- (void)stopStream;

- (void)setRecordingState:(BOOL)recording duration:(UInt64)duration;

- (void)setRecordingFormat:(ArsdkStreamOverlayResolution)resolution
                 framerate:(float)framerate
                 isThermal:(BOOL)isThermal;

- (void)setControllerBatteryLevel:(UInt32)batteryLevel;

enum pdraw_muxer_connection_state;
enum pdraw_muxer_disconnection_reason;

+ (ArsdkStreamConnectionState)convertCEnumToConnectionState:(enum pdraw_muxer_connection_state)connection_state;

+ (ArsdkStreamDisconnectionReason)convertCEnumToDisconnectionReason:(enum pdraw_muxer_disconnection_reason)disconnection_reason;
+ (enum pdraw_stsh_record_stop_reason)convertStopReasonToCEnum:(ArsdkStreamRecordStopReason)reason;
+ (ArsdkStreamRecordStopReason)convertCEnumToStopReason:(enum pdraw_stsh_record_stop_reason)stop_reason;

@end

/** SdkCoreStreamSharing native backend. */
struct sdkcore_stream_sharing;

/** SdkCoreStreamSharing native backend callbacks */
struct sdkcore_stream_sharing_cbs
{
    /**
     * Record service started function, called when a start operation is
     * complete or has failed (optional, can be null, but highly recommended
     * for correct life cycle management).
     * @param[in] status: 0 on success, negative errno value on error
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable record_start_resp)(int status, void *_Nonnull userdata);

    /**
     * Record service stopped function, called when a stop operation is
     * complete or has failed (optional, can be null, but highly recommended
     * for correct life cycle management).
     * @param[in] status: 0 on success, negative errno value on error
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable record_stop_resp)(int status, void *_Nonnull userdata);

    /**
     * Record file created function, called when a new recording file
     * is created and recording is started (optional, can be null).
     * @param[in] file_name: recording file path
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable record_file_created)(const char *_Nonnull file_name,
                                          void *_Nonnull userdata);

    /**
     * Record file finalized function, called when a recording has
     * ended and the file has been finalized (optional, can be null).
     * @param[in] file_name: recording file path
     * @param[in] reason: recording stop reason
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable record_file_finalized)(const char *_Nonnull file_name,
                                            enum ArsdkStreamRecordStopReason reason,
                                            void *_Nonnull userdata);

    /**
     * Record error function, called when an error occurred on the
     * recording (optional, can be null). The file_name parameter can be
     * NULL, it is only set when an error occurred on a known file name.
     * The status parameter is a negative errno representing the error.
     * @param[in] file_name: recording file path
     * @param[in] status: negative errno representing the error
     * @param[in] reason: recording stop reason
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable record_error)(const char *_Nullable file_name,
                                   int status,
                                   enum ArsdkStreamRecordStopReason reason,
                                   void *_Nonnull userdata);

    /**
     * Stream service started function, called when a start operation is
     * complete or has failed (optional, can be null, but highly recommended
     * for correct life cycle management).
     * @param[in] status: 0 on success, negative errno value on error
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable stream_start_resp)(int status, void *_Nonnull userdata);

    /**
     * Stream service stopped function, called when a stop operation is
     * complete or has failed (optional, can be null, but highly recommended
     * for correct life cycle management).
     * @param[in] status: 0 on success, negative errno value on error
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable stream_stop_resp)(int status, void *_Nonnull userdata);

    /**
     * Stream connection state function, called when streaming to an
     * Stream URL connection state has changed (optional, can be null).
     * @param[in] url: stream URL
     * @param[in] state: stream connection state
     * @param[in] reason: stream disconnection reason (if available)
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable stream_connection_state)(const char *_Nullable url,
                                              ArsdkStreamConnectionState state,
                                              ArsdkStreamDisconnectionReason reason,
                                              void *_Nonnull userdata);

    /**
     * Stream error function, called when an error occurred on the
     * stream (optional, can be null). The url parameter can be NULL,
     * it is only set when an error occurred on a known URL.
     * The status parameter is a negative errno representing the error.
     * @param[in] url: stream URL
     * @param[in] status: negative errno representing the error
     * @param[in] reason: stream disconnection reason (if available)
     * @param[in] userdata: user data pointer
     */
    void (*_Nullable stream_error)(const char *_Nullable url,
                                   int status,
                                   ArsdkStreamDisconnectionReason reason,
                                   void *_Nonnull userdata);
};

/**
 * Destroys stream sharing.
 * If started, stream sharing will be stopped beforehand.
 * @param[in] self: stream sharing instance to destroy
 * @param[out] userdata: upon success, contains userdata provided at creation;
 *                       otherwise unchanged; may be NULL
 * @return 0 in case of success, a negative errno otherwise
 */
int sdkcore_stream_sharing_destroy(struct sdkcore_stream_sharing *_Nonnull self,
                                   void *_Nullable *_Nullable userdata);
