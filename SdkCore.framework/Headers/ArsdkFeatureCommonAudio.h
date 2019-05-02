/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonAudioUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonAudio : NSObject

/**
 Set audio stream direction. 

 - parameter ready: Bit field for TX and RX ready.
bit 0 is 1 if controller is ready and wants to receive sound (Drone TX)
bit 1 is 1 if controller is ready and wants to send sound (Drone RX)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))controllerReadyForStreamingEncoder:(NSUInteger)ready
NS_SWIFT_NAME(controllerReadyForStreamingEncoder(ready:));

@end

