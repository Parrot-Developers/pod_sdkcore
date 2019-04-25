/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3MediarecordstateUid;

struct arsdk_cmd;

/** State of video */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordstateVideostatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedStateSdkCoreUnknown = -1,

    /** Video was stopped */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedStateStopped = 0,

    /** Video was started */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedStateStarted = 1,

    /** Video was failed */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedStateFailed = 2,

    /** Video was auto stopped */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedStateAutostopped = 3,

};
#define ArsdkFeatureArdrone3MediarecordstateVideostatechangedStateCnt 4

/** State of device picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2StateSdkCoreUnknown = -1,

    /** The picture recording is ready */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2StateReady = 0,

    /** The picture recording is busy */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2StateBusy = 1,

    /** The picture recording is not available */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2StateNotavailable = 2,

};
#define ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2StateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2Error) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2ErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2ErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2ErrorUnknown = 1,

    /** Picture camera is out of order */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2ErrorCameraKo = 2,

    /** Memory full ; cannot save one additional picture */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2ErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2ErrorLowbattery = 4,

};
#define ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2ErrorCnt 5

/** State of device video recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2StateSdkCoreUnknown = -1,

    /** Video is stopped */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2StateStopped = 0,

    /** Video is started */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2StateStarted = 1,

    /** The video recording is not available */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2StateNotavailable = 2,

};
#define ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2StateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2Error) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2ErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2ErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2ErrorUnknown = 1,

    /** Video camera is out of order */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2ErrorCameraKo = 2,

    /** Memory full ; cannot save one additional video */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2ErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2ErrorLowbattery = 4,

};
#define ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2ErrorCnt 5

/** Streaming resolution */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreaming) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreamingSdkCoreUnknown = -1,

    /** 360p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreamingRes360p = 0,

    /** 480p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreamingRes480p = 1,

    /** 720p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreamingRes720p = 2,

    /** 1080p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreamingRes1080p = 3,

};
#define ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreamingCnt 4

/** Recording resolution */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecording) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecordingSdkCoreUnknown = -1,

    /** 360p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecordingRes360p = 0,

    /** 480p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecordingRes480p = 1,

    /** 720p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecordingRes720p = 2,

    /** 1080p resolution. */
    ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecordingRes1080p = 3,

};
#define ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecordingCnt 4

@protocol ArsdkFeatureArdrone3MediarecordstateCallback<NSObject>

@optional

/**
 Picture state. 

 - parameter state: 1 if picture has been taken, 0 otherwise
 - parameter mass_storage_id: Mass storage id where the picture was recorded
*/
- (void)onPictureStateChanged:(NSUInteger)state massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(onPictureStateChanged(state:massStorageId:));

/**
 Picture record state. 

 - parameter state: 
 - parameter mass_storage_id: Mass storage id where the video was recorded
*/
- (void)onVideoStateChanged:(ArsdkFeatureArdrone3MediarecordstateVideostatechangedState)state massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(onVideoStateChanged(state:massStorageId:));

/**
 Picture state. 

 - parameter state: 
 - parameter error: 
*/
- (void)onPictureStateChangedV2:(ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2State)state error:(ArsdkFeatureArdrone3MediarecordstatePicturestatechangedv2Error)error
NS_SWIFT_NAME(onPictureStateChangedV2(state:error:));

/**
 Video record state. 

 - parameter state: 
 - parameter error: 
*/
- (void)onVideoStateChangedV2:(ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2State)state error:(ArsdkFeatureArdrone3MediarecordstateVideostatechangedv2Error)error
NS_SWIFT_NAME(onVideoStateChangedV2(state:error:));

/**
 Video resolution.
Informs about streaming and recording video resolutions.
Note that this is only an indication about what the resolution should be. To know the real resolution, you should get it from the frame. 

 - parameter streaming: 
 - parameter recording: 
*/
- (void)onVideoResolutionState:(ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateStreaming)streaming recording:(ArsdkFeatureArdrone3MediarecordstateVideoresolutionstateRecording)recording
NS_SWIFT_NAME(onVideoResolutionState(streaming:recording:));


@end

@interface ArsdkFeatureArdrone3Mediarecordstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3MediarecordstateCallback>)callback;

@end

