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

    /** Battery Gauge is too old. */
    ArsdkFeatureBatteryAlertGaugeTooOld = 3,

    /** Authentication has failed. */
    ArsdkFeatureBatteryAlertAuthenticationFailure = 4,

    /** Lost comm with battery. */
    ArsdkFeatureBatteryAlertLostComm = 5,

};
#define ArsdkFeatureBatteryAlertCnt 6

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

/**
  

 - parameter count: Battery Cycle Count
*/
- (void)onCycleCount:(NSUInteger)count
NS_SWIFT_NAME(onCycleCount(count:));

/**
  

 - parameter serial: Battery Serial
*/
- (void)onSerial:(nonnull NSString *)serial
NS_SWIFT_NAME(onSerial(serial:));

/**
  

 - parameter serial: Battery Serial
 - parameter date: Battery Configuration Date
 - parameter design: Battery Design Capacity in mAh
 - parameter cell_count: Battery cell count
 - parameter cell_min_voltage: Battery cell minimum Voltage in mV
 - parameter cell_max_voltage: Battery cell maximum Voltage in mV
*/
- (void)onDescription:(nonnull NSString *)serial date:(nonnull NSString *)date design:(NSUInteger)design cellCount:(NSUInteger)cellCount cellMinVoltage:(NSUInteger)cellMinVoltage cellMaxVoltage:(NSUInteger)cellMaxVoltage
NS_SWIFT_NAME(onDescription(serial:date:design:cellCount:cellMinVoltage:cellMaxVoltage:));

/**
  

 - parameter temperature: Battery Temperature in Kelvin
*/
- (void)onTemperature:(NSUInteger)temperature
NS_SWIFT_NAME(onTemperature(temperature:));

/**
  

 - parameter full_charge: Battery Full Charge Capacity in mAh
 - parameter remaining: Battery Remaining Capacity in mAh
*/
- (void)onCapacity:(NSUInteger)fullCharge remaining:(NSUInteger)remaining
NS_SWIFT_NAME(onCapacity(fullCharge:remaining:));

/**
 Battery cell voltage. 

 - parameter index: Cell index starting from 0
 - parameter cell_voltage: Cell Voltage in mV
*/
- (void)onCellVoltage:(NSUInteger)index cellVoltage:(NSUInteger)cellVoltage
NS_SWIFT_NAME(onCellVoltage(index:cellVoltage:));

/**
 Version of the components of the battery. 

 - parameter hw_revision: Battery Hardware Revision
 - parameter fw_version: Battery Firmware Version
 - parameter gauge_version: Battery Gauge Version
 - parameter usb_version: Battery USB Version
*/
- (void)onVersion:(NSUInteger)hwRevision fwVersion:(nonnull NSString *)fwVersion gaugeVersion:(nonnull NSString *)gaugeVersion usbVersion:(nonnull NSString *)usbVersion
NS_SWIFT_NAME(onVersion(hwRevision:fwVersion:gaugeVersion:usbVersion:));


@end

@interface ArsdkFeatureBattery : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureBatteryCallback>)callback;

@end

