/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidronePilotingUid;

struct arsdk_cmd;

/** Drone Flying Mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingFlyingmodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingFlyingmodeModeSdkCoreUnknown = -1,

    /** Fly as a quadrictopter */
    ArsdkFeatureMinidronePilotingFlyingmodeModeQuadricopter = 0,

    /** Fly as a plane in forward mode */
    ArsdkFeatureMinidronePilotingFlyingmodeModePlaneForward = 1,

    /** Fly as a plane in backward mode */
    ArsdkFeatureMinidronePilotingFlyingmodeModePlaneBackward = 2,

};
#define ArsdkFeatureMinidronePilotingFlyingmodeModeCnt 3

/** Plane Gear Box */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingPlanegearboxState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingPlanegearboxStateSdkCoreUnknown = -1,

    /** Gear 1. Low speed */
    ArsdkFeatureMinidronePilotingPlanegearboxStateGear1 = 0,

    /** Gear 2. Middle speed */
    ArsdkFeatureMinidronePilotingPlanegearboxStateGear2 = 1,

    /** Gear 3. High speed */
    ArsdkFeatureMinidronePilotingPlanegearboxStateGear3 = 2,

};
#define ArsdkFeatureMinidronePilotingPlanegearboxStateCnt 3

@interface ArsdkFeatureMinidronePiloting : NSObject

/**
 Do a flat trim 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))flatTrimEncoder
NS_SWIFT_NAME(flatTrimEncoder());

/**
 Ask the drone to take off 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))takeOffEncoder
NS_SWIFT_NAME(takeOffEncoder());

/**
 Ask the drone to move around. 

 - parameter flag: Boolean flag to activate roll/pitch movement
 - parameter roll: Roll consign for the MiniDrone [-100;100]
 - parameter pitch: Pitch consign for the MiniDrone [-100;100]
 - parameter yaw: Yaw consign for the MiniDrone [-100;100]
 - parameter gaz: Gaz consign for the MiniDrone [-100;100]
 - parameter timestamp: Timestamp in miliseconds. Not an absolute time. (Typically 0 = time of connexion).
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pCMDEncoder:(NSUInteger)flag roll:(NSInteger)roll pitch:(NSInteger)pitch yaw:(NSInteger)yaw gaz:(NSInteger)gaz timestamp:(NSUInteger)timestamp
NS_SWIFT_NAME(pCMDEncoder(flag:roll:pitch:yaw:gaz:timestamp:));

/**
 Ask the MiniDrone to land 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))landingEncoder
NS_SWIFT_NAME(landingEncoder());

/**
 Put drone in emergency state 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))emergencyEncoder
NS_SWIFT_NAME(emergencyEncoder());

/**
 Set MiniDrone automatic take off mode 

 - parameter state: State of automatic take off mode
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))autoTakeOffModeEncoder:(NSUInteger)state
NS_SWIFT_NAME(autoTakeOffModeEncoder(state:));

/**
 Set drone FlyingMode. Only supported by WingX 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))flyingModeEncoder:(ArsdkFeatureMinidronePilotingFlyingmodeMode)mode
NS_SWIFT_NAME(flyingModeEncoder(mode:));

/**
 Set Plane Gear Box. Only supported by WingX 

 - parameter state: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))planeGearBoxEncoder:(ArsdkFeatureMinidronePilotingPlanegearboxState)state
NS_SWIFT_NAME(planeGearBoxEncoder(state:));

/**
 Command to toggle between "easy" piloting mode and "preferred" piloting mode.
This command only works while the drone is flying. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))togglePilotingModeEncoder
NS_SWIFT_NAME(togglePilotingModeEncoder());

@end

