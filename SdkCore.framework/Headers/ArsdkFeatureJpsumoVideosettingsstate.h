/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoVideosettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureJpsumoVideosettingsstateCallback<NSObject>

@optional

/**
 Get video automatic recording status. 

 - parameter enabled: 0: Disabled 1: Enabled.
*/
- (void)onAutorecordChanged:(NSUInteger)enabled
NS_SWIFT_NAME(onAutorecordChanged(enabled:));


@end

@interface ArsdkFeatureJpsumoVideosettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoVideosettingsstateCallback>)callback;

@end

