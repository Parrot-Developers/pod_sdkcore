/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoSpeedsettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureJpsumoSpeedsettingsstateCallback<NSObject>

@optional

/**
 @deprecated
Outdoor property sent by product 

 - parameter outdoor: 1 if outdoor, 0 if indoor
*/
- (void)onOutdoorChanged:(NSUInteger)outdoor
NS_SWIFT_NAME(onOutdoorChanged(outdoor:));


@end

@interface ArsdkFeatureJpsumoSpeedsettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoSpeedsettingsstateCallback>)callback;

@end

