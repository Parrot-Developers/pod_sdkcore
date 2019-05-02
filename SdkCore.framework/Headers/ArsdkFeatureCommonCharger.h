/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonChargerUid;

struct arsdk_cmd;

/** The new maximum charge rate. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonChargerSetmaxchargerateRate) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonChargerSetmaxchargerateRateSdkCoreUnknown = -1,

    /** Fully charge the battery at a slow rate. Typically limit max charge current to 512 mA. */
    ArsdkFeatureCommonChargerSetmaxchargerateRateSlow = 0,

    /** Almost fully-charge the battery at moderate rate (> 512mA) but slower than the fastest rate. */
    ArsdkFeatureCommonChargerSetmaxchargerateRateModerate = 1,

    /** Almost fully-charge the battery at the highest possible rate supported by the charger. */
    ArsdkFeatureCommonChargerSetmaxchargerateRateFast = 2,

};
#define ArsdkFeatureCommonChargerSetmaxchargerateRateCnt 3

@interface ArsdkFeatureCommonCharger : NSObject

/**
 The product will inform itself the controller about its charging type (see [ChargingInfoChanged](#0-29-3)). 

 - parameter rate: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setMaxChargeRateEncoder:(ArsdkFeatureCommonChargerSetmaxchargerateRate)rate
NS_SWIFT_NAME(setMaxChargeRateEncoder(rate:));

@end

