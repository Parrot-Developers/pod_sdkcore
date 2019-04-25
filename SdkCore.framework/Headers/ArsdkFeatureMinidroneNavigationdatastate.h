/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneNavigationdatastateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureMinidroneNavigationdatastateCallback<NSObject>

@optional

/**
 Get the drone position from takeoff point (0, 0, 0, 0).
The orthonormal basis is fixed at this point. The axis are
oriented the following way :
* X : From the rear of the drone to its front.
* Y : From the right of the drone to its left.
* Z : Orthogonal to X and Y and oriented upward.
* Psi : From 180 to -180 in the clockwise direction, 

 - parameter posx: Position on X axis, relative to take off position (cm).
 - parameter posy: Position on Y axis, relative to take off position (cm).
 - parameter posz: Position on Z axis, relative to take off position (cm).
 - parameter psi: Psi angle [-180; 180], relative to take off orientation.
 - parameter ts: Time elapsed since last data send (ms).
*/
- (void)onDronePosition:(float)posx posy:(float)posy posz:(NSInteger)posz psi:(NSInteger)psi ts:(NSInteger)ts
NS_SWIFT_NAME(onDronePosition(posx:posy:posz:psi:ts:));

/**
 Event informing about the estimated drone speed in horizontal frame.
It is similar to NED frame but with drone heading.
Down speed is positive when the drone is going down.
Speed is in m/s. 

 - parameter speed_x: Speed on the x axis (when drone moves forward, speed is > 0).
 - parameter speed_y: Speed on the y axis (when drone moves right, speed is > 0).
 - parameter speed_z: Speed on the z axis (when drone moves down, speed is > 0).
 - parameter ts: Acquisition timestamp (ms).
*/
- (void)onDroneSpeed:(float)speedX speedY:(float)speedY speedZ:(float)speedZ ts:(NSUInteger)ts
NS_SWIFT_NAME(onDroneSpeed(speedX:speedY:speedZ:ts:));

/**
 Event informing about the estimated altitude above takeoff level. 

 - parameter altitude: Altitude in meters.
 - parameter ts: Acquisition timestamp (ms).
*/
- (void)onDroneAltitude:(float)altitude ts:(NSUInteger)ts
NS_SWIFT_NAME(onDroneAltitude(altitude:ts:));

/**
 Event informing about the estimated quaternion.
They represent the rotation from the NED frame (determined at drone startup) to the estimated drone body frame.
Its elements are between -1 and 1. 

 - parameter q_w: Element w.
 - parameter q_x: Element x.
 - parameter q_y: Element y.
 - parameter q_z: Element z.
 - parameter ts: Acquisition timestamp (ms).
*/
- (void)onDroneQuaternion:(float)qW qX:(float)qX qY:(float)qY qZ:(float)qZ ts:(NSUInteger)ts
NS_SWIFT_NAME(onDroneQuaternion(qW:qX:qY:qZ:ts:));


@end

@interface ArsdkFeatureMinidroneNavigationdatastate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneNavigationdatastateCallback>)callback;

@end

