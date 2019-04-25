/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidronePilotingstateUid;

struct arsdk_cmd;

/** Drone flying state */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingstateFlyingstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateSdkCoreUnknown = -1,

    /** Landed state */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateLanded = 0,

    /** Taking off state */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateTakingoff = 1,

    /** Hovering state */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateHovering = 2,

    /** Flying state */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateFlying = 3,

    /** Landing state */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateLanding = 4,

    /** Emergency state */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateEmergency = 5,

    /** Rolling state */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateRolling = 6,

    /** Initializing state (user should let the drone steady for a while) */
    ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateInit = 7,

};
#define ArsdkFeatureMinidronePilotingstateFlyingstatechangedStateCnt 8

/** Drone alert state */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingstateAlertstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingstateAlertstatechangedStateSdkCoreUnknown = -1,

    /** No alert */
    ArsdkFeatureMinidronePilotingstateAlertstatechangedStateNone = 0,

    /** User emergency alert */
    ArsdkFeatureMinidronePilotingstateAlertstatechangedStateUser = 1,

    /** Cut out alert */
    ArsdkFeatureMinidronePilotingstateAlertstatechangedStateCutOut = 2,

    /** Critical battery alert */
    ArsdkFeatureMinidronePilotingstateAlertstatechangedStateCriticalBattery = 3,

    /** Low battery alert */
    ArsdkFeatureMinidronePilotingstateAlertstatechangedStateLowBattery = 4,

};
#define ArsdkFeatureMinidronePilotingstateAlertstatechangedStateCnt 5

/** Drone Flying Mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingstateFlyingmodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingstateFlyingmodechangedModeSdkCoreUnknown = -1,

    /** Fly as a quadrictopter */
    ArsdkFeatureMinidronePilotingstateFlyingmodechangedModeQuadricopter = 0,

    /** Fly as a plane in forward mode */
    ArsdkFeatureMinidronePilotingstateFlyingmodechangedModePlaneForward = 1,

    /** Fly as a plane in backward mode */
    ArsdkFeatureMinidronePilotingstateFlyingmodechangedModePlaneBackward = 2,

};
#define ArsdkFeatureMinidronePilotingstateFlyingmodechangedModeCnt 3

/** Plane Gear Box */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingstatePlanegearboxchangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingstatePlanegearboxchangedStateSdkCoreUnknown = -1,

    /** Gear 1. Low speed */
    ArsdkFeatureMinidronePilotingstatePlanegearboxchangedStateGear1 = 0,

    /** Gear 2. Middle speed */
    ArsdkFeatureMinidronePilotingstatePlanegearboxchangedStateGear2 = 1,

    /** Gear 3. High speed */
    ArsdkFeatureMinidronePilotingstatePlanegearboxchangedStateGear3 = 2,

};
#define ArsdkFeatureMinidronePilotingstatePlanegearboxchangedStateCnt 3

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingstatePilotingmodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingstatePilotingmodechangedModeSdkCoreUnknown = -1,

    /** The flight envelope of Mambo FPV has been divided in three piloting modes.
The first one corresponds to the well-known flying mode currently used for
Mambo, which is based in an horizontal stabilisation (performed via the
vertical camera and the acceleration information) and a vertical acceleration
(by means of the ultrasound, the barometer and the vertical accelerometer) in
order for the drone to stay in fixed point position when no piloting commands
are sent by the user. */
    ArsdkFeatureMinidronePilotingstatePilotingmodechangedModeEasy = 0,

    /** The second piloting mode consists of deactivating the horizontal stabilisation.
Thus, in this flying mode, when no piloting command is received, the drone will
try to stay at 0° tilt angle instead of responding to a 0 m/s horizontal speed
reference. This behaviour will result in a slight horizontal drift. */
    ArsdkFeatureMinidronePilotingstatePilotingmodechangedModeMedium = 1,

    /** The third piloting mode also adds the vertical stabilisation deactivation and,
therefore, a slight vertical drift. When flying in the third mode, a closed
loop height control is no longer performed in order for the drone to keep a
certain height and vertical speed. Instead, the vertical command coming from
the user will directly generate an open loop acceleration command. */
    ArsdkFeatureMinidronePilotingstatePilotingmodechangedModeDifficult = 2,

};
#define ArsdkFeatureMinidronePilotingstatePilotingmodechangedModeCnt 3

@protocol ArsdkFeatureMinidronePilotingstateCallback<NSObject>

@optional

/**
 MiniDrone send flat trim was correctly processed 

*/
- (void)onFlatTrimChanged
NS_SWIFT_NAME(onFlatTrimChanged());

/**
 Drone flying state changed 

 - parameter state: 
*/
- (void)onFlyingStateChanged:(ArsdkFeatureMinidronePilotingstateFlyingstatechangedState)state
NS_SWIFT_NAME(onFlyingStateChanged(state:));

/**
 Drone alert state changed 

 - parameter state: 
*/
- (void)onAlertStateChanged:(ArsdkFeatureMinidronePilotingstateAlertstatechangedState)state
NS_SWIFT_NAME(onAlertStateChanged(state:));

/**
 Set MiniDrone automatic take off mode 

 - parameter state: State of automatic take off mode
*/
- (void)onAutoTakeOffModeChanged:(NSUInteger)state
NS_SWIFT_NAME(onAutoTakeOffModeChanged(state:));

/**
 FlyingMode changed. Only supported by WingX 

 - parameter mode: 
*/
- (void)onFlyingModeChanged:(ArsdkFeatureMinidronePilotingstateFlyingmodechangedMode)mode
NS_SWIFT_NAME(onFlyingModeChanged(mode:));

/**
 Plane Gear Box changed. Only supported by WingX 

 - parameter state: 
*/
- (void)onPlaneGearBoxChanged:(ArsdkFeatureMinidronePilotingstatePlanegearboxchangedState)state
NS_SWIFT_NAME(onPlaneGearBoxChanged(state:));

/**
 Event informing about the piloting mode. 

 - parameter mode: 
*/
- (void)onPilotingModeChanged:(ArsdkFeatureMinidronePilotingstatePilotingmodechangedMode)mode
NS_SWIFT_NAME(onPilotingModeChanged(mode:));


@end

@interface ArsdkFeatureMinidronePilotingstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidronePilotingstateCallback>)callback;

@end

