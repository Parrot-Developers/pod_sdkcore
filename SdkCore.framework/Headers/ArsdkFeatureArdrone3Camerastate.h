/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3CamerastateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureArdrone3CamerastateCallback<NSObject>

@optional

/**
 Camera orientation. 

 - parameter tilt: Tilt camera consign for the drone [-100;100]
 - parameter pan: Pan camera consign for the drone [-100;100]
*/
- (void)onOrientation:(NSInteger)tilt pan:(NSInteger)pan
NS_SWIFT_NAME(onOrientation(tilt:pan:));

/**
 Orientation of the center of the camera.
This is the value to send when you want to center the camera. 

 - parameter tilt: Tilt value (in degree)
 - parameter pan: Pan value (in degree)
*/
- (void)onDefaultCameraOrientation:(NSInteger)tilt pan:(NSInteger)pan
NS_SWIFT_NAME(onDefaultCameraOrientation(tilt:pan:));

/**
 Camera orientation with float arguments. 

 - parameter tilt: Tilt camera consign for the drone [deg]
 - parameter pan: Pan camera consign for the drone [deg]
*/
- (void)onOrientationV2:(float)tilt pan:(float)pan
NS_SWIFT_NAME(onOrientationV2(tilt:pan:));

/**
 Orientation of the center of the camera.
This is the value to send when you want to center the camera. 

 - parameter tilt: Tilt value [deg]
 - parameter pan: Pan value [deg]
*/
- (void)onDefaultCameraOrientationV2:(float)tilt pan:(float)pan
NS_SWIFT_NAME(onDefaultCameraOrientationV2(tilt:pan:));

/**
 Camera Orientation velocity limits. 

 - parameter max_tilt: Absolute max tilt velocity [deg/s]
 - parameter max_pan: Absolute max pan velocity [deg/s]
*/
- (void)onVelocityRange:(float)maxTilt maxPan:(float)maxPan
NS_SWIFT_NAME(onVelocityRange(maxTilt:maxPan:));


@end

@interface ArsdkFeatureArdrone3Camerastate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureArdrone3CamerastateCallback>)callback;

@end

