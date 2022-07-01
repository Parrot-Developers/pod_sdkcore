/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonChargerstateUid;

struct arsdk_cmd;

/** The current maximum charge rate. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonChargerstateMaxchargeratechangedRate) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonChargerstateMaxchargeratechangedRateSdkCoreUnknown = -1,

    /** Fully charge the battery at a slow rate. Typically limit max charge current to 512 mA. */
    ArsdkFeatureCommonChargerstateMaxchargeratechangedRateSlow = 0,

    /** Almost fully-charge the battery at moderate rate (> 512 mA) but slower than the fastest rate. */
    ArsdkFeatureCommonChargerstateMaxchargeratechangedRateModerate = 1,

    /** Almost fully-charge the battery at the highest possible rate supported by the charger. */
    ArsdkFeatureCommonChargerstateMaxchargeratechangedRateFast = 2,

};
#define ArsdkFeatureCommonChargerstateMaxchargeratechangedRateCnt 3

/** Charger status. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatusSdkCoreUnknown = -1,

    /** The battery is discharging. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatusDischarging = 0,

    /** The battery is charging at a slow rate about 512 mA. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatusChargingSlow = 1,

    /** The battery is charging at a moderate rate (> 512 mA) but slower than the fastest rate. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatusChargingModerate = 2,

    /** The battery is charging at a the fastest rate. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatusChargingFast = 3,

    /** The charger is plugged and the battery is fully charged. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatusBatteryFull = 4,

};
#define ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatusCnt 5

/** The current charging phase. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhase) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhaseSdkCoreUnknown = -1,

    /** The charge phase is unknown or irrelevant. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhaseUnknown = 0,

    /** First phase of the charging process. The battery is charging with constant current. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhaseConstantCurrent1 = 1,

    /** Second phase of the charging process. The battery is charging with constant current, with a higher voltage than the first phase. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhaseConstantCurrent2 = 2,

    /** Last part of the charging process. The battery is charging with a constant voltage. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhaseConstantVoltage = 3,

    /** The battery is fully charged. */
    ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhaseCharged = 4,

};
#define ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhaseCnt 5

/** The charge rate recorded by the firmware for the last charge. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonChargerstateLastchargeratechangedRate) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonChargerstateLastchargeratechangedRateSdkCoreUnknown = -1,

    /** The last charge rate is not known. */
    ArsdkFeatureCommonChargerstateLastchargeratechangedRateUnknown = 0,

    /** Slow charge rate. */
    ArsdkFeatureCommonChargerstateLastchargeratechangedRateSlow = 1,

    /** Moderate charge rate. */
    ArsdkFeatureCommonChargerstateLastchargeratechangedRateModerate = 2,

    /** Fast charge rate. */
    ArsdkFeatureCommonChargerstateLastchargeratechangedRateFast = 3,

};
#define ArsdkFeatureCommonChargerstateLastchargeratechangedRateCnt 4

/** The current charging phase. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonChargerstateCharginginfoPhase) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonChargerstateCharginginfoPhaseSdkCoreUnknown = -1,

    /** The charge phase is unknown or irrelevant. */
    ArsdkFeatureCommonChargerstateCharginginfoPhaseUnknown = 0,

    /** First phase of the charging process. The battery is charging with constant current. */
    ArsdkFeatureCommonChargerstateCharginginfoPhaseConstantCurrent1 = 1,

    /** Second phase of the charging process. The battery is charging with constant current, with a higher voltage than the first phase. */
    ArsdkFeatureCommonChargerstateCharginginfoPhaseConstantCurrent2 = 2,

    /** Last part of the charging process. The battery is charging with a constant voltage. */
    ArsdkFeatureCommonChargerstateCharginginfoPhaseConstantVoltage = 3,

    /** The battery is fully charged. */
    ArsdkFeatureCommonChargerstateCharginginfoPhaseCharged = 4,

    /** The battery is discharging; Other arguments refers to the last charge. */
    ArsdkFeatureCommonChargerstateCharginginfoPhaseDischarging = 5,

};
#define ArsdkFeatureCommonChargerstateCharginginfoPhaseCnt 6

/** The charge rate. If phase is DISCHARGING, refers to the last charge. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonChargerstateCharginginfoRate) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonChargerstateCharginginfoRateSdkCoreUnknown = -1,

    /** The charge rate is not known. */
    ArsdkFeatureCommonChargerstateCharginginfoRateUnknown = 0,

    /** Slow charge rate. */
    ArsdkFeatureCommonChargerstateCharginginfoRateSlow = 1,

    /** Moderate charge rate. */
    ArsdkFeatureCommonChargerstateCharginginfoRateModerate = 2,

    /** Fast charge rate. */
    ArsdkFeatureCommonChargerstateCharginginfoRateFast = 3,

};
#define ArsdkFeatureCommonChargerstateCharginginfoRateCnt 4

@protocol ArsdkFeatureCommonChargerstateCallback<NSObject>

@optional

/**
 Max charge rate. 

 - parameter rate: 
*/
- (void)onMaxChargeRateChanged:(ArsdkFeatureCommonChargerstateMaxchargeratechangedRate)rate
NS_SWIFT_NAME(onMaxChargeRateChanged(rate:));

/**
 Current charge state. 

 - parameter status: 
 - parameter phase: 
*/
- (void)onCurrentChargeStateChanged:(ArsdkFeatureCommonChargerstateCurrentchargestatechangedStatus)status phase:(ArsdkFeatureCommonChargerstateCurrentchargestatechangedPhase)phase
NS_SWIFT_NAME(onCurrentChargeStateChanged(status:phase:));

/**
 Last charge rate. 

 - parameter rate: 
*/
- (void)onLastChargeRateChanged:(ArsdkFeatureCommonChargerstateLastchargeratechangedRate)rate
NS_SWIFT_NAME(onLastChargeRateChanged(rate:));

/**
 Charging information. 

 - parameter phase: 
 - parameter rate: 
 - parameter intensity: The charging intensity, in dA. (12dA = 1,2A) ; If phase is DISCHARGING, refers to the last charge. Equals to 0 if not known.
 - parameter fullChargingTime: The full charging time estimated, in minute. If phase is DISCHARGING, refers to the last charge. Equals to 0 if not known.
*/
- (void)onChargingInfo:(ArsdkFeatureCommonChargerstateCharginginfoPhase)phase rate:(ArsdkFeatureCommonChargerstateCharginginfoRate)rate intensity:(NSUInteger)intensity fullchargingtime:(NSUInteger)fullchargingtime
NS_SWIFT_NAME(onChargingInfo(phase:rate:intensity:fullchargingtime:));


@end

@interface ArsdkFeatureCommonChargerstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureCommonChargerstateCallback>)callback;

@end

