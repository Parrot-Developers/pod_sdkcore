/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupMediarecordstateUid;

struct arsdk_cmd;

/** State of device picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2StateSdkCoreUnknown = -1,

    /** The picture recording is ready */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2StateReady = 0,

    /** The picture recording is busy */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2StateBusy = 1,

    /** The picture recording is not available */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2StateNotavailable = 2,

};
#define ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2StateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2Error) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2ErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2ErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2ErrorUnknown = 1,

    /** Picture camera is out of order */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2ErrorCameraKo = 2,

    /** Memory full ; cannot save one additional picture */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2ErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2ErrorLowbattery = 4,

};
#define ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2ErrorCnt 5

/** State of device video recording */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordstateVideostatechangedv2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2StateSdkCoreUnknown = -1,

    /** Video is stopped */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2StateStopped = 0,

    /** Video is started */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2StateStarted = 1,

    /** The video recording is not available */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2StateNotavailable = 2,

};
#define ArsdkFeaturePowerupMediarecordstateVideostatechangedv2StateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordstateVideostatechangedv2Error) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2ErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2ErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2ErrorUnknown = 1,

    /** Video camera is out of order */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2ErrorCameraKo = 2,

    /** Memory full ; cannot save one additional video */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2ErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeaturePowerupMediarecordstateVideostatechangedv2ErrorLowbattery = 4,

};
#define ArsdkFeaturePowerupMediarecordstateVideostatechangedv2ErrorCnt 5

@protocol ArsdkFeaturePowerupMediarecordstateCallback<NSObject>

@optional

/**
 State of device picture recording changed 

 - parameter state: 
 - parameter error: 
*/
- (void)onPictureStateChangedV2:(ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2State)state error:(ArsdkFeaturePowerupMediarecordstatePicturestatechangedv2Error)error
NS_SWIFT_NAME(onPictureStateChangedV2(state:error:));

/**
 State of device video recording changed 

 - parameter state: 
 - parameter error: 
*/
- (void)onVideoStateChangedV2:(ArsdkFeaturePowerupMediarecordstateVideostatechangedv2State)state error:(ArsdkFeaturePowerupMediarecordstateVideostatechangedv2Error)error
NS_SWIFT_NAME(onVideoStateChangedV2(state:error:));


@end

@interface ArsdkFeaturePowerupMediarecordstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeaturePowerupMediarecordstateCallback>)callback;

@end

