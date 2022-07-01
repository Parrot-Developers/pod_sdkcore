/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupSoundsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeaturePowerupSoundsstateCallback<NSObject>

@optional

/**
 State of the buzzer 

 - parameter enabled: 0: Disabled 1: Enabled.
*/
- (void)onBuzzChanged:(NSUInteger)enabled
NS_SWIFT_NAME(onBuzzChanged(enabled:));


@end

@interface ArsdkFeaturePowerupSoundsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeaturePowerupSoundsstateCallback>)callback;

@end

