/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonFlightplaneventUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonFlightplaneventCallback<NSObject>

@optional

/**
 FlightPlan start error.

**This event is a notification, you can't retrieve it in the cache of the device controller.** 

*/
- (void)onStartingErrorEvent
NS_SWIFT_NAME(onStartingErrorEvent());

/**
 FlightPlan speed clamping.
Sent when a speed specified in the FlightPlan file is considered too high by the drone.

**This event is a notification, you can't retrieve it in the cache of the device controller.** 

*/
- (void)onSpeedBridleEvent
NS_SWIFT_NAME(onSpeedBridleEvent());


@end

@interface ArsdkFeatureCommonFlightplanevent : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonFlightplaneventCallback>)callback;

@end

