/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCalibrationstateUid;

struct arsdk_cmd;

/** The global status of the calibration */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstateStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstateStatusSdkCoreUnknown = -1,

    /** A calibration is needed */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstateStatusUnreliable = 0,

    /** A calibration is applied, but still need to be checked */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstateStatusAssessing = 1,

    /** The sensor is properly calibrated */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstateStatusCalibrated = 2,

};
#define ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstateStatusCnt 3

/** The calibration state */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2StateSdkCoreUnknown = -1,

    /** A calibration is needed */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2StateNotcalibrated = 0,

    /** A calibration is in progress on the X axis */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2StateCalibratingx = 1,

    /** A calibration is in progress on the Y axis */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2StateCalibratingy = 2,

    /** A calibration is in progress on the Z axis */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2StateCalibratingz = 3,

    /** The sensor is calibrated */
    ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2StateCalibrated = 4,

};
#define ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2StateCnt 5

@protocol ArsdkFeatureSkyctrlCalibrationstateCallback<NSObject>

@optional

/**
 The current state of the magnetometer calibration.
If the calibration quality updates are enabled, this event is sent at every calibration quality update. This is useful for calibration screens, but creates a lot of traffic on network.\ When the calibration quality updates are disabled, this event is only sent when the status parameter changes. 

 - parameter status: 
 - parameter X_Quality: Calibration quality on X axis.
0 is bad, 255 is perfect
 - parameter Y_Quality: Calibration quality on Y axis.
0 is bad, 255 is perfect
 - parameter Z_Quality: Calibration quality on Z axis.
0 is bad, 255 is perfect
*/
- (void)onMagnetoCalibrationState:(ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstateStatus)status xQuality:(NSUInteger)xQuality yQuality:(NSUInteger)yQuality zQuality:(NSUInteger)zQuality
NS_SWIFT_NAME(onMagnetoCalibrationState(status:xQuality:yQuality:zQuality:));

/**
 State of the magnetometer calibration quality sender.
This determines the trigger of the [MagnetoCalibrationState](#4-23-0) event. 

 - parameter enabled: Flag (is the feature enabled).
1 = The skycontroller sends updated when quality is updated
0 = The skycontroller only sent updated when state is updated
*/
- (void)onMagnetoCalibrationQualityUpdatesState:(NSUInteger)enabled
NS_SWIFT_NAME(onMagnetoCalibrationQualityUpdatesState(enabled:));

/**
 The current state of magnetometer calibration.
This event is used by products which does require a step-by-step calibration.
When calibrating, the product will go, in order, through X, Y and Z axis calibration, then into calibrated state. If at any point it goes back to not-calibrated, it means that the calibration process failed and should be manually restarted with the [StartCalibration](#4-22-1) command. 

 - parameter state: 
*/
- (void)onMagnetoCalibrationStateV2:(ArsdkFeatureSkyctrlCalibrationstateMagnetocalibrationstatev2State)state
NS_SWIFT_NAME(onMagnetoCalibrationStateV2(state:));


@end

@interface ArsdkFeatureSkyctrlCalibrationstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSkyctrlCalibrationstateCallback>)callback;

@end

