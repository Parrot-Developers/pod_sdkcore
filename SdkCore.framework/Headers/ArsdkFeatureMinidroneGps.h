/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneGpsUid;

struct arsdk_cmd;

@interface ArsdkFeatureMinidroneGps : NSObject

/**
 Set the controller latitude for a run. 

 - parameter latitude: Controller latitude in decimal degrees
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))controllerLatitudeForRunEncoder:(double)latitude
NS_SWIFT_NAME(controllerLatitudeForRunEncoder(latitude:));

/**
 Set the controller longitude for a run. 

 - parameter longitude: Controller longitude in decimal degrees
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))controllerLongitudeForRunEncoder:(double)longitude
NS_SWIFT_NAME(controllerLongitudeForRunEncoder(longitude:));

@end

