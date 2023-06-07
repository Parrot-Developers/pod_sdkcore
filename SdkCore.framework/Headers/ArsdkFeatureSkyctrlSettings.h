/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlSettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlSettings : NSObject

/**
 Request the controller to send all its settings. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))allSettingsEncoder
NS_SWIFT_NAME(allSettingsEncoder());

/**
 Reset all settings (i.e. everything except drone pairing). 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))resetEncoder
NS_SWIFT_NAME(resetEncoder());

@end

