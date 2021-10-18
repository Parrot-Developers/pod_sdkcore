/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCommonstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureSkyctrlCommonstateCallback<NSObject>

@optional

/**
 All states have been sent by the controller. 

*/
- (void)onAllStatesChanged
NS_SWIFT_NAME(onAllStatesChanged());

/**
 Both date and time changed.
Corresponds to the latest datetime set on the drone.

**Please note that you should not care about this event if you are using the libARController API as this library is handling the connection process for you.** 

 - parameter datetime: Datetime with the ISO-8601 complete short format: "%Y%m%dT%H%M%S%z"
*/
- (void)onCurrentDateTimeChanged:(NSString*)datetime
NS_SWIFT_NAME(onCurrentDateTimeChanged(datetime:));

/**
 The skycontroller will shutdown in 'duration' ms. 

 - parameter duration: Remaining time (in milliseconds) before the Skycontroller shutdown.
'-1' means aborted shutdown (when the power button is released before the end).
*/
- (void)onImminentShutdownChanged:(NSInteger)duration
NS_SWIFT_NAME(onImminentShutdownChanged(duration:));

/**
 Controller Boot id.
A Boot Id identifies a boot session and does not change between controller power on and power off. 

 - parameter bootId: Id of the boot
*/
- (void)onBootId:(NSString*)bootid
NS_SWIFT_NAME(onBootId(bootid:));


@end

@interface ArsdkFeatureSkyctrlCommonstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureSkyctrlCommonstateCallback>)callback;

@end

