/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupPilotingsettingsUid;

struct arsdk_cmd;

/** Variety of setting that can be customized */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupPilotingsettingsSetSetting) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupPilotingsettingsSetSettingSdkCoreUnknown = -1,

    /** Max roll value. In degree. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingMaxRoll = 0,

    /** How fast the plane reaches the desired roll angle. No unit. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingRollKp = 1,

    /** How fast the plane reaches the desired roll rate. No unit. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingRollRateKp = 2,

    /** Max pitch value. In degree. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingMaxPitch = 3,

    /** Min pitch value. In degree. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingMinPitch = 4,

    /** How fast the plane reaches the desired pitch angle. No unit. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingPitchKp = 5,

    /** How fast the plane reaches the desired pitch rate. No unit. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingPitchRateKp = 6,

    /** How fast the plane reaches the desired yaw angle. No unit. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingYawKp = 7,

    /** How fast the plane reaches the desired yaw rate. No unit. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingYawRateKp = 8,

    /** Portion of thrust that is added to motors according to the roll/yaw
command to compensate a dive during turn. No unit. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingRollToThrottleRate = 9,

    /** Angle of attack of a plane needed horizontal flight. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingAngleOfAttack = 10,

    /** Altitude hold during autopilot. 0 for false, other value for true. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingAltHold = 11,

    /** Altitude hold throttle. Expressed in percentage divided by 100 (from 0 to 1). */
    ArsdkFeaturePowerupPilotingsettingsSetSettingAltHoldThrottle = 12,

    /** Rssi value that indicates that the airplane is close to the pilot. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingDrRssiEdge = 13,

    /** Limit time for return home duration. In seconds. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingRecoveryDurationLimit = 14,

    /** Wind speed in m/s. Should be sent before flight. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingWindSpeed = 15,

    /** Target plane speed in m/s. Should be sent before flight. */
    ArsdkFeaturePowerupPilotingsettingsSetSettingPlaneSpeed = 16,

};
#define ArsdkFeaturePowerupPilotingsettingsSetSettingCnt 17

@interface ArsdkFeaturePowerupPilotingsettings : NSObject

/**
 Set the given setting 

 - parameter setting: 
 - parameter value: value of the given setting
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setEncoder:(ArsdkFeaturePowerupPilotingsettingsSetSetting)setting value:(float)value
NS_SWIFT_NAME(setEncoder(setting:value:));

@end

