/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonGpsUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonGps : NSObject

/**
 Set the position of a run.
This will let the product know the controller location for the flight/run. The location is typically used to geotag medias.
Only used on products that have no gps.
Watch out, this command is not used by BLE products. 

 - parameter latitude: Controller latitude in decimal degrees
 - parameter longitude: Controller longitude in decimal degrees
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))controllerPositionForRunEncoder:(double)latitude longitude:(double)longitude
NS_SWIFT_NAME(controllerPositionForRunEncoder(latitude:longitude:));

@end

