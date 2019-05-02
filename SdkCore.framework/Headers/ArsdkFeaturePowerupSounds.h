/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupSoundsUid;

struct arsdk_cmd;

@interface ArsdkFeaturePowerupSounds : NSObject

/**
 Enable/disable the buzzer sound 

 - parameter enable: 0: Disabled 1: Enabled.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))buzzEncoder:(NSUInteger)enable
NS_SWIFT_NAME(buzzEncoder(enable:));

@end

