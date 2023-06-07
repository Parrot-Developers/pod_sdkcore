/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonFactoryUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonFactory : NSObject

/**
 This command will request a factory reset from the prodcut. *The factory reset procedure implies an automatic reboot*, which will be done immediately after receiving this command. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))resetEncoder
NS_SWIFT_NAME(resetEncoder());

@end

