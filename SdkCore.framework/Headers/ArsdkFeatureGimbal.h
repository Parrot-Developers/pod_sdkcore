/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureGimbalUid;

struct arsdk_cmd;

/** Gimbal model. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalModel) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalModelSdkCoreUnknown = -1,

    /** Main gimbal.
Only one gimbal of this kind is allowed at a time on a drone. */
    ArsdkFeatureGimbalModelMain = 0,

    /** Front Stereo Camera
Only one gimbal of this kind is allowed at a time on a drone. */
    ArsdkFeatureGimbalModelFstcam = 1,

};
#define ArsdkFeatureGimbalModelCnt 2

/** Feature current state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalStateSdkCoreUnknown = -1,

    /** Feature is not currently active. */
    ArsdkFeatureGimbalStateInactive = 0,

    /** Feature is currently active. */
    ArsdkFeatureGimbalStateActive = 1,

};
#define ArsdkFeatureGimbalStateCnt 2

/** Gimbal error. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalErrorSdkCoreUnknown = -1,

    /** Calibration error. Verify that nothing is blocking the gimbal movement. */
    ArsdkFeatureGimbalErrorCalibrationError = 0,

    /** Overload error. Verify that nothing is blocking the gimbal movement. */
    ArsdkFeatureGimbalErrorOverloadError = 1,

    /** Communication error. Wait for retry. */
    ArsdkFeatureGimbalErrorCommError = 2,

    /** Critical error. Drone must be restarted. */
    ArsdkFeatureGimbalErrorCriticalError = 3,

};
#define ArsdkFeatureGimbalErrorCnt 4

@interface ArsdkFeatureGimbalErrorBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureGimbalError)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureGimbalError val))cb;

@end

/** Calibration state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalCalibrationState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalCalibrationStateSdkCoreUnknown = -1,

    /** Calibration is required. */
    ArsdkFeatureGimbalCalibrationStateRequired = 0,

    /** Calibration is in progress. */
    ArsdkFeatureGimbalCalibrationStateInProgress = 1,

    /** Calibration is ok. */
    ArsdkFeatureGimbalCalibrationStateOk = 2,

};
#define ArsdkFeatureGimbalCalibrationStateCnt 3

/** Calibration result. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalCalibrationResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalCalibrationResultSdkCoreUnknown = -1,

    /** Calibration completed successfully. */
    ArsdkFeatureGimbalCalibrationResultSuccess = 0,

    /** Calibration failed. */
    ArsdkFeatureGimbalCalibrationResultFailure = 1,

    /** Calibration canceled, with command `cancel_calibration`. */
    ArsdkFeatureGimbalCalibrationResultCanceled = 2,

};
#define ArsdkFeatureGimbalCalibrationResultCnt 3

/** Axis. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalAxis) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalAxisSdkCoreUnknown = -1,

    /** Yaw axis. */
    ArsdkFeatureGimbalAxisYaw = 0,

    /** Pitch axis. */
    ArsdkFeatureGimbalAxisPitch = 1,

    /** Roll axis. */
    ArsdkFeatureGimbalAxisRoll = 2,

};
#define ArsdkFeatureGimbalAxisCnt 3

@interface ArsdkFeatureGimbalAxisBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureGimbalAxis)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureGimbalAxis val))cb;

@end

/** Gimbal control mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalControlMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalControlModeSdkCoreUnknown = -1,

    /** Attitude is set by giving a position. */
    ArsdkFeatureGimbalControlModePosition = 0,

    /** Attitude is set by giving a velocity. */
    ArsdkFeatureGimbalControlModeVelocity = 1,

};
#define ArsdkFeatureGimbalControlModeCnt 2

/** Frame of reference. */
typedef NS_ENUM(NSInteger, ArsdkFeatureGimbalFrameOfReference) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGimbalFrameOfReferenceSdkCoreUnknown = -1,

    /** None, references are ignored. */
    ArsdkFeatureGimbalFrameOfReferenceNone = 0,

    /** References are expressed in the drone frame of reference, where as seen from the drone:
- roll axis points forward
- pitch axis points on the right hand side
- yaw axis points downward */
    ArsdkFeatureGimbalFrameOfReferenceRelative = 1,

    /** References are expressed in the NED frame of reference, where:
- roll axis points North
- pitch axis points East
- yaw axis points toward the center of the Earth (Down) */
    ArsdkFeatureGimbalFrameOfReferenceAbsolute = 2,

};
#define ArsdkFeatureGimbalFrameOfReferenceCnt 3

@protocol ArsdkFeatureGimbalCallback<NSObject>

@optional

/**
  

 - parameter gimbal_id: id of the gimbal.
Gimbal id is unique and persistent: the same gimbal model on a same drone model always has the same id.
Main/Built-in gimbal has id zero.
 - parameter model: Camera model.
 - parameter axes: Bitfield of axes that can be controlled. If bit is set to 1, it means that the axis can be controlled.
*/
- (void)onGimbalCapabilities:(NSUInteger)gimbalId model:(ArsdkFeatureGimbalModel)model axesBitField:(NSUInteger)axesBitField
NS_SWIFT_NAME(onGimbalCapabilities(gimbalId:model:axesBitField:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter min_yaw: Minimum yaw value, in degrees, in the relative frame of reference.
 - parameter max_yaw: Maximum yaw value, in degrees, in the relative frame of reference.
 - parameter min_pitch: Minimum pitch value, in degrees, in the relative frame of reference.
 - parameter max_pitch: Maximum pitch value, in degrees, in the relative frame of reference.
 - parameter min_roll: Minimum roll value, in degrees, in the relative frame of reference.
 - parameter max_roll: Maximum roll value, in degrees, in the relative frame of reference.
*/
- (void)onRelativeAttitudeBounds:(NSUInteger)gimbalId minYaw:(float)minYaw maxYaw:(float)maxYaw minPitch:(float)minPitch maxPitch:(float)maxPitch minRoll:(float)minRoll maxRoll:(float)maxRoll
NS_SWIFT_NAME(onRelativeAttitudeBounds(gimbalId:minYaw:maxYaw:minPitch:maxPitch:minRoll:maxRoll:));

/**
  

 - parameter gimbal_id: id of the gimbal.
Gimbal id is unique and persistent: the same gimbal model on a same drone model always has the same id.
Main/Built-in gimbal has id zero.
 - parameter min_bound_yaw: Lower bound of the max yaw speed, in degrees per seconds.
 - parameter max_bound_yaw: Upper bound of the max yaw speed, in degrees per seconds.
 - parameter current_yaw: Maximum yaw speed value, in degrees per seconds.
 - parameter min_bound_pitch: Lower bound of the max pitch speed, in degrees per seconds.
 - parameter max_bound_pitch: Upper bound of the max pitch speed, in degrees per seconds.
 - parameter current_pitch: Maximum pitch speed value, in degrees per seconds.
 - parameter min_bound_roll: Lower bound of the max roll speed, in degrees per seconds.
 - parameter max_bound_roll: Upper bound of the max roll speed, in degrees per seconds.
 - parameter current_roll: Maximum roll speed value, in degrees per seconds.
*/
- (void)onMaxSpeed:(NSUInteger)gimbalId minBoundYaw:(float)minBoundYaw maxBoundYaw:(float)maxBoundYaw currentYaw:(float)currentYaw minBoundPitch:(float)minBoundPitch maxBoundPitch:(float)maxBoundPitch currentPitch:(float)currentPitch minBoundRoll:(float)minBoundRoll maxBoundRoll:(float)maxBoundRoll currentRoll:(float)currentRoll
NS_SWIFT_NAME(onMaxSpeed(gimbalId:minBoundYaw:maxBoundYaw:currentYaw:minBoundPitch:maxBoundPitch:currentPitch:minBoundRoll:maxBoundRoll:currentRoll:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter yaw_frame_of_reference: Current frame of reference used for the yaw axis.
 - parameter pitch_frame_of_reference: Current frame of reference used for the pitch axis.
 - parameter roll_frame_of_reference: Current frame of reference used for the roll axis.
 - parameter yaw_relative: Yaw orientation of the gimbal in the relative frame of reference, in degrees.
 - parameter pitch_relative: Pitch orientation of the gimbal in the relative frame of reference, in degrees.
 - parameter roll_relative: Roll orientation of the gimbal in the relative frame of reference, in degrees.
 - parameter yaw_absolute: Yaw orientation of the gimbal in the absolute frame of reference, in degrees.
 - parameter pitch_absolute: Pitch orientation of the gimbal in the absolute frame of reference, in degrees.
 - parameter roll_absolute: Roll orientation of the gimbal in the absolute frame of reference, in degrees.
*/
- (void)onAttitude:(NSUInteger)gimbalId yawFrameOfReference:(ArsdkFeatureGimbalFrameOfReference)yawFrameOfReference pitchFrameOfReference:(ArsdkFeatureGimbalFrameOfReference)pitchFrameOfReference rollFrameOfReference:(ArsdkFeatureGimbalFrameOfReference)rollFrameOfReference yawRelative:(float)yawRelative pitchRelative:(float)pitchRelative rollRelative:(float)rollRelative yawAbsolute:(float)yawAbsolute pitchAbsolute:(float)pitchAbsolute rollAbsolute:(float)rollAbsolute
NS_SWIFT_NAME(onAttitude(gimbalId:yawFrameOfReference:pitchFrameOfReference:rollFrameOfReference:yawRelative:pitchRelative:rollRelative:yawAbsolute:pitchAbsolute:rollAbsolute:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter locked: Bitfield indicating if each axis is temporarily locked.
Bits set to 1 are locked.
*/
- (void)onAxisLockState:(NSUInteger)gimbalId lockedBitField:(NSUInteger)lockedBitField
NS_SWIFT_NAME(onAxisLockState(gimbalId:lockedBitField:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter update_state: offset update states.
 - parameter min_bound_yaw: Lower bound of the offset that can be set on the yaw axis, in degrees.
 - parameter max_bound_yaw: Upper bound of the offset that can be set on the yaw axis, in degrees.
 - parameter current_yaw: Current offset applied to the yaw axis, in degrees.
 - parameter min_bound_pitch: Lower bound of the offset that can be set on the pitch axis, in degrees.
 - parameter max_bound_pitch: Upper bound of the offset that can be set on the pitch axis, in degrees.
 - parameter current_pitch: Current offset applied to the pitch axis, in degrees.
 - parameter min_bound_roll: Lower bound of the offset that can be set on the roll axis, in degrees.
 - parameter max_bound_roll: Upper bound of the offset that can be set on the roll axis, in degrees.
 - parameter current_roll: Current offset applied to the roll axis, in degrees.
*/
- (void)onOffsets:(NSUInteger)gimbalId updateState:(ArsdkFeatureGimbalState)updateState minBoundYaw:(float)minBoundYaw maxBoundYaw:(float)maxBoundYaw currentYaw:(float)currentYaw minBoundPitch:(float)minBoundPitch maxBoundPitch:(float)maxBoundPitch currentPitch:(float)currentPitch minBoundRoll:(float)minBoundRoll maxBoundRoll:(float)maxBoundRoll currentRoll:(float)currentRoll
NS_SWIFT_NAME(onOffsets(gimbalId:updateState:minBoundYaw:maxBoundYaw:currentYaw:minBoundPitch:maxBoundPitch:currentPitch:minBoundRoll:maxBoundRoll:currentRoll:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter min_yaw: Minimum yaw value, in degrees, in the absolute frame of reference.
 - parameter max_yaw: Maximum yaw value, in degrees, in the absolute frame of reference.
 - parameter min_pitch: Minimum pitch value, in degrees, in the absolute frame of reference.
 - parameter max_pitch: Maximum pitch value, in degrees, in the absolute frame of reference.
 - parameter min_roll: Minimum roll value, in degrees, in the absolute frame of reference.
 - parameter max_roll: Maximum roll value, in degrees, in the absolute frame of reference.
*/
- (void)onAbsoluteAttitudeBounds:(NSUInteger)gimbalId minYaw:(float)minYaw maxYaw:(float)maxYaw minPitch:(float)minPitch maxPitch:(float)maxPitch minRoll:(float)minRoll maxRoll:(float)maxRoll
NS_SWIFT_NAME(onAbsoluteAttitudeBounds(gimbalId:minYaw:maxYaw:minPitch:maxPitch:minRoll:maxRoll:));

/**
  

 - parameter state: Current state
 - parameter gimbal_id: id of the gimbal.
*/
- (void)onCalibrationState:(ArsdkFeatureGimbalCalibrationState)state gimbalId:(NSUInteger)gimbalId
NS_SWIFT_NAME(onCalibrationState(state:gimbalId:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter result: Calibration result.
*/
- (void)onCalibrationResult:(NSUInteger)gimbalId result:(ArsdkFeatureGimbalCalibrationResult)result
NS_SWIFT_NAME(onCalibrationResult(gimbalId:result:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter error: Error bitfield.
*/
- (void)onAlert:(NSUInteger)gimbalId errorBitField:(NSUInteger)errorBitField
NS_SWIFT_NAME(onAlert(gimbalId:errorBitField:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter state: Stabilization state.
*/
- (void)onStabilizationState:(NSUInteger)gimbalId state:(ArsdkFeatureGimbalState)state
NS_SWIFT_NAME(onStabilizationState(gimbalId:state:));


@end

@interface ArsdkFeatureGimbal : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureGimbalCallback>)callback;

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter yaw: Deprecated, only the pitch value is used for all axes.
 - parameter pitch: Maximum speed value, in degrees per seconds.
This value will be clamped between [MaxSpeed](#148-3) min_bound_pitch and max_bound_pitch.
 - parameter roll: Deprecated, only the pitch value is used for all axes.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setMaxSpeedEncoder:(NSUInteger)gimbalId yaw:(float)yaw pitch:(float)pitch roll:(float)roll
NS_SWIFT_NAME(setMaxSpeedEncoder(gimbalId:yaw:pitch:roll:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter control_mode: Mode of changing the gimbal attitude.
This parameter will caracterize following parameters units.
 - parameter yaw_frame_of_reference: Frame of reference of the yaw value.
`none` if the yaw target should not be changed.
 - parameter yaw: Yaw value.
Frame of reference is given by the value of `yaw_frame_of_reference`.
Units depend on the `control_mode` value:
- `position`: value is in degrees
- `velocity`, value is in signed ratio (from -1 to 1) of the [MaxSpeed](#148-3) `current_yaw` parameter
 - parameter pitch_frame_of_reference: Frame of reference of the pitch value.
`none` if the pitch target should not be changed.
 - parameter pitch: Pitch value.
Frame of reference is given by the value of `pitch_frame_of_reference`.
Units depend on the `control_mode` value:
- `position`: value is in degrees
- `velocity`, value is in signed ratio (from -1 to 1) of the [MaxSpeed](#148-3) `current_pitch` parameter
 - parameter roll_frame_of_reference: Frame of reference of the roll value.
`none` if the roll target should not be changed.
 - parameter roll: Roll value.
Frame of reference is given by the value of `roll_frame_of_reference`.
Units depend on the `control_mode` value:
- `position`: value is in degrees
- `velocity`, value is in signed ratio (from -1 to 1) of the [MaxSpeed](#148-3) `current_roll` parameter
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setTargetEncoder:(NSUInteger)gimbalId controlMode:(ArsdkFeatureGimbalControlMode)controlMode yawFrameOfReference:(ArsdkFeatureGimbalFrameOfReference)yawFrameOfReference yaw:(float)yaw pitchFrameOfReference:(ArsdkFeatureGimbalFrameOfReference)pitchFrameOfReference pitch:(float)pitch rollFrameOfReference:(ArsdkFeatureGimbalFrameOfReference)rollFrameOfReference roll:(float)roll
NS_SWIFT_NAME(setTargetEncoder(gimbalId:controlMode:yawFrameOfReference:yaw:pitchFrameOfReference:pitch:rollFrameOfReference:roll:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - parameter yaw: Offset, in degrees, that should be applied to the yaw axis.
This value will be clamped between [Offsets](#148-8) min_bound_yaw and max_bound_yaw.
 - parameter pitch: Offset, in degrees, that should be applied to the pitch axis.
This value will be clamped between [[Offsets](#148-8) min_bound_pitch and max_bound_pitch.
 - parameter roll: Offset, in degrees, that should be applied to the roll axis.
This value will be clamped between [Offsets](#148-8) min_bound_roll and max_bound_roll.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setOffsetsEncoder:(NSUInteger)gimbalId yaw:(float)yaw pitch:(float)pitch roll:(float)roll
NS_SWIFT_NAME(setOffsetsEncoder(gimbalId:yaw:pitch:roll:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))resetOrientationEncoder:(NSUInteger)gimbalId
NS_SWIFT_NAME(resetOrientationEncoder(gimbalId:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startOffsetsUpdateEncoder:(NSUInteger)gimbalId
NS_SWIFT_NAME(startOffsetsUpdateEncoder(gimbalId:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopOffsetsUpdateEncoder:(NSUInteger)gimbalId
NS_SWIFT_NAME(stopOffsetsUpdateEncoder(gimbalId:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))calibrateEncoder:(NSUInteger)gimbalId
NS_SWIFT_NAME(calibrateEncoder(gimbalId:));

/**
  

 - parameter gimbal_id: id of the gimbal.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))cancelCalibrationEncoder:(NSUInteger)gimbalId
NS_SWIFT_NAME(cancelCalibrationEncoder(gimbalId:));

@end

