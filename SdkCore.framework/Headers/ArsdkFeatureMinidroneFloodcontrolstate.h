/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneFloodcontrolstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureMinidroneFloodcontrolstateCallback<NSObject>

@optional

/**
 @deprecated
Flood control regulation 

 - parameter delay: Delay (in ms) between two PCMD
*/
- (void)onFloodControlChanged:(NSUInteger)delay
NS_SWIFT_NAME(onFloodControlChanged(delay:));


@end

@interface ArsdkFeatureMinidroneFloodcontrolstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneFloodcontrolstateCallback>)callback;

@end

