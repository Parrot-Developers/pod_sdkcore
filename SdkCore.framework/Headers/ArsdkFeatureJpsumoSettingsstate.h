/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoSettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureJpsumoSettingsstateCallback<NSObject>

@optional

/**
 @deprecated
Product GPS versions 

 - parameter software: Product GPS software version
 - parameter hardware: Product GPS hardware version
*/
- (void)onProductGPSVersionChanged:(NSString*)software hardware:(NSString*)hardware
NS_SWIFT_NAME(onProductGPSVersionChanged(software:hardware:));


@end

@interface ArsdkFeatureJpsumoSettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoSettingsstateCallback>)callback;

@end

