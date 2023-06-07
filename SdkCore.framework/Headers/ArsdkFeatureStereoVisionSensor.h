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
    ArsdkFeatureStereoVisionSensorModelFstcam = 0,

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

+ (BOOL)isSet:(ArsdkFeatureStereoVisionSensorFeature)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureStereoVisionSensorFeature val))cb;

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

    /** Calibration is ok. */
    ArsdkFeatureStereoVisionSensorCalibrationStateOk = 1,

};
#define ArsdkFeatureStereoVisionSensorCalibrationStateCnt 2

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
 - parameter state: Current state
*/
- (void)onCalibrationState:(NSUInteger)sensorId state:(ArsdkFeatureStereoVisionSensorCalibrationState)state
NS_SWIFT_NAME(onCalibrationState(sensorId:state:));


@end

@interface ArsdkFeatureStereoVisionSensor : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureStereoVisionSensorCallback>)callback;

@end

