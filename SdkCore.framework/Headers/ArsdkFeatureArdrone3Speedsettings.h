/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3SpeedsettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureArdrone3Speedsettings : NSObject

/**
 Set max vertical speed. 

 - parameter current: Current max vertical speed in m/s
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxVerticalSpeedEncoder:(float)current
NS_SWIFT_NAME(maxVerticalSpeedEncoder(current:));

/**
 Set max rotation speed. 

 - parameter current: Current max yaw rotation speed in degree/s
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxRotationSpeedEncoder:(float)current
NS_SWIFT_NAME(maxRotationSpeedEncoder(current:));

/**
 Set the presence of hull protection. 

 - parameter present: 1 if present, 0 if not present
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))hullProtectionEncoder:(NSUInteger)present
NS_SWIFT_NAME(hullProtectionEncoder(present:));

/**
 Set outdoor mode. 

 - parameter outdoor: 1 if outdoor flight, 0 if indoor flight
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))outdoorEncoder:(NSUInteger)outdoor
NS_SWIFT_NAME(outdoorEncoder(outdoor:));

/**
 Set max pitch/roll rotation speed. 

 - parameter current: Current max pitch/roll rotation speed in degree/s
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))maxPitchRollRotationSpeedEncoder:(float)current
NS_SWIFT_NAME(maxPitchRollRotationSpeedEncoder(current:));

@end

