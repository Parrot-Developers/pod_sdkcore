/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupPilotingsettingsstateUid;

struct arsdk_cmd;

/** Variety of setting that can be customized */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSetting) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingSdkCoreUnknown = -1,

    /** Max roll value. In degree. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingMaxRoll = 0,

    /** How fast the plane reaches the desired roll angle. No unit. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingRollKp = 1,

    /** How fast the plane reaches the desired roll rate. No unit. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingRollRateKp = 2,

    /** Max pitch value. In degree. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingMaxPitch = 3,

    /** Min pitch value. In degree. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingMinPitch = 4,

    /** How fast the plane reaches the desired pitch angle. No unit. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingPitchKp = 5,

    /** How fast the plane reaches the desired pitch rate. No unit. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingPitchRateKp = 6,

    /** How fast the plane reaches the desired yaw angle. No unit. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingYawKp = 7,

    /** How fast the plane reaches the desired yaw rate. No unit. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingYawRateKp = 8,

    /** Portion of thrust that is added to motors according to the roll/yaw
command to compensate a dive during turn. No unit. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingRollToThrottleRate = 9,

    /** Angle of attack of a plane needed horizontal flight. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingAngleOfAttack = 10,

    /** Altitude hold during autopilot. 0 for false, other value for true. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingAltHold = 11,

    /** Altitude hold throttle. Expressed in percentage divided by 100 (from 0 to 1). */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingAltHoldThrottle = 12,

    /** Rssi value that indicates that the airplane is close to the pilot. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingDrRssiEdge = 13,

    /** Limit time for return home duration. In seconds. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingRecoveryDurationLimit = 14,

    /** Wind speed in m/s. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingWindSpeed = 15,

    /** Target plane speed in m/s. */
    ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingPlaneSpeed = 16,

};
#define ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSettingCnt 17

@protocol ArsdkFeaturePowerupPilotingsettingsstateCallback<NSObject>

@optional

/**
 Fired when a setting has changed 

 - parameter setting: 
 - parameter current: Current value of the given setting
 - parameter min: Minimal value of the given setting
 - parameter max: Max value of the given setting
 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
0x08: Remove: This value should be removed from the existing list.
*/
- (void)onSettingChanged:(ArsdkFeaturePowerupPilotingsettingsstateSettingchangedSetting)setting current:(float)current min:(float)min max:(float)max listFlags:(NSUInteger)listFlags
NS_SWIFT_NAME(onSettingChanged(setting:current:min:max:listFlags:));


@end

@interface ArsdkFeaturePowerupPilotingsettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeaturePowerupPilotingsettingsstateCallback>)callback;

@end

