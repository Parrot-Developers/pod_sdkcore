/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureAutoFollowUid;

struct arsdk_cmd;

/** Mode of follow me. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAutoFollowMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAutoFollowModeSdkCoreUnknown = -1,

    /** No follow me. */
    ArsdkFeatureAutoFollowModeNone = 0,

    /** Follow the target keeping the same vector. */
    ArsdkFeatureAutoFollowModeGeographic = 1,

    /** Follow the target keeping the same orientation to its direction. */
    ArsdkFeatureAutoFollowModeRelative = 2,

    /** Follow the target as it was held by a leash. */
    ArsdkFeatureAutoFollowModeLeash = 3,

};
#define ArsdkFeatureAutoFollowModeCnt 4

/** Indicators needed to start or improve the follow. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAutoFollowIndicator) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAutoFollowIndicatorSdkCoreUnknown = -1,

    /** Drone gps is not fixed. */
    ArsdkFeatureAutoFollowIndicatorDroneGps = 0,

    /** Drone magneto is not valid. */
    ArsdkFeatureAutoFollowIndicatorDroneMagneto = 1,

    /** Drone is out of geofence. */
    ArsdkFeatureAutoFollowIndicatorDroneGeofence = 2,

    /** Drone is under min altitude. */
    ArsdkFeatureAutoFollowIndicatorDroneMinAltitude = 3,

    /** Drone is above max altitude. */
    ArsdkFeatureAutoFollowIndicatorDroneMaxAltitude = 4,

    /** Drone is not flying. */
    ArsdkFeatureAutoFollowIndicatorDroneFlying = 5,

    /** Target position has a bad accuracy. */
    ArsdkFeatureAutoFollowIndicatorTargetPositionAccuracy = 6,

    /** Target image detection is not working. */
    ArsdkFeatureAutoFollowIndicatorTargetImageDetection = 7,

    /** Drone is too close to target. */
    ArsdkFeatureAutoFollowIndicatorDroneTargetDistanceMin = 8,

    /** Drone is too far from target. */
    ArsdkFeatureAutoFollowIndicatorDroneTargetDistanceMax = 9,

    /** Target horizontal speed is too high. */
    ArsdkFeatureAutoFollowIndicatorTargetHorizSpeed = 10,

    /** Target vertical speed is too high. */
    ArsdkFeatureAutoFollowIndicatorTargetVertSpeed = 11,

    /** Target altitude has a bad accuracy. */
    ArsdkFeatureAutoFollowIndicatorTargetAltitudeAccuracy = 12,

};
#define ArsdkFeatureAutoFollowIndicatorCnt 13

@interface ArsdkFeatureAutoFollowIndicatorBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAutoFollowIndicator)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAutoFollowIndicator val))cb;

@end

/** Behavior. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAutoFollowBehavior) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAutoFollowBehaviorSdkCoreUnknown = -1,

    /** Drone is not following the target. */
    ArsdkFeatureAutoFollowBehaviorIdle = 0,

    /** Follow the target. */
    ArsdkFeatureAutoFollowBehaviorFollow = 1,

};
#define ArsdkFeatureAutoFollowBehaviorCnt 2

/** Follow me configuration parameters. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAutoFollowConfigureParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAutoFollowConfigureParamSdkCoreUnknown = -1,

    /** Distance configuration. */
    ArsdkFeatureAutoFollowConfigureParamDistance = 0,

    /** Elevation configuration. */
    ArsdkFeatureAutoFollowConfigureParamElevation = 1,

    /** Azimuth configuration. */
    ArsdkFeatureAutoFollowConfigureParamAzimuth = 2,

};
#define ArsdkFeatureAutoFollowConfigureParamCnt 3

@interface ArsdkFeatureAutoFollowConfigureParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAutoFollowConfigureParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAutoFollowConfigureParam val))cb;

@end

@protocol ArsdkFeatureAutoFollowCallback<NSObject>

@optional

/**
 Describes the missing inputs which prevent from starting a follow mode, and improvements 

 - parameter mode: Mode of follow me.
 - parameter missing_inputs: List of missing requirements to enter this mode.
If at least one input is missing, drone won't be able to follow the target.
It won't use any fallback either.
 - parameter improvements: List of inputs that can improve the mode.
 - parameter list_flags: 
*/
- (void)onInfo:(ArsdkFeatureAutoFollowMode)mode missingInputsBitField:(NSUInteger)missingInputsBitField improvementsBitField:(NSUInteger)improvementsBitField listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onInfo(mode:missingInputsBitField:improvementsBitField:listFlagsBitField:));

/**
 State of the follow me. 

 - parameter mode: Current mode.
 - parameter behavior: Current behavior.
*/
- (void)onState:(ArsdkFeatureAutoFollowMode)mode behavior:(ArsdkFeatureAutoFollowBehavior)behavior
NS_SWIFT_NAME(onState(mode:behavior:));

/**
 Configuration changed.
This event is only valid when arg behavior in [state](#162-4) is equal to follow. 

 - parameter distance: The distance leader-follower in meters.
If distance is default, this value is the current drone distance.
 - parameter elevation: The elevation leader-follower in rad.
If elevation is default, this value is the current leader to drone elevation.
 - parameter azimuth: The azimuth north-leader-follower in rad.
If azimuth is default, this value is the current leader to drone azimuth.
*/
- (void)onConfig:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(onConfig(distance:elevation:azimuth:));


@end

@interface ArsdkFeatureAutoFollow : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureAutoFollowCallback>)callback;

/**
 Start a follow me. Sending this command will stop other running follow me. 

 - parameter mode: Mode of follow me.
 - parameter use_default: Use default value for distance, elevation and/or azimuth.
 - parameter distance: The distance leader-follower in meters.
Ignored if flag distance is raised in arg use_default.
 - parameter elevation: The elevation leader-follower in rad.
Ignored if flag elevation is raised in arg use_default.
 - parameter azimuth: The azimuth north-leader-follower in rad.
Ignored if flag azimuth is raised in arg use_default.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startEncoder:(ArsdkFeatureAutoFollowMode)mode useDefaultBitField:(NSUInteger)useDefaultBitField distance:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(startEncoder(mode:useDefaultBitField:distance:elevation:azimuth:));

/**
 Stop current follow me. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopEncoder
NS_SWIFT_NAME(stopEncoder());

@end

