/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneSpeedsettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureMinidroneSpeedsettings : NSObject

/**
 Set Max Vertical speed 

 - parameter current: Current max vertical speed in m/s
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxVerticalSpeedEncoder:(float)current
NS_SWIFT_NAME(maxVerticalSpeedEncoder(current:));

/**
 Set Max Rotation speed 

 - parameter current: Current max rotation speed in degree/s
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxRotationSpeedEncoder:(float)current
NS_SWIFT_NAME(maxRotationSpeedEncoder(current:));

/**
 Presence of wheels 

 - parameter present: 1 if present, 0 if not present
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wheelsEncoder:(NSUInteger)present
NS_SWIFT_NAME(wheelsEncoder(present:));

/**
 Set Max Horizontal speed (only used in case where PilotingSettings_MaxTilt is not used like in hydrofoil mode) 

 - parameter current: Current max Horizontal speed in m/s
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxHorizontalSpeedEncoder:(float)current
NS_SWIFT_NAME(maxHorizontalSpeedEncoder(current:));

/**
 Set max plane mode rotation speed (only available for wing x) 

 - parameter current: Current max plane mode rotation speed in degree/s
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxPlaneModeRotationSpeedEncoder:(float)current
NS_SWIFT_NAME(maxPlaneModeRotationSpeedEncoder(current:));

@end

