/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonCamerasettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonCamerasettingsstateCallback<NSObject>

@optional

/**
 Camera info. 

 - parameter fov: Value of the camera horizontal fov (in degree)
 - parameter panMax: Value of max pan (right pan) (in degree)
 - parameter panMin: Value of min pan (left pan) (in degree)
 - parameter tiltMax: Value of max tilt (top tilt) (in degree)
 - parameter tiltMin: Value of min tilt (bottom tilt) (in degree)
*/
- (void)onCameraSettingsChanged:(float)fov panmax:(float)panmax panmin:(float)panmin tiltmax:(float)tiltmax tiltmin:(float)tiltmin
NS_SWIFT_NAME(onCameraSettingsChanged(fov:panmax:panmin:tiltmax:tiltmin:));


@end

@interface ArsdkFeatureCommonCamerasettingsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonCamerasettingsstateCallback>)callback;

@end

