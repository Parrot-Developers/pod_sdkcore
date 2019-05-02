/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidronePilotingsettingsUid;

struct arsdk_cmd;

/** Piloting modes. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingsettingsPreferredpilotingmodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingsettingsPreferredpilotingmodeModeSdkCoreUnknown = -1,

    /** The flight envelope of Mambo FPV has been divided in three piloting modes.
The first one corresponds to the well-known flying mode currently used for
Mambo, which is based in an horizontal stabilisation (performed via the
vertical camera and the acceleration information) and a vertical acceleration
(by means of the ultrasound, the barometer and the vertical accelerometer) in
order for the drone to stay in fixed point position when no piloting commands
are sent by the user. */
    ArsdkFeatureMinidronePilotingsettingsPreferredpilotingmodeModeEasy = 0,

    /** The second piloting mode consists of deactivating the horizontal stabilisation.
Thus, in this flying mode, when no piloting command is received, the drone will
try to stay at 0° tilt angle instead of responding to a 0 m/s horizontal speed
reference. This behaviour will result in a slight horizontal drift. */
    ArsdkFeatureMinidronePilotingsettingsPreferredpilotingmodeModeMedium = 1,

    /** The third piloting mode also adds the vertical stabilisation deactivation and,
therefore, a slight vertical drift. When flying in the third mode, a closed
loop height control is no longer performed in order for the drone to keep a
certain height and vertical speed. Instead, the vertical command coming from
the user will directly generate an open loop acceleration command. */
    ArsdkFeatureMinidronePilotingsettingsPreferredpilotingmodeModeDifficult = 2,

};
#define ArsdkFeatureMinidronePilotingsettingsPreferredpilotingmodeModeCnt 3

@interface ArsdkFeatureMinidronePilotingsettings : NSObject

/**
 Set Max Altitude 

 - parameter current: Current altitude max in m
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxAltitudeEncoder:(float)current
NS_SWIFT_NAME(maxAltitudeEncoder(current:));

/**
 Set Max Tilt 

 - parameter current: Current tilt max in degree
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxTiltEncoder:(float)current
NS_SWIFT_NAME(maxTiltEncoder(current:));

/**
 Set banked turn mode.
When banked turn mode is enabled, the drone will use yaw values from the piloting command to infer with roll and pitch on the drone when its horizontal speed is not null. 

 - parameter value: 1 to enable, 0 to disable
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))bankedTurnEncoder:(NSUInteger)value
NS_SWIFT_NAME(bankedTurnEncoder(value:));

/**
 This setting represents the vertical acceleration command that will be sent to the drone when piloting in gaz mode.
In this case, closed loop height control is no longer performed; an open loop vertical acceleration command is generated instead.
This command results from multiplying the user command coming from the joystick (float value between 0 and 1) by the MaxThrottle setting (also a value between 0 and 1) and by the gravity constant.
Thus, we obtain the corresponding value in [m/s^2] that will then be mixed with the attitude commands and translated into rotation speeds.
As an example, if the value of this setting is 0.5, the maximal acceleration command that can be generated when the user command equals 1 is :
acc_cmd_max = 1 * 0.5 * 9.81 m/s^2 = 4.905 m/s^2. 

 - parameter max: Max throttle, between 0 and 1.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxThrottleEncoder:(float)max
NS_SWIFT_NAME(maxThrottleEncoder(max:));

/**
 The flight envelope of Mambo FPV has been divided in three piloting modes. 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))preferredPilotingModeEncoder:(ArsdkFeatureMinidronePilotingsettingsPreferredpilotingmodeMode)mode
NS_SWIFT_NAME(preferredPilotingModeEncoder(mode:));

@end

