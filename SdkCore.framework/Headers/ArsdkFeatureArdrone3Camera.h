/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3CameraUid;

struct arsdk_cmd;

@interface ArsdkFeatureArdrone3Camera : NSObject

/**
 Move the camera.
You can get min and max values for tilt and pan using [CameraInfo](#0-15-0). 

 - parameter tilt: Tilt camera consign for the drone (in degree)
The value is saturated by the drone.
Saturation value is sent by thre drone through CameraSettingsChanged command.
 - parameter pan: Pan camera consign for the drone (in degree)
The value is saturated by the drone.
Saturation value is sent by thre drone through CameraSettingsChanged command.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))orientationEncoder:(NSInteger)tilt pan:(NSInteger)pan
NS_SWIFT_NAME(orientationEncoder(tilt:pan:));

/**
 Move the camera.
You can get min and max values for tilt and pan using [CameraInfo](#0-15-0). 

 - parameter tilt: Tilt camera consign for the drone (in degree)
The value is saturated by the drone.
Saturation value is sent by thre drone through CameraSettingsChanged command.
 - parameter pan: Pan camera consign for the drone (in degree)
The value is saturated by the drone.
Saturation value is sent by thre drone through CameraSettingsChanged command.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))orientationV2Encoder:(float)tilt pan:(float)pan
NS_SWIFT_NAME(orientationV2Encoder(tilt:pan:));

/**
 Move the camera given velocity consign.
You can get min and max values for tilt and pan using [CameraVelocityRange](#1-25-4). 

 - parameter tilt: Tilt camera velocity consign [deg/s]
Negative tilt velocity move camera to bottom
Positive tilt velocity move camera to top
 - parameter pan: Pan camera velocity consign [deg/s]
Negative pan velocity move camera to left
Positive pan velocity move camera to right
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))velocityEncoder:(float)tilt pan:(float)pan
NS_SWIFT_NAME(velocityEncoder(tilt:pan:));

@end

