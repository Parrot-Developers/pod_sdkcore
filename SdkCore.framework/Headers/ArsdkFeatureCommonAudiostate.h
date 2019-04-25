/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonAudiostateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonAudiostateCallback<NSObject>

@optional

/**
 Audio stream direction. 

 - parameter running: Bit field for TX and RX running
bit 0 is 1 if Drone TX is running
bit 1 is 1 if Drone RX is running
*/
- (void)onAudioStreamingRunning:(NSUInteger)running
NS_SWIFT_NAME(onAudioStreamingRunning(running:));


@end

@interface ArsdkFeatureCommonAudiostate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonAudiostateCallback>)callback;

@end

