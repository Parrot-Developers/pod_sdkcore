/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlButtoneventsUid;

struct arsdk_cmd;

@protocol ArsdkFeatureSkyctrlButtoneventsCallback<NSObject>

@optional

/**
 This event notifies the application that the settings button was pressed on the device. This allow a connected application to open/close the settings screen from a physical button.
This event is only sent when the SkyController is connected to a drone 

*/
- (void)onSettings
NS_SWIFT_NAME(onSettings());


@end

@interface ArsdkFeatureSkyctrlButtonevents : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureSkyctrlButtoneventsCallback>)callback;

@end

