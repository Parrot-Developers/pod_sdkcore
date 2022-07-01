/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonWifisettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonWifisettingsstateCallback<NSObject>

@optional

/**
 Wifi outdoor mode. 

 - parameter outdoor: 1 if it should use outdoor wifi settings, 0 otherwise
*/
- (void)onOutdoorSettingsChanged:(NSUInteger)outdoor
NS_SWIFT_NAME(onOutdoorSettingsChanged(outdoor:));


@end

@interface ArsdkFeatureCommonWifisettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureCommonWifisettingsstateCallback>)callback;

@end

