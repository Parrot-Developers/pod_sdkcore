/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3PilotingUid;

struct arsdk_cmd;

/** The circling direction */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingCircleDirection) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingCircleDirectionSdkCoreUnknown = -1,

    /** Circling ClockWise */
    ArsdkFeatureArdrone3PilotingCircleDirectionCw = 0,

    /** Circling Counter ClockWise */
    ArsdkFeatureArdrone3PilotingCircleDirectionCcw = 1,

    /** Use drone default Circling direction set by CirclingDirection cmd */
    ArsdkFeatureArdrone3PilotingCircleDirectionDefault = 2,

};
#define ArsdkFeatureArdrone3PilotingCircleDirectionCnt 3

/** Orientation mode of the move to */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingMovetoOrientationMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingMovetoOrientationModeSdkCoreUnknown = -1,

    /** The drone won't change its orientation */
    ArsdkFeatureArdrone3PilotingMovetoOrientationModeNone = 0,

    /** The drone will make a rotation to look in direction of the given location */
    ArsdkFeatureArdrone3PilotingMovetoOrientationModeToTarget = 1,

    /** The drone will orientate itself to the given heading before moving to the location */
    ArsdkFeatureArdrone3PilotingMovetoOrientationModeHeadingStart = 2,

    /** The drone will orientate itself to the given heading while moving to the location */
    ArsdkFeatureArdrone3PilotingMovetoOrientationModeHeadingDuring = 3,

};
#define ArsdkFeatureArdrone3PilotingMovetoOrientationModeCnt 4

/** POI mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingStartpilotedpoiv2Mode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingStartpilotedpoiv2ModeSdkCoreUnknown = -1,

    /** Gimbal is locked on the POI */
    ArsdkFeatureArdrone3PilotingStartpilotedpoiv2ModeLockedGimbal = 0,

    /** Gimbal is freely controllable */
    ArsdkFeatureArdrone3PilotingStartpilotedpoiv2ModeFreeGimbal = 1,

};
#define ArsdkFeatureArdrone3PilotingStartpilotedpoiv2ModeCnt 2

@interface ArsdkFeatureArdrone3Piloting : NSObject

/**
 Ask the drone to take off.
On the fixed wings (such as Disco): not used except to cancel a land. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))takeOffEncoder
NS_SWIFT_NAME(takeOffEncoder());

/**
 Move the drone.
The libARController is sending the command each 50ms.

**Please note that you should call setPilotingPCMD and not sendPilotingPCMD because the libARController is handling the periodicity and the buffer on which it is sent.** 

 - parameter flag: Boolean flag: 1 if the roll and pitch values should be taken in consideration. 0 otherwise
 - parameter roll: Roll angle as signed percentage.
On copters:
Roll angle expressed as signed percentage of the max pitch/roll setting, in range [-100, 100]
-100 corresponds to a roll angle of max pitch/roll to the left (drone will fly left)
100 corresponds to a roll angle of max pitch/roll to the right (drone will fly right)
This value may be clamped if necessary, in order to respect the maximum supported physical tilt of the copter.

On fixed wings:
Roll angle expressed as signed percentage of the physical max roll of the wing, in range [-100, 100]
Negative value makes the plane fly to the left
Positive value makes the plane fly to the right
 - parameter pitch: Pitch angle as signed percentage.
On copters:
Expressed as signed percentage of the max pitch/roll setting, in range [-100, 100]
-100 corresponds to a pitch angle of max pitch/roll towards sky (drone will fly backward)
100 corresponds to a pitch angle of max pitch/roll towards ground (drone will fly forward)
This value may be clamped if necessary, in order to respect the maximum supported physical tilt of the copter.

On fixed wings:
Expressed as signed percentage of the physical max pitch of the wing, in range [-100, 100]
Negative value makes the plane fly in direction of the sky
Positive value makes the plane fly in direction of the ground
 - parameter yaw: Yaw rotation speed as signed percentage.
On copters:
Expressed as signed percentage of the max yaw rotation speed setting, in range [-100, 100].
-100 corresponds to a counter-clockwise rotation of max yaw rotation speed
100 corresponds to a clockwise rotation of max yaw rotation speed
This value may be clamped if necessary, in order to respect the maximum supported physical tilt of the copter.

On fixed wings:
Giving more than a fixed value (75% for the moment) triggers a circle.
Positive value will trigger a clockwise circling
Negative value will trigger a counter-clockwise circling
 - parameter gaz: Throttle as signed percentage.
On copters:
Expressed as signed percentage of the max vertical speed setting, in range [-100, 100]
-100 corresponds to a max vertical speed towards ground
100 corresponds to a max vertical speed towards sky
This value may be clamped if necessary, in order to respect the maximum supported physical tilt of the copter.
During the landing phase, putting some positive gaz will cancel the land.

On fixed wings:
Expressed as signed percentage of the physical max throttle, in range [-100, 100]
Negative value makes the plane fly slower
Positive value makes the plane fly faster
 - parameter timestampAndSeqNum: Command timestamp in milliseconds (low 24 bits) + command sequence number (high 8 bits) [0;255].
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pCMDEncoder:(NSUInteger)flag roll:(NSInteger)roll pitch:(NSInteger)pitch yaw:(NSInteger)yaw gaz:(NSInteger)gaz timestampandseqnum:(NSUInteger)timestampandseqnum
NS_SWIFT_NAME(pCMDEncoder(flag:roll:pitch:yaw:gaz:timestampandseqnum:));

/**
 Land.
Please note that on copters, if you put some positive gaz (in the [PilotingCommand](#1-0-2)) during the landing, it will cancel it. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))landingEncoder
NS_SWIFT_NAME(landingEncoder());

/**
 Cut out the motors.
This cuts immediatly the motors. The drone will fall.
This command is sent on a dedicated high priority buffer which will infinitely retry to send it if the command is not delivered. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))emergencyEncoder
NS_SWIFT_NAME(emergencyEncoder());

/**
 Return home.
Ask the drone to fly to its [HomePosition](#1-24-0).
The availability of the return home can be get from [ReturnHomeState](#1-4-3).
Please note that the drone will wait to be hovering to start its return home. This means that it will wait to have a [flag](#1-0-2) set at 0. 

 - parameter start: 1 to start the navigate home, 0 to stop it
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))navigateHomeEncoder:(NSUInteger)start
NS_SWIFT_NAME(navigateHomeEncoder(start:));

/**
 Move the drone to a relative position and rotate heading by a given angle.
Moves are relative to the current drone orientation, (drone's reference).
Also note that the given rotation will not modify the move (i.e. moves are always rectilinear). 

 - parameter dX: Wanted displacement along the front axis [m]
 - parameter dY: Wanted displacement along the right axis [m]
 - parameter dZ: Wanted displacement along the down axis [m]
 - parameter dPsi: Wanted rotation of heading [rad]
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))moveByEncoder:(float)dx dy:(float)dy dz:(float)dz dpsi:(float)dpsi
NS_SWIFT_NAME(moveByEncoder(dx:dy:dz:dpsi:));

/**
 Prepare the drone to take off.
On copters: initiates the thrown takeoff. Note that the drone will do the thrown take off even if it is steady.
On fixed wings: initiates the take off process on the fixed wings.

Setting the state to 0 will cancel the preparation. You can cancel it before that the drone takes off. 

 - parameter state: State of user take off mode
- 1 to enter in user take off.
- 0 to exit from user take off.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))userTakeOffEncoder:(NSUInteger)state
NS_SWIFT_NAME(userTakeOffEncoder(state:));

/**
 Make the fixed wing circle.
The circle will use the [CirclingAltitude](#1-6-14) and the [CirclingRadius](#1-6-13) 

 - parameter direction: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))circleEncoder:(ArsdkFeatureArdrone3PilotingCircleDirection)direction
NS_SWIFT_NAME(circleEncoder(direction:));

/**
 Move the drone to a specified location.
If a new command moveTo is sent, the drone will immediatly run it (no cancel will be issued).
If a [CancelMoveTo](#1-0-11) command is sent, the moveTo is stopped.
During the moveTo, all pitch, roll and gaz values of the piloting command will be ignored by the drone.
However, the yaw value can be used. 

 - parameter latitude: Latitude of the location (in degrees) to reach
 - parameter longitude: Longitude of the location (in degrees) to reach
 - parameter altitude: Altitude above take off point (in m) to reach
 - parameter orientation_mode: 
 - parameter heading: Heading (relative to the North in degrees).
This value is only used if the orientation mode is HEADING_START or HEADING_DURING
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))moveToEncoder:(double)latitude longitude:(double)longitude altitude:(double)altitude orientationMode:(ArsdkFeatureArdrone3PilotingMovetoOrientationMode)orientationMode heading:(float)heading
NS_SWIFT_NAME(moveToEncoder(latitude:longitude:altitude:orientationMode:heading:));

/**
 Cancel the current moveTo.
If there is no current moveTo, this command has no effect. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))cancelMoveToEncoder
NS_SWIFT_NAME(cancelMoveToEncoder());

/**
 Start a piloted Point Of Interest.
During a piloted POI, the drone will always look at the given POI but can be piloted normally. However, yaw value is ignored. Camera tilt and pan command is also ignored.
Ignored if [PilotedPOI](#1-4-14) state is UNAVAILABLE. 

 - parameter latitude: Latitude of the location (in degrees) to look at
 - parameter longitude: Longitude of the location (in degrees) to look at
 - parameter altitude: Altitude above take off point (in m) to look at
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startPilotedPOIEncoder:(double)latitude longitude:(double)longitude altitude:(double)altitude
NS_SWIFT_NAME(startPilotedPOIEncoder(latitude:longitude:altitude:));

/**
 Stop the piloted Point Of Interest (with or without gimbal control).
If [PilotedPOI](#1-4-14) or [PilotedPOIV2](#1-4-22) state is RUNNING or PENDING, stop it. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopPilotedPOIEncoder
NS_SWIFT_NAME(stopPilotedPOIEncoder());

/**
 Cancel the current relative move.
If there is no current relative move, this command has no effect. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))cancelMoveByEncoder
NS_SWIFT_NAME(cancelMoveByEncoder());

/**
 Start a piloted Point Of Interest.
During a piloted POI, the drone always points towards the given POI but can be piloted normally. However, yaw value is ignored. The gimbal behavior depends on the mode argument:
- in locked gimbal mode, the gimbal always looks at the POI, and gimbal control command is ignored by the drone,
- in free gimbal mode, the gimbal initially looks at the POI, and is then freely controllable by the gimbal command.
Ignored if [PilotedPOIV2](#1-4-22) state is UNAVAILABLE. 

 - parameter latitude: Latitude of the location (in degrees) to look at
 - parameter longitude: Longitude of the location (in degrees) to look at
 - parameter altitude: Altitude above take off point (in m) to look at
 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startPilotedPOIV2Encoder:(double)latitude longitude:(double)longitude altitude:(double)altitude mode:(ArsdkFeatureArdrone3PilotingStartpilotedpoiv2Mode)mode
NS_SWIFT_NAME(startPilotedPOIV2Encoder(latitude:longitude:altitude:mode:));

@end

