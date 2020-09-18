/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureControllerInfoUid;

struct arsdk_cmd;

@protocol ArsdkFeatureControllerInfoCallback<NSObject>

@optional

/**
  

 - parameter is_valid: Boolean. Whether the gps is valid (1) or not (0), as seen by the drone
*/
- (void)onValidityFromDrone:(NSUInteger)isValid
NS_SWIFT_NAME(onValidityFromDrone(isValid:));


@end

@interface ArsdkFeatureControllerInfo : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureControllerInfoCallback>)callback;

/**
 Controller gps info.
This command is not acknowledged by the drone. 

 - parameter latitude: Latitude of the controller (in deg)
 - parameter longitude: Longitude of the controller (in deg)
 - parameter altitude: Altitude of the controller (in meters, according to sea level)
 - parameter horizontal_accuracy: Horizontal accuracy (in meter)
 - parameter vertical_accuracy: Vertical accuracy (in meter)
 - parameter north_speed: North speed (in meter per second)
 - parameter east_speed: East speed (in meter per second)
 - parameter down_speed: Vertical speed (in meter per second) (down is positive)
 - parameter timestamp: Timestamp of the gps info, in milliseconds since 00:00:00 UTC on 1 January 1970
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))gpsEncoder:(double)latitude longitude:(double)longitude altitude:(float)altitude horizontalAccuracy:(float)horizontalAccuracy verticalAccuracy:(float)verticalAccuracy northSpeed:(float)northSpeed eastSpeed:(float)eastSpeed downSpeed:(float)downSpeed timestamp:(double)timestamp
NS_SWIFT_NAME(gpsEncoder(latitude:longitude:altitude:horizontalAccuracy:verticalAccuracy:northSpeed:eastSpeed:downSpeed:timestamp:));

/**
  

 - parameter pressure: Atmospheric pressure in Pa
 - parameter timestamp: Timestamp of the barometer info, in milliseconds since 00:00:00 UTC on 1 January 1970
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))barometerEncoder:(float)pressure timestamp:(double)timestamp
NS_SWIFT_NAME(barometerEncoder(pressure:timestamp:));

@end

