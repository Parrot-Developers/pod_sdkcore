/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonCalibrationstateUid;

struct arsdk_cmd;

/** The axis to calibrate */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxis) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxisSdkCoreUnknown = -1,

    /** If the current calibration axis should be the x axis */
    ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxisXaxis = 0,

    /** If the current calibration axis should be the y axis */
    ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxisYaxis = 1,

    /** If the current calibration axis should be the z axis */
    ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxisZaxis = 2,

    /** If none of the axis should be calibrated */
    ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxisNone = 3,

};
#define ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxisCnt 4

/** State of pitot calibration */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedStateSdkCoreUnknown = -1,

    /** Calibration is ok */
    ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedStateDone = 0,

    /** Calibration is started, waiting user action */
    ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedStateReady = 1,

    /** Calibration is in progress */
    ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedStateInProgress = 2,

    /** Calibration is required */
    ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedStateRequired = 3,

};
#define ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedStateCnt 4

@protocol ArsdkFeatureCommonCalibrationstateCallback<NSObject>

@optional

/**
 Magneto calib process axis state. 

 - parameter xAxisCalibration: State of the x axis (roll) calibration : 1 if calibration is done, 0 otherwise
 - parameter yAxisCalibration: State of the y axis (pitch) calibration : 1 if calibration is done, 0 otherwise
 - parameter zAxisCalibration: State of the z axis (yaw) calibration : 1 if calibration is done, 0 otherwise
 - parameter calibrationFailed: 1 if calibration has failed, 0 otherwise. If this arg is 1, consider all previous arg as 0
*/
- (void)onMagnetoCalibrationStateChanged:(NSUInteger)xaxiscalibration yaxiscalibration:(NSUInteger)yaxiscalibration zaxiscalibration:(NSUInteger)zaxiscalibration calibrationfailed:(NSUInteger)calibrationfailed
NS_SWIFT_NAME(onMagnetoCalibrationStateChanged(xaxiscalibration:yaxiscalibration:zaxiscalibration:calibrationfailed:));

/**
 Calibration required. 

 - parameter required: 1 if calibration is required, 0 if current calibration is still valid
*/
- (void)onMagnetoCalibrationRequiredState:(NSUInteger)required
NS_SWIFT_NAME(onMagnetoCalibrationRequiredState(required:));

/**
 Axis to calibrate during calibration process. 

 - parameter axis: 
*/
- (void)onMagnetoCalibrationAxisToCalibrateChanged:(ArsdkFeatureCommonCalibrationstateMagnetocalibrationaxistocalibratechangedAxis)axis
NS_SWIFT_NAME(onMagnetoCalibrationAxisToCalibrateChanged(axis:));

/**
 Calibration process state. 

 - parameter started: 1 if calibration has started, 0 otherwise
*/
- (void)onMagnetoCalibrationStartedChanged:(NSUInteger)started
NS_SWIFT_NAME(onMagnetoCalibrationStartedChanged(started:));

/**
 Sent when the state of the pitot calibration has changed 

 - parameter state: 
 - parameter lastError: lastError : 1 if an error occured and 0 if not
*/
- (void)onPitotCalibrationStateChanged:(ArsdkFeatureCommonCalibrationstatePitotcalibrationstatechangedState)state lasterror:(NSUInteger)lasterror
NS_SWIFT_NAME(onPitotCalibrationStateChanged(state:lasterror:));


@end

@interface ArsdkFeatureCommonCalibrationstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonCalibrationstateCallback>)callback;

@end

