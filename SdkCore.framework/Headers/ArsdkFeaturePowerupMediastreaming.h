/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupMediastreamingUid;

struct arsdk_cmd;

@interface ArsdkFeaturePowerupMediastreaming : NSObject

/**
 Enable/disable video streaming. 

 - parameter enable: 1 to enable, 0 to disable.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))videoEnableEncoder:(NSUInteger)enable
NS_SWIFT_NAME(videoEnableEncoder(enable:));

@end

