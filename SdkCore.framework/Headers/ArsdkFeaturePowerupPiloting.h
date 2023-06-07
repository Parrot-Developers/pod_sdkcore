/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupPilotingUid;

struct arsdk_cmd;

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupPilotingMotormodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupPilotingMotormodeModeSdkCoreUnknown = -1,

    /** The motors will only start on user action after being in state user take off */
    ArsdkFeaturePowerupPilotingMotormodeModeNormal = 0,

    /** Motors will use the current pcmd values without considering the flying state */
    ArsdkFeaturePowerupPilotingMotormodeModeForced = 1,

};
#define ArsdkFeaturePowerupPilotingMotormodeModeCnt 2

@interface ArsdkFeaturePowerupPiloting : NSObject

/**
 Ask the Power Up speed and turn ratio. 

 - parameter flag: Boolean for "touch screen".
 - parameter throttle: Throttle value [0:100].
 - parameter roll: Yaw-roll value. [-100:100]
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))pCMDEncoder:(NSUInteger)flag throttle:(NSUInteger)throttle roll:(NSInteger)roll
NS_SWIFT_NAME(pCMDEncoder(flag:throttle:roll:));

/**
 Set drone in user take off state 

 - parameter state: State of user take off mode
- 1 to enter in user take off.
- 0 to exit from user take off.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))userTakeOffEncoder:(NSUInteger)state
NS_SWIFT_NAME(userTakeOffEncoder(state:));

/**
 Motor mode 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))motorModeEncoder:(ArsdkFeaturePowerupPilotingMotormodeMode)mode
NS_SWIFT_NAME(motorModeEncoder(mode:));

@end

