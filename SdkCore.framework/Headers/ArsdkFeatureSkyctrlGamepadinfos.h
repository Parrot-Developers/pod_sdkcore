/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlGamepadinfosUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlGamepadinfos : NSObject

/**
 This commands allow the application to get a representation of all the mappable controls on the SkyController. Some physical controls might be absent from this list because their function can not be changed. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))getGamepadControlsEncoder
NS_SWIFT_NAME(getGamepadControlsEncoder());

@end

