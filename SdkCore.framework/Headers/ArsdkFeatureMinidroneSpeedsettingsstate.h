/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneSpeedsettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureMinidroneSpeedsettingsstateCallback<NSObject>

@optional

/**
 Max vertical speed sent by product 

 - parameter current: Current max vertical speed in m/s
 - parameter min: Range min of vertical speed
 - parameter max: Range max of vertical speed
*/
- (void)onMaxVerticalSpeedChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxVerticalSpeedChanged(current:min:max:));

/**
 Max rotation speed sent by product 

 - parameter current: Current max rotation speed in degree/s
 - parameter min: Range min of rotation speed
 - parameter max: Range max of rotation speed
*/
- (void)onMaxRotationSpeedChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxRotationSpeedChanged(current:min:max:));

/**
 Presence of wheels sent by product 

 - parameter present: 1 if present, 0 if not present
*/
- (void)onWheelsChanged:(NSUInteger)present
NS_SWIFT_NAME(onWheelsChanged(present:));

/**
 Max horizontal speed sent by product (only used in case where PilotingSettings_MaxTilt is not used like in hydrofoil mode) 

 - parameter current: Current max horizontal speed in m/s
 - parameter min: Range min of horizontal speed
 - parameter max: Range max of horizontal speed
*/
- (void)onMaxHorizontalSpeedChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxHorizontalSpeedChanged(current:min:max:));

/**
 Max plane rotation speed sent by product (only available for wing x) 

 - parameter current: Current max plane mode rotation speed in degree/s
 - parameter min: Range min of plane mode rotation speed
 - parameter max: Range max of plane mode rotation speed
*/
- (void)onMaxPlaneModeRotationSpeedChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxPlaneModeRotationSpeedChanged(current:min:max:));


@end

@interface ArsdkFeatureMinidroneSpeedsettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneSpeedsettingsstateCallback>)callback;

@end

