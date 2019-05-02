/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoVideosettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureJpsumoVideosettings : NSObject

/**
 Set video automatic recording state. 

 - parameter enabled: 0: Disabled 1: Enabled.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))autorecordEncoder:(NSUInteger)enabled
NS_SWIFT_NAME(autorecordEncoder(enabled:));

@end

