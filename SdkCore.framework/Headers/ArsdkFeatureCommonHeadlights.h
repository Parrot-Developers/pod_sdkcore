/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonHeadlightsUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonHeadlights : NSObject

/**
 Set lighting LEDs intensity. 

 - parameter left: Set the left LED intensity value (0 through 255).
 - parameter right: Set the right LED intensity value (0 through 255).
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))intensityEncoder:(NSUInteger)left right:(NSUInteger)right
NS_SWIFT_NAME(intensityEncoder(left:right:));

@end

