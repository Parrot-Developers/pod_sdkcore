/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonNetworkeventUid;

struct arsdk_cmd;

/** Cause of the disconnection of the product */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonNetworkeventDisconnectionCause) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonNetworkeventDisconnectionCauseSdkCoreUnknown = -1,

    /** The button off has been pressed */
    ArsdkFeatureCommonNetworkeventDisconnectionCauseOffButton = 0,

    /** Unknown generic cause */
    ArsdkFeatureCommonNetworkeventDisconnectionCauseUnknown = 1,

    /** The reset factory procedure has been requested */
    ArsdkFeatureCommonNetworkeventDisconnectionCauseResetFactory = 2,

};
#define ArsdkFeatureCommonNetworkeventDisconnectionCauseCnt 3

@protocol ArsdkFeatureCommonNetworkeventCallback<NSObject>

@optional

/**
 Drone will disconnect.
This event is mainly triggered when the user presses on the power button of the product.

**This event is a notification, you can't retrieve it in the cache of the device controller.** 

 - parameter cause: 
*/
- (void)onDisconnection:(ArsdkFeatureCommonNetworkeventDisconnectionCause)cause
NS_SWIFT_NAME(onDisconnection(cause:));


@end

@interface ArsdkFeatureCommonNetworkevent : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonNetworkeventCallback>)callback;

@end

