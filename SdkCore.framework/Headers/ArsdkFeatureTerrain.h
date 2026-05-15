/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureTerrainUid;

struct arsdk_cmd;

/** Terrain data type */
typedef NS_ENUM(NSInteger, ArsdkFeatureTerrainType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureTerrainTypeSdkCoreUnknown = -1,

    /** No data. */
    ArsdkFeatureTerrainTypeNone = 0,

    /** DTED data. */
    ArsdkFeatureTerrainTypeDted = 1,

};
#define ArsdkFeatureTerrainTypeCnt 2

/** Line of sight calibration state */
typedef NS_ENUM(NSInteger, ArsdkFeatureTerrainCalibrationState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureTerrainCalibrationStateSdkCoreUnknown = -1,

    /** Calibration is required to improve image center coordinates */
    ArsdkFeatureTerrainCalibrationStateRequired = 0,

    /** Drone is calibrated */
    ArsdkFeatureTerrainCalibrationStateOk = 1,

};
#define ArsdkFeatureTerrainCalibrationStateCnt 2

/** Possible issues for calibration */
typedef NS_ENUM(NSInteger, ArsdkFeatureTerrainCalibrationIssue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureTerrainCalibrationIssueSdkCoreUnknown = -1,

    /** Drone is too close to perform accurate calibration */
    ArsdkFeatureTerrainCalibrationIssueTooClose = 0,

    /** Drone is too low to perform accurate calibration */
    ArsdkFeatureTerrainCalibrationIssueTooLow = 1,

    /** Controller coordinates are invalid */
    ArsdkFeatureTerrainCalibrationIssueInvalidControllerCoords = 2,

    /** Drone gimbal pitch is not adequate */
    ArsdkFeatureTerrainCalibrationIssueBadPitch = 3,

};
#define ArsdkFeatureTerrainCalibrationIssueCnt 4

@interface ArsdkFeatureTerrainCalibrationIssueBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureTerrainCalibrationIssue)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureTerrainCalibrationIssue val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureTerrainCalibrateResultReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureTerrainCalibrateResultReasonSdkCoreUnknown = -1,

    /** At least one calibration_issue is still declared at the command reception */
    ArsdkFeatureTerrainCalibrateResultReasonUnmetPositionRequirements = 0,

    /** Drone's and/or pilot's locations are not precise enough for calibration */
    ArsdkFeatureTerrainCalibrateResultReasonImpreciseLocation = 1,

    /** Gimbal pitch is incoherent with the expected range */
    ArsdkFeatureTerrainCalibrateResultReasonTooLargePitchOffset = 2,

};
#define ArsdkFeatureTerrainCalibrateResultReasonCnt 3

@interface ArsdkFeatureTerrainCalibrateResultReasonBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureTerrainCalibrateResultReason)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureTerrainCalibrateResultReason val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureTerrainCalibrateResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureTerrainCalibrateResultSdkCoreUnknown = -1,

    /** calibrate procedure is a success. */
    ArsdkFeatureTerrainCalibrateResultSuccess = 0,

    /** calibrate procedure has failed. */
    ArsdkFeatureTerrainCalibrateResultFailure = 1,

};
#define ArsdkFeatureTerrainCalibrateResultCnt 2

@protocol ArsdkFeatureTerrainCallback<NSObject>

@optional

/**
 Altitude of the drone above terrain using terrain maps. 

 - parameter altitude: Altitude(m) of the drone above the terrain, not relevant if type is none
 - parameter type: Terrain type used.
 - parameter grid_precision: grid precision(°), not relevant if type is none
*/
- (void)onAltitudeAboveTerrain:(NSInteger)altitude type:(ArsdkFeatureTerrainType)type gridPrecision:(float)gridPrecision
NS_SWIFT_NAME(onAltitudeAboveTerrain(altitude:type:gridPrecision:));

/**
  

 - parameter state: State of the calibration
 - parameter issue: Reported issue for drone calibration.
Updated whenever it changes.
If calibration_state is not changing to ok,
it indicates the reason of the failure.
*/
- (void)onCalibrationState:(ArsdkFeatureTerrainCalibrationState)state issueBitField:(NSUInteger)issueBitField
NS_SWIFT_NAME(onCalibrationState(state:issueBitField:));

/**
  

 - parameter result: The success (or failure) of the calibrate command.
 - parameter failure_reason: Reported reason for drone calibration failure. 0 if success.
*/
- (void)onCalibrateResult:(ArsdkFeatureTerrainCalibrateResult)result failureReasonBitField:(NSUInteger)failureReasonBitField
NS_SWIFT_NAME(onCalibrateResult(result:failureReasonBitField:));


@end

@interface ArsdkFeatureTerrain : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureTerrainCallback>)callback;

/**
 For calibration, the drone will assume that the pilot is at the center of the image seen. Gimbal angles will be corrected accordingly 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))calibrateEncoder
NS_SWIFT_NAME(calibrateEncoder());

/**
  

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))calibrationResetEncoder
NS_SWIFT_NAME(calibrationResetEncoder());

/**
  

 - parameter elevation: Terrain elevation(m) above mean sea level at the location
given by Latitude and Longitude.
 - parameter latitude: Latitude of the location (in degrees)
 - parameter longitude: Longitude of the location (in degrees)
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setAmslReferenceEncoder:(float)elevation latitude:(double)latitude longitude:(double)longitude
NS_SWIFT_NAME(setAmslReferenceEncoder(elevation:latitude:longitude:));

@end

