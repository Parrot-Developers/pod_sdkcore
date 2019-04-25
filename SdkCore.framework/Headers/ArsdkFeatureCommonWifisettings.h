/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonWifisettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonWifisettings : NSObject

/**
 Set wifi indoor/outdoor mode.
**Please note that you might be disconnected from the product after changing the indoor/outdoor setting as it changes Wifi parameters.** 

 - parameter outdoor: 1 if it should use outdoor wifi settings, 0 otherwise
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))outdoorSettingEncoder:(NSUInteger)outdoor
NS_SWIFT_NAME(outdoorSettingEncoder(outdoor:));

@end

