/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3SpeedsettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureArdrone3SpeedsettingsstateCallback<NSObject>

@optional

/**
 Max vertical speed. 

 - parameter current: Current max vertical speed in m/s
 - parameter min: Range min of vertical speed
 - parameter max: Range max of vertical speed
*/
- (void)onMaxVerticalSpeedChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxVerticalSpeedChanged(current:min:max:));

/**
 Max rotation speed. 

 - parameter current: Current max yaw rotation speed in degree/s
 - parameter min: Range min of yaw rotation speed
 - parameter max: Range max of yaw rotation speed
*/
- (void)onMaxRotationSpeedChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxRotationSpeedChanged(current:min:max:));

/**
 Presence of hull protection. 

 - parameter present: 1 if present, 0 if not present
*/
- (void)onHullProtectionChanged:(NSUInteger)present
NS_SWIFT_NAME(onHullProtectionChanged(present:));

/**
 Outdoor mode. 

 - parameter outdoor: 1 if outdoor flight, 0 if indoor flight
*/
- (void)onOutdoorChanged:(NSUInteger)outdoor
NS_SWIFT_NAME(onOutdoorChanged(outdoor:));

/**
 Max pitch/roll rotation speed. 

 - parameter current: Current max pitch/roll rotation speed in degree/s
 - parameter min: Range min of pitch/roll rotation speed
 - parameter max: Range max of pitch/roll rotation speed
*/
- (void)onMaxPitchRollRotationSpeedChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxPitchRollRotationSpeedChanged(current:min:max:));


@end

@interface ArsdkFeatureArdrone3Speedsettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3SpeedsettingsstateCallback>)callback;

@end

