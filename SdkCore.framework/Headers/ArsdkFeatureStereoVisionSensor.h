/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureStereoVisionSensorUid;

struct arsdk_cmd;

/** Stereo vision sensor model. */
typedef NS_ENUM(NSInteger, ArsdkFeatureStereoVisionSensorModel) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureStereoVisionSensorModelSdkCoreUnknown = -1,

    /** Main sensor.
Only one sensor of this kind is allowed at a time on a drone. */
    ArsdkFeatureStereoVisionSensorModelMain = 0,

};
#define ArsdkFeatureStereoVisionSensorModelCnt 1

/** Stereo vision sensor feature. */
typedef NS_ENUM(NSInteger, ArsdkFeatureStereoVisionSensorFeature) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureStereoVisionSensorFeatureSdkCoreUnknown = -1,

    /** Calibration feature. */
    ArsdkFeatureStereoVisionSensorFeatureCalibration = 0,

};
#define ArsdkFeatureStereoVisionSensorFeatureCnt 1

@interface ArsdkFeatureStereoVisionSensorFeatureBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureStereoVisionSensorFeature)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureStereoVisionSensorFeature val))cb;

@end

/** Calibration state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureStereoVisionSensorCalibrationState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureStereoVisionSensorCalibrationStateSdkCoreUnknown = -1,

    /** Calibration is required. */
    ArsdkFeatureStereoVisionSensorCalibrationStateRequired = 0,

    /** Calibration is in progress (capture stage). */
    ArsdkFeatureStereoVisionSensorCalibrationStateCaptureInProgress = 1,

    /** Calibration is in progress (computation stage). */
    ArsdkFeatureStereoVisionSensorCalibrationStateComputationInProgress = 2,

    /** Calibration is ok. */
    ArsdkFeatureStereoVisionSensorCalibrationStateOk = 3,

};
#define ArsdkFeatureStereoVisionSensorCalibrationStateCnt 4

/** Drone indication for stereo vision sensor calibration. */
typedef NS_ENUM(NSInteger, ArsdkFeatureStereoVisionSensorCalibrationIndication) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationSdkCoreUnknown = -1,

    /** The smart board should be placed within sight of the sensor. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationPlaceWithinSight = 0,

    /** The sensor cannot see the entire board. The user should check that:
- there is no obstacle between the sensor and the board,
- there is no highlight on the board,
- the board is clean,
- both cameras are clean. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationCheckBoardAndCameras = 1,

    /** The smart board should be moved away from the sensor. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationMoveAway = 2,

    /** The smart board should be moved closer to the sensor. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationMoveCloser = 3,

    /** The smart board should be moved to the left. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationMoveLeft = 4,

    /** The smart board should be moved to the right. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationMoveRight = 5,

    /** The smart board should be moved upward. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationMoveUpward = 6,

    /** The smart board should be moved downward. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationMoveDownward = 7,

    /** The smart board should be turned clockwise. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationTurnClockwise = 8,

    /** The smart board should be turned counter-clockwise. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationTurnCounterClockwise = 9,

    /** The smart board should be tilted to the left. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationTiltLeft = 10,

    /** The smart board should be tilted to the right. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationTiltRight = 11,

    /** The smart board should be tilted forward. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationTiltForward = 12,

    /** The smart board should be tilted backward. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationTiltBackward = 13,

    /** The smart board is in the correct position and should not be moved for a while. */
    ArsdkFeatureStereoVisionSensorCalibrationIndicationStop = 14,

};
#define ArsdkFeatureStereoVisionSensorCalibrationIndicationCnt 15

/** Calibration result. */
typedef NS_ENUM(NSInteger, ArsdkFeatureStereoVisionSensorCalibrationResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureStereoVisionSensorCalibrationResultSdkCoreUnknown = -1,

    /** Calibration completed successfully. */
    ArsdkFeatureStereoVisionSensorCalibrationResultSuccess = 0,

    /** Calibration failed. */
    ArsdkFeatureStereoVisionSensorCalibrationResultFailure = 1,

    /** Calibration canceled, with command `cancel_calibration`. */
    ArsdkFeatureStereoVisionSensorCalibrationResultCanceled = 2,

};
#define ArsdkFeatureStereoVisionSensorCalibrationResultCnt 3

@protocol ArsdkFeatureStereoVisionSensorCallback<NSObject>

@optional

/**
 Describes stereo vision sensor supported capabilities. 

 - parameter sensor_id: Id of the stereo vision sensor.
Sensor id is unique and persistent: the same sensor model on a same drone model has always the same id.
Main/Built-in sensor has id zero.
 - parameter model: Sensor model.
 - parameter supported_features: Supported features.
*/
- (void)onCapabilities:(NSUInteger)sensorId model:(ArsdkFeatureStereoVisionSensorModel)model supportedFeaturesBitField:(NSUInteger)supportedFeaturesBitField
NS_SWIFT_NAME(onCapabilities(sensorId:model:supportedFeaturesBitField:));

/**
  

 - parameter sensor_id: Id of the sensor.
 - parameter step_count: Indicates the number of steps required for sensor calibration.
 - parameter aspect_ratio: Sensor aspect ratio.
*/
- (void)onCalibrationInfo:(NSUInteger)sensorId stepCount:(NSUInteger)stepCount aspectRatio:(float)aspectRatio
NS_SWIFT_NAME(onCalibrationInfo(sensorId:stepCount:aspectRatio:));

/**
  

 - parameter sensor_id: Id of the sensor.
 - parameter state: Current state
*/
- (void)onCalibrationState:(NSUInteger)sensorId state:(ArsdkFeatureStereoVisionSensorCalibrationState)state
NS_SWIFT_NAME(onCalibrationState(sensorId:state:));

/**
  

 - parameter sensor_id: Id of the sensor.
 - parameter step: Calibration step, starting from 0.
 - parameter vertex_lt_x: X coordinate of the frame of reference's left top vertex.
 - parameter vertex_lt_y: Y coordinate of the frame of reference's left top vertex.
 - parameter vertex_rt_x: X coordinate of the frame of reference's right top vertex.
 - parameter vertex_rt_y: Y coordinate of the frame of reference's right top vertex.
 - parameter vertex_lb_x: X coordinate of the frame of reference's left bottom vertex.
 - parameter vertex_lb_y: Y coordinate of the frame of reference's left bottom vertex.
 - parameter vertex_rb_x: X coordinate of the frame of reference's right bottom vertex.
 - parameter vertex_rb_y: Y coordinate of the frame of reference's right bottom vertex.
 - parameter angle_x: Angle of the frame of reference along the X axis, in degrees.
Positive value means backward tilt, negative value means forward tilt.
 - parameter angle_y: Angle of the frame of reference along the Y axis, in degrees.
Positive value means left tilt, negative value means right tilt.
*/
- (void)onCalibrationStep:(NSUInteger)sensorId step:(NSUInteger)step vertexLtX:(float)vertexLtX vertexLtY:(float)vertexLtY vertexRtX:(float)vertexRtX vertexRtY:(float)vertexRtY vertexLbX:(float)vertexLbX vertexLbY:(float)vertexLbY vertexRbX:(float)vertexRbX vertexRbY:(float)vertexRbY angleX:(float)angleX angleY:(float)angleY
NS_SWIFT_NAME(onCalibrationStep(sensorId:step:vertexLtX:vertexLtY:vertexRtX:vertexRtY:vertexLbX:vertexLbY:vertexRbX:vertexRbY:angleX:angleY:));

/**
  

 - parameter sensor_id: Id of the sensor.
 - parameter indication: Calibration indication.
 - parameter vertex_lt_x: X coordinate of the actual board's left top vertex.
 - parameter vertex_lt_y: Y coordinate of the actual board's left top vertex.
 - parameter vertex_rt_x: X coordinate of the actual board's right top vertex.
 - parameter vertex_rt_y: Y coordinate of the actual board's right top vertex.
 - parameter vertex_lb_x: X coordinate of the actual board's left bottom vertex.
 - parameter vertex_lb_y: Y coordinate of the actual board's left bottom vertex.
 - parameter vertex_rb_x: X coordinate of the actual board's right bottom vertex.
 - parameter vertex_rb_y: Y coordinate of the actual board's right bottom vertex.
 - parameter angle_x: Angle of the actual board along the X axis, in degrees.
Positive value means backward tilt, negative value means forward tilt.
 - parameter angle_y: Angle of the actual board along the Y axis, in degrees.
Positive value means left tilt, negative value means right tilt.
*/
- (void)onCalibrationIndication:(NSUInteger)sensorId indication:(ArsdkFeatureStereoVisionSensorCalibrationIndication)indication vertexLtX:(float)vertexLtX vertexLtY:(float)vertexLtY vertexRtX:(float)vertexRtX vertexRtY:(float)vertexRtY vertexLbX:(float)vertexLbX vertexLbY:(float)vertexLbY vertexRbX:(float)vertexRbX vertexRbY:(float)vertexRbY angleX:(float)angleX angleY:(float)angleY
NS_SWIFT_NAME(onCalibrationIndication(sensorId:indication:vertexLtX:vertexLtY:vertexRtX:vertexRtY:vertexLbX:vertexLbY:vertexRbX:vertexRbY:angleX:angleY:));

/**
  

 - parameter sensor_id: Id of the sensor.
 - parameter result: Calibration result.
*/
- (void)onCalibrationResult:(NSUInteger)sensorId result:(ArsdkFeatureStereoVisionSensorCalibrationResult)result
NS_SWIFT_NAME(onCalibrationResult(sensorId:result:));


@end

@interface ArsdkFeatureStereoVisionSensor : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureStereoVisionSensorCallback>)callback;

/**
  

 - parameter sensor_id: Id of the sensor.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startCalibrationEncoder:(NSUInteger)sensorId
NS_SWIFT_NAME(startCalibrationEncoder(sensorId:));

/**
  

 - parameter sensor_id: Id of the sensor.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))cancelCalibrationEncoder:(NSUInteger)sensorId
NS_SWIFT_NAME(cancelCalibrationEncoder(sensorId:));

@end

