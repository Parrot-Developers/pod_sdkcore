/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCameraUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlCamera : NSObject

/**
 This command is deprecated. The same effect can be achieved by sending a [CameraOrientation](#1-1-0) command with values retrieved from the [defaultCameraOrientation](#1-25-1) event. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))resetOrientationEncoder
NS_SWIFT_NAME(resetOrientationEncoder());

@end

