/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3SettingsstateUid;

struct arsdk_cmd;

/** Enumeration of the motor error */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerror) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorSdkCoreUnknown = -1,

    /** No error detected */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorNoerror = 0,

    /** EEPROM access failure */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErroreeprom = 1,

    /** Motor stalled */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrormotorstalled = 2,

    /** Propeller cutout security triggered */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorpropellersecurity = 3,

    /** Communication with motor failed by timeout */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorcommlost = 4,

    /** RC emergency stop */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorrcemergencystop = 5,

    /** Motor controler scheduler real-time out of bounds */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorrealtime = 6,

    /** One or several incorrect values in motor settings */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrormotorsetting = 7,

    /** Too hot or too cold Cypress temperature */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrortemperature = 8,

    /** Battery voltage out of bounds */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorbatteryvoltage = 9,

    /** Incorrect number of LIPO cells */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorlipocells = 10,

    /** Defectuous MOSFET or broken motor phases */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrormosfet = 11,

    /** Not use for BLDC but useful for HAL */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorbootloader = 12,

    /** Error Made by BLDC_ASSERT() */
    ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorErrorassert = 13,

};
#define ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerrorCnt 14

/** Enumeration of the motor error */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerror) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorSdkCoreUnknown = -1,

    /** No error detected */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorNoerror = 0,

    /** EEPROM access failure */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErroreeprom = 1,

    /** Motor stalled */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrormotorstalled = 2,

    /** Propeller cutout security triggered */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorpropellersecurity = 3,

    /** Communication with motor failed by timeout */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorcommlost = 4,

    /** RC emergency stop */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorrcemergencystop = 5,

    /** Motor controler scheduler real-time out of bounds */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorrealtime = 6,

    /** One or several incorrect values in motor settings */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrormotorsetting = 7,

    /** Battery voltage out of bounds */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorbatteryvoltage = 8,

    /** Incorrect number of LIPO cells */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorlipocells = 9,

    /** Defectuous MOSFET or broken motor phases */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrormosfet = 10,

    /** Too hot or too cold Cypress temperature */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrortemperature = 11,

    /** Not use for BLDC but useful for HAL */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorbootloader = 12,

    /** Error Made by BLDC_ASSERT() */
    ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorErrorassert = 13,

};
#define ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerrorCnt 14

@protocol ArsdkFeatureArdrone3SettingsstateCallback<NSObject>

@optional

/**
 Motor version. 

 - parameter motor_number: Product Motor number
 - parameter type: Product Motor type
 - parameter software: Product Motors software version
 - parameter hardware: Product Motors hardware version
*/
- (void)onProductMotorVersionListChanged:(NSUInteger)motorNumber type:(NSString*)type software:(NSString*)software hardware:(NSString*)hardware
NS_SWIFT_NAME(onProductMotorVersionListChanged(motorNumber:type:software:hardware:));

/**
 GPS version. 

 - parameter software: Product GPS software version
 - parameter hardware: Product GPS hardware version
*/
- (void)onProductGPSVersionChanged:(NSString*)software hardware:(NSString*)hardware
NS_SWIFT_NAME(onProductGPSVersionChanged(software:hardware:));

/**
 Motor error.
This event is sent back to *noError* as soon as the motor error disappear. To get the last motor error, see [LastMotorError](#1-16-5) 

 - parameter motorIds: Bit field for concerned motor. If bit 0 = 1, motor 1 is affected by this error. Same with bit 1, 2 and 3.
Motor 1: front left
Motor 2: front right
Motor 3: back right
Motor 4: back left
 - parameter motorError: 
*/
- (void)onMotorErrorStateChanged:(NSUInteger)motorids motorerror:(ArsdkFeatureArdrone3SettingsstateMotorerrorstatechangedMotorerror)motorerror
NS_SWIFT_NAME(onMotorErrorStateChanged(motorids:motorerror:));

/**
 Motor version. 

 - parameter version: name of the version : dot separated fields (major version - minor version - firmware type - nb motors handled). Firmware types : Release, Debug, Alpha, Test-bench
*/
- (void)onMotorSoftwareVersionChanged:(NSString*)version
NS_SWIFT_NAME(onMotorSoftwareVersionChanged(version:));

/**
 Motor flight status. 

 - parameter nbFlights: total number of flights
 - parameter lastFlightDuration: Duration of the last flight (in seconds)
 - parameter totalFlightDuration: Duration of all flights (in seconds)
*/
- (void)onMotorFlightsStatusChanged:(NSUInteger)nbflights lastflightduration:(NSUInteger)lastflightduration totalflightduration:(NSUInteger)totalflightduration
NS_SWIFT_NAME(onMotorFlightsStatusChanged(nbflights:lastflightduration:totalflightduration:));

/**
 Last motor error.
This is a reminder of the last error. To know if a motor error is currently happening, see [MotorError](#1-16-2). 

 - parameter motorError: 
*/
- (void)onMotorErrorLastErrorChanged:(ArsdkFeatureArdrone3SettingsstateMotorerrorlasterrorchangedMotorerror)motorerror
NS_SWIFT_NAME(onMotorErrorLastErrorChanged(motorerror:));

/**
 P7ID. 

 - parameter serialID: Product P7ID
*/
- (void)onP7ID:(NSString*)serialid
NS_SWIFT_NAME(onP7ID(serialid:));

/**
 Product main cpu id 

 - parameter id: Product main cpu id
*/
- (void)onCPUID:(NSString*)id
NS_SWIFT_NAME(onCPUID(id:));


@end

@interface ArsdkFeatureArdrone3Settingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3SettingsstateCallback>)callback;

@end

