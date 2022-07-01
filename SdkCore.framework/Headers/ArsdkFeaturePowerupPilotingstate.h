/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupPilotingstateUid;

struct arsdk_cmd;

/** JS alert state */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupPilotingstateAlertstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupPilotingstateAlertstatechangedStateSdkCoreUnknown = -1,

    /** No alert */
    ArsdkFeaturePowerupPilotingstateAlertstatechangedStateNone = 0,

    /** Critical battery alert */
    ArsdkFeaturePowerupPilotingstateAlertstatechangedStateCriticalBattery = 1,

    /** Low battery alert */
    ArsdkFeaturePowerupPilotingstateAlertstatechangedStateLowBattery = 2,

};
#define ArsdkFeaturePowerupPilotingstateAlertstatechangedStateCnt 3

/** Drone flying state */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupPilotingstateFlyingstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateSdkCoreUnknown = -1,

    /** Landed state */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateLanded = 0,

    /** Taking off state */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateTakingoff = 1,

    /** Flying state */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateFlying = 2,

    /** Recovery state */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateRecovery = 3,

    /** Emergency state */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateEmergency = 4,

    /** User take off state. Waiting for user action to take off. */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateUsertakeoff = 5,

    /** Initializing state (user should let the drone steady for a while) */
    ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateInit = 6,

};
#define ArsdkFeaturePowerupPilotingstateFlyingstatechangedStateCnt 7

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupPilotingstateMotormodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupPilotingstateMotormodechangedModeSdkCoreUnknown = -1,

    /** The motors will only start on user action after being in state user take off */
    ArsdkFeaturePowerupPilotingstateMotormodechangedModeNormal = 0,

    /** Motors will use the current pcmd values without considering the flying state */
    ArsdkFeaturePowerupPilotingstateMotormodechangedModeForced = 1,

};
#define ArsdkFeaturePowerupPilotingstateMotormodechangedModeCnt 2

@protocol ArsdkFeaturePowerupPilotingstateCallback<NSObject>

@optional

/**
 JS alert state changed 

 - parameter state: 
*/
- (void)onAlertStateChanged:(ArsdkFeaturePowerupPilotingstateAlertstatechangedState)state
NS_SWIFT_NAME(onAlertStateChanged(state:));

/**
 Drone flying state changed 

 - parameter state: 
*/
- (void)onFlyingStateChanged:(ArsdkFeaturePowerupPilotingstateFlyingstatechangedState)state
NS_SWIFT_NAME(onFlyingStateChanged(state:));

/**
 Motor mode changed 

 - parameter mode: 
*/
- (void)onMotorModeChanged:(ArsdkFeaturePowerupPilotingstateMotormodechangedMode)mode
NS_SWIFT_NAME(onMotorModeChanged(mode:));

/**
 Drone attitude changed 

 - parameter roll: roll value (in radian) (relative to horizontal)
 - parameter pitch: Pitch value (in radian) (relative to horizontal)
 - parameter yaw: Yaw value (in radian) (relative to North)
*/
- (void)onAttitudeChanged:(float)roll pitch:(float)pitch yaw:(float)yaw
NS_SWIFT_NAME(onAttitudeChanged(roll:pitch:yaw:));

/**
 Drone altitude changed 

 - parameter altitude: Altitude in meters relative to take off altitude
*/
- (void)onAltitudeChanged:(float)altitude
NS_SWIFT_NAME(onAltitudeChanged(altitude:));


@end

@interface ArsdkFeaturePowerupPilotingstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeaturePowerupPilotingstateCallback>)callback;

@end

