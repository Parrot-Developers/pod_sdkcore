/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonAccessoryUid;

struct arsdk_cmd;

/** Accessory configuration to set. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAccessoryConfigAccessory) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAccessoryConfigAccessorySdkCoreUnknown = -1,

    /** No accessory. */
    ArsdkFeatureCommonAccessoryConfigAccessoryNoAccessory = 0,

    /** Standard wheels */
    ArsdkFeatureCommonAccessoryConfigAccessoryStdWheels = 1,

    /** Truck wheels */
    ArsdkFeatureCommonAccessoryConfigAccessoryTruckWheels = 2,

    /** Hull */
    ArsdkFeatureCommonAccessoryConfigAccessoryHull = 3,

    /** Hydrofoil */
    ArsdkFeatureCommonAccessoryConfigAccessoryHydrofoil = 4,

};
#define ArsdkFeatureCommonAccessoryConfigAccessoryCnt 5

@interface ArsdkFeatureCommonAccessory : NSObject

/**
 Declare an accessory.
You can choose the accessory between all accessible for this product.
You can get this list through event [SupportedAccessories](#0-27-0).

You can only set the accessory when the modification is enabled.
You can know if it possible with the event [AccessoryDeclarationAvailability](#0-27-2). 

 - parameter accessory: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))configEncoder:(ArsdkFeatureCommonAccessoryConfigAccessory)accessory
NS_SWIFT_NAME(configEncoder(accessory:));

@end

