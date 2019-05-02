/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonOverheatUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonOverheat : NSObject

/**
 Switch off after an overheat. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))switchOffEncoder
NS_SWIFT_NAME(switchOffEncoder());

/**
 Ventilate after an overheat. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))ventilateEncoder
NS_SWIFT_NAME(ventilateEncoder());

@end

