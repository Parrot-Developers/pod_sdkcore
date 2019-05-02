/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoMediarecordstateUid;

struct arsdk_cmd;

/** State of video */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordstateVideostatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedStateSdkCoreUnknown = -1,

    /** Video was stopped */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedStateStopped = 0,

    /** Video was started */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedStateStarted = 1,

    /** Video was failed */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedStateFailed = 2,

};
#define ArsdkFeatureJpsumoMediarecordstateVideostatechangedStateCnt 3

/** State of device picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2StateSdkCoreUnknown = -1,

    /** The picture recording is ready */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2StateReady = 0,

    /** The picture recording is busy */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2StateBusy = 1,

    /** The picture recording is not available */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2StateNotavailable = 2,

};
#define ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2StateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2Error) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2ErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2ErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2ErrorUnknown = 1,

    /** Picture camera is out of order */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2ErrorCameraKo = 2,

    /** Memory full ; cannot save one additional picture */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2ErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2ErrorLowbattery = 4,

};
#define ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2ErrorCnt 5

/** State of device video recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2StateSdkCoreUnknown = -1,

    /** Video is stopped */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2StateStopped = 0,

    /** Video is started */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2StateStarted = 1,

    /** The video recording is not available */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2StateNotavailable = 2,

};
#define ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2StateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2Error) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2ErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2ErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2ErrorUnknown = 1,

    /** Video camera is out of order */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2ErrorCameraKo = 2,

    /** Memory full ; cannot save one additional video */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2ErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2ErrorLowbattery = 4,

};
#define ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2ErrorCnt 5

@protocol ArsdkFeatureJpsumoMediarecordstateCallback<NSObject>

@optional

/**
 @deprecated
State of picture recording 

 - parameter state: 1 if picture has been taken, 0 otherwise
 - parameter mass_storage_id: Mass storage id where the picture was recorded
*/
- (void)onPictureStateChanged:(NSUInteger)state massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(onPictureStateChanged(state:massStorageId:));

/**
 @deprecated
State of video recording 

 - parameter state: 
 - parameter mass_storage_id: Mass storage id where the video was recorded
*/
- (void)onVideoStateChanged:(ArsdkFeatureJpsumoMediarecordstateVideostatechangedState)state massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(onVideoStateChanged(state:massStorageId:));

/**
 State of device picture recording changed 

 - parameter state: 
 - parameter error: 
*/
- (void)onPictureStateChangedV2:(ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2State)state error:(ArsdkFeatureJpsumoMediarecordstatePicturestatechangedv2Error)error
NS_SWIFT_NAME(onPictureStateChangedV2(state:error:));

/**
 State of device video recording changed 

 - parameter state: 
 - parameter error: 
*/
- (void)onVideoStateChangedV2:(ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2State)state error:(ArsdkFeatureJpsumoMediarecordstateVideostatechangedv2Error)error
NS_SWIFT_NAME(onVideoStateChangedV2(state:error:));


@end

@interface ArsdkFeatureJpsumoMediarecordstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoMediarecordstateCallback>)callback;

@end

