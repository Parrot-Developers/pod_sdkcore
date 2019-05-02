/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneSettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureMinidroneSettings : NSObject

/**
 Set MiniDrone cut out mode 

 - parameter enable: Enable cut out mode (1 if is activate, 0 otherwise)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))cutOutModeEncoder:(NSUInteger)enable
NS_SWIFT_NAME(cutOutModeEncoder(enable:));

@end

