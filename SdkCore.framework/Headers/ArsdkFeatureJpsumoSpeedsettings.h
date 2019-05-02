/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoSpeedsettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureJpsumoSpeedsettings : NSObject

/**
 @deprecated
Outdoor property 

 - parameter outdoor: 1 if outdoor, 0 if indoor
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))outdoorEncoder:(NSUInteger)outdoor
NS_SWIFT_NAME(outdoorEncoder(outdoor:));

@end

