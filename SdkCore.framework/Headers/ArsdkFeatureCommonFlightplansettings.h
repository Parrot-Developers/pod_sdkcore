/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonFlightplansettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonFlightplansettings : NSObject

/**
 Set ReturnHome behavior during FlightPlan
When set, drone will return home, after return home delay, if a disconnection occurs during execution of FlightPlan 

 - parameter value: 1 to enable, 0 to disable
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))returnHomeOnDisconnectEncoder:(NSUInteger)value
NS_SWIFT_NAME(returnHomeOnDisconnectEncoder(value:));

@end

