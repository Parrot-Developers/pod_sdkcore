/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCommoneventstateUid;

struct arsdk_cmd;

/** Reason of the shutdown of the product */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlCommoneventstateShutdownReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlCommoneventstateShutdownReasonSdkCoreUnknown = -1,

    /** The power off button has been pressed */
    ArsdkFeatureSkyctrlCommoneventstateShutdownReasonPoweroffButton = 0,

    /** The product is going to be updated */
    ArsdkFeatureSkyctrlCommoneventstateShutdownReasonUpdate = 1,

    /** The product battery is too low. */
    ArsdkFeatureSkyctrlCommoneventstateShutdownReasonLowBattery = 2,

    /** The product is going to be factory reset */
    ArsdkFeatureSkyctrlCommoneventstateShutdownReasonFactoryReset = 3,

};
#define ArsdkFeatureSkyctrlCommoneventstateShutdownReasonCnt 4

@protocol ArsdkFeatureSkyctrlCommoneventstateCallback<NSObject>

@optional

/**
 Skycontroller will disconnect.
This event is triggered when the user presses on the power button of the product.

**This event is a notification, you can't retrieve it in the cache of the device controller.** 

 - parameter reason: 
*/
- (void)onShutdown:(ArsdkFeatureSkyctrlCommoneventstateShutdownReason)reason
NS_SWIFT_NAME(onShutdown(reason:));


@end

@interface ArsdkFeatureSkyctrlCommoneventstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureSkyctrlCommoneventstateCallback>)callback;

@end

