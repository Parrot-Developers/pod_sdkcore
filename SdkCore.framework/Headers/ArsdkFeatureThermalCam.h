/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureThermalCamUid;

struct arsdk_cmd;

/** Camera state */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalCamState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalCamStateSdkCoreUnknown = -1,

    /** Camera is activated */
    ArsdkFeatureThermalCamStateActivated = 0,

    /** Camera is deactivated */
    ArsdkFeatureThermalCamStateDeactivated = 1,

    /** Activation is pending */
    ArsdkFeatureThermalCamStatePending = 2,

};
#define ArsdkFeatureThermalCamStateCnt 3

/** Thermal range */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalCamRange) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalCamRangeSdkCoreUnknown = -1,

    /** High range (from 0 to 400°C) */
    ArsdkFeatureThermalCamRangeHigh = 0,

    /** Low range (from 0 to 120°C) */
    ArsdkFeatureThermalCamRangeLow = 1,

};
#define ArsdkFeatureThermalCamRangeCnt 2

@interface ArsdkFeatureThermalCamRangeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureThermalCamRange)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureThermalCamRange val))cb;

@end

/** Battery state */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalCamChargingState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalCamChargingStateSdkCoreUnknown = -1,

    /** Power cable is unplugged */
    ArsdkFeatureThermalCamChargingStateNotCharging = 0,

    /** Power save mode when battery is criticaly low */
    ArsdkFeatureThermalCamChargingStateChargingOnly = 1,

    /** Battery is charging correctly */
    ArsdkFeatureThermalCamChargingStateCharging = 2,

    /** Charging state is unknown */
    ArsdkFeatureThermalCamChargingStateUnknown = 3,

};
#define ArsdkFeatureThermalCamChargingStateCnt 4

/** Camera Thermal sensor flat field calibration(FFC) status */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalCamFlatFieldCalibrationState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalCamFlatFieldCalibrationStateSdkCoreUnknown = -1,

    /** Sensor is calibrated */
    ArsdkFeatureThermalCamFlatFieldCalibrationStateCalibrated = 0,

    /** Sensor needs to be calibrated */
    ArsdkFeatureThermalCamFlatFieldCalibrationStateCalibrationRequired = 1,

    /** Sensor calibration is in progress */
    ArsdkFeatureThermalCamFlatFieldCalibrationStateCalibrationInProgress = 2,

    /** Sensor FFC state is unknown */
    ArsdkFeatureThermalCamFlatFieldCalibrationStateCalibrationUnknown = 3,

};
#define ArsdkFeatureThermalCamFlatFieldCalibrationStateCnt 4

/** flat field calibration(FFC) mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalCamFlatFieldCalibrationMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalCamFlatFieldCalibrationModeSdkCoreUnknown = -1,

    /** calibration occurs automatically when needed */
    ArsdkFeatureThermalCamFlatFieldCalibrationModeAutomatic = 0,

    /** calibration occurs on user request only */
    ArsdkFeatureThermalCamFlatFieldCalibrationModeManual = 1,

};
#define ArsdkFeatureThermalCamFlatFieldCalibrationModeCnt 2

@protocol ArsdkFeatureThermalCamCallback<NSObject>

@optional

/**
 Camera state. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter state: 
 - parameter list_flags: 
*/
- (void)onCameraState:(NSUInteger)camId state:(ArsdkFeatureThermalCamState)state listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onCameraState(camId:state:listFlagsBitField:));

/**
 Thermal cam sensitivity range. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter current_range: 
 - parameter available_ranges: 
 - parameter list_flags: 
*/
- (void)onSensitivity:(NSUInteger)camId currentRange:(ArsdkFeatureThermalCamRange)currentRange availableRangesBitField:(NSUInteger)availableRangesBitField listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onSensitivity(camId:currentRange:availableRangesBitField:listFlagsBitField:));

/**
 Visible camera position relative to the drone. The thermal camera is considered at an ideal position. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter roll: Euler angle roll in degree difference between visible cam and thermal cam.
 - parameter pitch: Euler angle pitch in degree difference between visible cam and thermal cam.
 - parameter yaw: Euler angle yaw in degree difference between visible cam and thermal cam.
 - parameter list_flags: 
*/
- (void)onCalibrationInfos:(NSUInteger)camId roll:(float)roll pitch:(float)pitch yaw:(float)yaw listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onCalibrationInfos(camId:roll:pitch:yaw:listFlagsBitField:));

/**
 Thermal cam charging status. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter state: 
 - parameter list_flags: 
*/
- (void)onChargingStatus:(NSUInteger)camId state:(ArsdkFeatureThermalCamChargingState)state listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onChargingStatus(camId:state:listFlagsBitField:));

/**
 Thermal cam FFC status. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter state: 
 - parameter list_flags: 
*/
- (void)onFlatFieldCalibrationStatus:(NSUInteger)camId state:(ArsdkFeatureThermalCamFlatFieldCalibrationState)state listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onFlatFieldCalibrationStatus(camId:state:listFlagsBitField:));

/**
 Thermal cam FFC mode. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter mode: 
 - parameter list_flags: 
*/
- (void)onFlatFieldCalibrationMode:(NSUInteger)camId mode:(ArsdkFeatureThermalCamFlatFieldCalibrationMode)mode listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onFlatFieldCalibrationMode(camId:mode:listFlagsBitField:));


@end

@interface ArsdkFeatureThermalCam : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureThermalCamCallback>)callback;

/**
 Activate a given thermal camera.
Activating a camera may deactivate others on some drones. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))activateEncoder:(NSUInteger)camId
NS_SWIFT_NAME(activateEncoder(camId:));

/**
 Deactivate a given thermal camera. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))deactivateEncoder:(NSUInteger)camId
NS_SWIFT_NAME(deactivateEncoder(camId:));

/**
 Set the thermal camera sensitivity range. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter range: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setSensitivityEncoder:(NSUInteger)camId range:(ArsdkFeatureThermalCamRange)range
NS_SWIFT_NAME(setSensitivityEncoder(camId:range:));

/**
 Request the sensor to start thermal flat field calibration 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))flatFieldCalibrateEncoder:(NSUInteger)camId
NS_SWIFT_NAME(flatFieldCalibrateEncoder(camId:));

/**
 Set the FFC mode. 

 - parameter cam_id: Thermal camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setFlatFieldCalibrationModeEncoder:(NSUInteger)camId mode:(ArsdkFeatureThermalCamFlatFieldCalibrationMode)mode
NS_SWIFT_NAME(setFlatFieldCalibrationModeEncoder(camId:mode:));

@end

