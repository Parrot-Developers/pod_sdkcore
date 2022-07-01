/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlSkycontrollerstateUid;

struct arsdk_cmd;

/** Current battery state */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlSkycontrollerstateBatterystateState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlSkycontrollerstateBatterystateStateSdkCoreUnknown = -1,

    /** Battery is charging */
    ArsdkFeatureSkyctrlSkycontrollerstateBatterystateStateCharging = 0,

    /** Battery is fully charged */
    ArsdkFeatureSkyctrlSkycontrollerstateBatterystateStateCharged = 1,

    /** Battery is discharging (normal case when on and unplugged) */
    ArsdkFeatureSkyctrlSkycontrollerstateBatterystateStateDischarging = 2,

    /** Battery is low (Can still work for a few minutes) */
    ArsdkFeatureSkyctrlSkycontrollerstateBatterystateStateDischargingLow = 3,

    /** Battery is critically low (the product will automatically shut down if not plugged) */
    ArsdkFeatureSkyctrlSkycontrollerstateBatterystateStateDischargingCritical = 4,

};
#define ArsdkFeatureSkyctrlSkycontrollerstateBatterystateStateCnt 5

@protocol ArsdkFeatureSkyctrlSkycontrollerstateCallback<NSObject>

@optional

/**
 The battery percentage has changed. 

 - parameter percent: Controller battery: from 0 (empty) to 100 (full charge).
Value of 255 when charging.
*/
- (void)onBatteryChanged:(NSUInteger)percent
NS_SWIFT_NAME(onBatteryChanged(percent:));

/**
 The SkyController GPS has gained or lost the fix. If the fix is lost, thent the [GpsPositionChanged](#4-8-2) event will contain invalid values for the position. 

 - parameter fixed: SkyController fixed
*/
- (void)onGpsFixChanged:(NSUInteger)fixed
NS_SWIFT_NAME(onGpsFixChanged(fixed:));

/**
 The SkyController position or heading values changed.
Some of the values can be invalid and should be ignored. 

 - parameter latitude: SkyController latitude (500. if not available)
 - parameter longitude: SkyController longiture (500. if not available)
 - parameter altitude: Altitude (in meters) above sea level.
Only meaningful if latitude and longiture are available
 - parameter heading: SkyController heading relative to magnetic north
(500.f if not available)
*/
- (void)onGpsPositionChanged:(double)latitude longitude:(double)longitude altitude:(double)altitude heading:(float)heading
NS_SWIFT_NAME(onGpsPositionChanged(latitude:longitude:altitude:heading:));

/**
 The state of the controller battery 

 - parameter state: 
*/
- (void)onBatteryState:(ArsdkFeatureSkyctrlSkycontrollerstateBatterystateState)state
NS_SWIFT_NAME(onBatteryState(state:));

/**
 SkyController Attitude in north-east-down (NED) coordinate system.
Attitude is provided as a quaternion. 

 - parameter q0: SkyController Attitude q0 (quaternion scalar part)
 - parameter q1: SkyController Attitude q1 (quaternion vector part)
 - parameter q2: SkyController Attitude q2 (quaternion vector part)
 - parameter q3: SkyController Attitude q3 (quaternion vector part)
*/
- (void)onAttitudeChanged:(float)q0 q1:(float)q1 q2:(float)q2 q3:(float)q3
NS_SWIFT_NAME(onAttitudeChanged(q0:q1:q2:q3:));


@end

@interface ArsdkFeatureSkyctrlSkycontrollerstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSkyctrlSkycontrollerstateCallback>)callback;

@end

