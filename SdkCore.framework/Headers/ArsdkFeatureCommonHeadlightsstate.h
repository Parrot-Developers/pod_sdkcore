/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonHeadlightsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonHeadlightsstateCallback<NSObject>

@optional

/**
 Lighting LEDs intensity. 

 - parameter left: The intensity value for the left LED (0 through 255).
 - parameter right: The intensity value for the right LED (0 through 255).
*/
- (void)onIntensityChanged:(NSUInteger)left right:(NSUInteger)right
NS_SWIFT_NAME(onIntensityChanged(left:right:));


@end

@interface ArsdkFeatureCommonHeadlightsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonHeadlightsstateCallback>)callback;

@end

