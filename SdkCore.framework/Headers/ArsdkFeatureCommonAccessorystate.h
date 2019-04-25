/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonAccessorystateUid;

struct arsdk_cmd;

/** Accessory configurations supported by the product. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessory) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessorySdkCoreUnknown = -1,

    /** No accessory. */
    ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessoryNoAccessory = 0,

    /** Standard wheels */
    ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessoryStdWheels = 1,

    /** Truck wheels */
    ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessoryTruckWheels = 2,

    /** Hull */
    ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessoryHull = 3,

    /** Hydrofoil */
    ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessoryHydrofoil = 4,

};
#define ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessoryCnt 5

/** Accessory configuration reported by firmware. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessory) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessorySdkCoreUnknown = -1,

    /** No accessory configuration set. Controller needs to set one. */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryUnconfigured = 0,

    /** No accessory. */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryNoAccessory = 1,

    /** Standard wheels */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryStdWheels = 2,

    /** Truck wheels */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryTruckWheels = 3,

    /** Hull */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryHull = 4,

    /** Hydrofoil */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryHydrofoil = 5,

    /** Configuration in progress. */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryInProgress = 6,

};
#define ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessoryCnt 7

/** Error code. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAccessorystateAccessoryconfigchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedErrorSdkCoreUnknown = -1,

    /** No error. Accessory config change successful. */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedErrorOk = 0,

    /** Cannot change accessory configuration for some reason. */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedErrorUnknown = 1,

    /** Cannot change accessory configuration while flying. */
    ArsdkFeatureCommonAccessorystateAccessoryconfigchangedErrorFlying = 2,

};
#define ArsdkFeatureCommonAccessorystateAccessoryconfigchangedErrorCnt 3

@protocol ArsdkFeatureCommonAccessorystateCallback<NSObject>

@optional

/**
 Supported accessories list. 

 - parameter accessory: 
*/
- (void)onSupportedAccessoriesListChanged:(ArsdkFeatureCommonAccessorystateSupportedaccessorieslistchangedAccessory)accessory
NS_SWIFT_NAME(onSupportedAccessoriesListChanged(accessory:));

/**
 Accessory config. 

 - parameter newAccessory: 
 - parameter error: 
*/
- (void)onAccessoryConfigChanged:(ArsdkFeatureCommonAccessorystateAccessoryconfigchangedNewaccessory)newaccessory error:(ArsdkFeatureCommonAccessorystateAccessoryconfigchangedError)error
NS_SWIFT_NAME(onAccessoryConfigChanged(newaccessory:error:));

/**
 Availability to declare or not an accessory. 

 - parameter enabled: 1 if the modification of the accessory Config is enabled, 0 otherwise
*/
- (void)onAccessoryConfigModificationEnabled:(NSUInteger)enabled
NS_SWIFT_NAME(onAccessoryConfigModificationEnabled(enabled:));


@end

@interface ArsdkFeatureCommonAccessorystate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonAccessorystateCallback>)callback;

@end

