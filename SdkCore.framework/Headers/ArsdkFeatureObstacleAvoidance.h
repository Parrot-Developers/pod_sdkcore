/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureObstacleAvoidanceUid;

struct arsdk_cmd;

/** Obstacle avoidance mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureObstacleAvoidanceMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureObstacleAvoidanceModeSdkCoreUnknown = -1,

    /** Obstacle avoidance is disabled. */
    ArsdkFeatureObstacleAvoidanceModeDisabled = 0,

    /** Obstacle avoidance is enabled, in standard mode. */
    ArsdkFeatureObstacleAvoidanceModeStandard = 1,

};
#define ArsdkFeatureObstacleAvoidanceModeCnt 2

/** Obstacle avoidance drone state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureObstacleAvoidanceState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureObstacleAvoidanceStateSdkCoreUnknown = -1,

    /** Obstacle avoidance is not currently active. */
    ArsdkFeatureObstacleAvoidanceStateInactive = 0,

    /** Obstacle avoidance is currently active and fully operational. */
    ArsdkFeatureObstacleAvoidanceStateActive = 1,

    /** Obstacle avoidance is currently active but in degraded mode. */
    ArsdkFeatureObstacleAvoidanceStateDegraded = 2,

};
#define ArsdkFeatureObstacleAvoidanceStateCnt 3

/** Obstacle avoidance availability. */
typedef NS_ENUM(NSInteger, ArsdkFeatureObstacleAvoidanceAvailability) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureObstacleAvoidanceAvailabilitySdkCoreUnknown = -1,

    /** Obstacle avoidance is not currently available. */
    ArsdkFeatureObstacleAvoidanceAvailabilityUnavailable = 0,

    /** Obstacle avoidance is currently available. */
    ArsdkFeatureObstacleAvoidanceAvailabilityAvailable = 1,

    /** Obstacle avoidance is currently available but with degraded performance. */
    ArsdkFeatureObstacleAvoidanceAvailabilityDegraded = 2,

};
#define ArsdkFeatureObstacleAvoidanceAvailabilityCnt 3

/** Obstacle avoidance alert. */
typedef NS_ENUM(NSInteger, ArsdkFeatureObstacleAvoidanceAlert) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureObstacleAvoidanceAlertSdkCoreUnknown = -1,

    /** Distance from nominal trajectory exceeds threshold. */
    ArsdkFeatureObstacleAvoidanceAlertHighDeviation = 0,

    /** Drone is stuck by a presumably large obstacle. */
    ArsdkFeatureObstacleAvoidanceAlertStuck = 1,

    /** Perception system is unplugged or not working properly.
Obstacle avoidance is unavailable and disabled. */
    ArsdkFeatureObstacleAvoidanceAlertStereoFailure = 2,

    /** Perception system lens is dirty or broken.
Obstacle avoidance is unavailable and disabled. */
    ArsdkFeatureObstacleAvoidanceAlertStereoLensFailure = 3,

    /** Gimbal is not stabilized in direction of motion.
Obstacle avoidance is unavailable and disabled. */
    ArsdkFeatureObstacleAvoidanceAlertGimbalFailure = 4,

    /** Environment is too dark for perception system or vertical camera.
Obstacle avoidance is unavailable and disabled. */
    ArsdkFeatureObstacleAvoidanceAlertTooDark = 5,

    /** GPS and vertical camera do not provide reliable data.
Obstacle avoidance is unavailable and disabled. */
    ArsdkFeatureObstacleAvoidanceAlertEstimationUnreliable = 6,

    /** Perception system is not calibrated.
Obstacle avoidance is unavailable and disabled. */
    ArsdkFeatureObstacleAvoidanceAlertCalibrationFailure = 7,

    /** Obstacle Avoidance is in degraded mode due to poor GPS quality.
Obstacle avoidance is available and enabled. */
    ArsdkFeatureObstacleAvoidanceAlertPoorGps = 8,

    /** Obstacle Avoidance is in degraded mode due to strong wind.
Obstacle avoidance is available and enabled. */
    ArsdkFeatureObstacleAvoidanceAlertStrongWind = 9,

    /** Obstacle avoidance failed to compute trajectories.
Obstacle avoidance is unavailable and disabled. */
    ArsdkFeatureObstacleAvoidanceAlertComputationalError = 10,

    /** The perception system is blind in the current motion direction.
Obstacle avoidance is available and enabled. */
    ArsdkFeatureObstacleAvoidanceAlertBlindMotionDirection = 11,

};
#define ArsdkFeatureObstacleAvoidanceAlertCnt 12

@interface ArsdkFeatureObstacleAvoidanceAlertBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureObstacleAvoidanceAlert)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureObstacleAvoidanceAlert val))cb;

@end

@protocol ArsdkFeatureObstacleAvoidanceCallback<NSObject>

@optional

/**
  

 - parameter mode: Obstacle avoidance mode.
 - parameter state: Obstacle avoidance state.
 - parameter availability: Obstacle avoidance availability.
*/
- (void)onStatus:(ArsdkFeatureObstacleAvoidanceMode)mode state:(ArsdkFeatureObstacleAvoidanceState)state availability:(ArsdkFeatureObstacleAvoidanceAvailability)availability
NS_SWIFT_NAME(onStatus(mode:state:availability:));

/**
  

 - parameter alerts: Bitfield of activated obstacle avoidance alerts.
*/
- (void)onAlerts:(NSUInteger)alertsBitField
NS_SWIFT_NAME(onAlerts(alertsBitField:));


@end

@interface ArsdkFeatureObstacleAvoidance : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureObstacleAvoidanceCallback>)callback;

/**
 Configures obstacle avoidance mode. 

 - parameter mode: Obstacle avoidance mode.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setModeEncoder:(ArsdkFeatureObstacleAvoidanceMode)mode
NS_SWIFT_NAME(setModeEncoder(mode:));

@end

