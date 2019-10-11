/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureBatteryUid;

struct arsdk_cmd;

/** Battery alerts. */
typedef NS_ENUM(NSInteger, ArsdkFeatureBatteryAlert) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureBatteryAlertSdkCoreUnknown = -1,

    /** Power level is low. */
    ArsdkFeatureBatteryAlertPowerLevel = 0,

    /** Battery is too hot. */
    ArsdkFeatureBatteryAlertTooHot = 1,

    /** Battery is too cold. */
    ArsdkFeatureBatteryAlertTooCold = 2,

};
#define ArsdkFeatureBatteryAlertCnt 3

/** Alert level. */
typedef NS_ENUM(NSInteger, ArsdkFeatureBatteryAlertLevel) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureBatteryAlertLevelSdkCoreUnknown = -1,

    /** Alert is not active. */
    ArsdkFeatureBatteryAlertLevelNone = 0,

    /** Alert level is warning. */
    ArsdkFeatureBatteryAlertLevelWarning = 1,

    /** Alert level is critical. */
    ArsdkFeatureBatteryAlertLevelCritical = 2,

};
#define ArsdkFeatureBatteryAlertLevelCnt 3

@protocol ArsdkFeatureBatteryCallback<NSObject>

@optional

/**
  

 - parameter alert: Alert.
 - parameter level: Alert level.
 - parameter list_flags: 
*/
- (void)onAlert:(ArsdkFeatureBatteryAlert)alert level:(ArsdkFeatureBatteryAlertLevel)level listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onAlert(alert:level:listFlagsBitField:));

/**
  

 - parameter state_of_health: Battery State-Of-Health (%)
*/
- (void)onHealth:(NSUInteger)stateOfHealth
NS_SWIFT_NAME(onHealth(stateOfHealth:));

/**
 Battery voltage. 

 - parameter voltage: Battery voltage in mV
*/
- (void)onVoltage:(NSUInteger)voltage
NS_SWIFT_NAME(onVoltage(voltage:));


@end

@interface ArsdkFeatureBattery : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureBatteryCallback>)callback;

@end

