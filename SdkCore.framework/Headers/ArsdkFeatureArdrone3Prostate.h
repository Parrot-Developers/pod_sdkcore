/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3ProstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureArdrone3ProstateCallback<NSObject>

@optional

/**
 Pro features. 

 - parameter features: Bitfield representing enabled features.
*/
- (void)onFeatures:(uint64_t)features
NS_SWIFT_NAME(onFeatures(features:));


@end

@interface ArsdkFeatureArdrone3Prostate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3ProstateCallback>)callback;

@end

