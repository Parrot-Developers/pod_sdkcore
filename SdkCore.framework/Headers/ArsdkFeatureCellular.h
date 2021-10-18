/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCellularUid;

struct arsdk_cmd;

/** Supported capabilities. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularSupportedCapabilities) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularSupportedCapabilitiesSdkCoreUnknown = -1,

    /** Supports 4G. */
    ArsdkFeatureCellularSupportedCapabilities4g = 0,

};
#define ArsdkFeatureCellularSupportedCapabilitiesCnt 1

@interface ArsdkFeatureCellularSupportedCapabilitiesBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureCellularSupportedCapabilities)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureCellularSupportedCapabilities val))cb;

@end

/** Cellular mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularModeSdkCoreUnknown = -1,

    /** Cellular feature is disabled, Airplane mode. */
    ArsdkFeatureCellularModeDisabled = 0,

    /** Cellular feature is enabled, data are disabled. */
    ArsdkFeatureCellularModeNodata = 1,

    /** Cellular feature is enabled, data are enabled. */
    ArsdkFeatureCellularModeData = 2,

};
#define ArsdkFeatureCellularModeCnt 3

/** SIM card status. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularSimStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularSimStatusSdkCoreUnknown = -1,

    /** SIM card status is unknown. */
    ArsdkFeatureCellularSimStatusUnknown = 0,

    /** No SIM card is available. */
    ArsdkFeatureCellularSimStatusAbsent = 1,

    /** SIM card is initializing. */
    ArsdkFeatureCellularSimStatusInitializing = 2,

    /** SIM card is locked and requires a PIN code to unlock. */
    ArsdkFeatureCellularSimStatusLocked = 3,

    /** SIM card is ready. */
    ArsdkFeatureCellularSimStatusReady = 4,

};
#define ArsdkFeatureCellularSimStatusCnt 5

/** Modem status. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularModemStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularModemStatusSdkCoreUnknown = -1,

    /** Modem is off. */
    ArsdkFeatureCellularModemStatusOff = 0,

    /** Modem is offline. */
    ArsdkFeatureCellularModemStatusOffline = 1,

    /** Modem is online. */
    ArsdkFeatureCellularModemStatusOnline = 2,

    /** Modem initialization error. */
    ArsdkFeatureCellularModemStatusError = 3,

    /** Flashing of the modem is ongoing. */
    ArsdkFeatureCellularModemStatusFlashing = 4,

};
#define ArsdkFeatureCellularModemStatusCnt 5

/** Registration status. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularRegistrationStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularRegistrationStatusSdkCoreUnknown = -1,

    /** Not registered. */
    ArsdkFeatureCellularRegistrationStatusNotRegistered = 0,

    /** Searching. */
    ArsdkFeatureCellularRegistrationStatusSearching = 1,

    /** Registered with home operator. */
    ArsdkFeatureCellularRegistrationStatusRegisteredHome = 2,

    /** Registered with roaming operator. */
    ArsdkFeatureCellularRegistrationStatusRegisteredRoaming = 3,

    /** Registration denied. */
    ArsdkFeatureCellularRegistrationStatusDenied = 4,

};
#define ArsdkFeatureCellularRegistrationStatusCnt 5

/** Network status. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularNetworkStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularNetworkStatusSdkCoreUnknown = -1,

    /** Network is deactivated. */
    ArsdkFeatureCellularNetworkStatusDeactivated = 0,

    /** Network is activated. */
    ArsdkFeatureCellularNetworkStatusActivated = 1,

    /** Network activation was denied. */
    ArsdkFeatureCellularNetworkStatusDenied = 2,

    /** Internal error. */
    ArsdkFeatureCellularNetworkStatusError = 3,

};
#define ArsdkFeatureCellularNetworkStatusCnt 4

/** Access technology. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularTechnology) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularTechnologySdkCoreUnknown = -1,

    /** Global System for Mobile Communications. */
    ArsdkFeatureCellularTechnologyGsm = 0,

    /** General Packet Radio Service. */
    ArsdkFeatureCellularTechnologyGprs = 1,

    /** Enhanced Data Rates for GSM Evolution. */
    ArsdkFeatureCellularTechnologyEdge = 2,

    /** 3G. */
    ArsdkFeatureCellularTechnology3g = 3,

    /** High Speed Downlink Packet Access. */
    ArsdkFeatureCellularTechnologyHsdpa = 4,

    /** High Speed Uplink Packet Access. */
    ArsdkFeatureCellularTechnologyHsupa = 5,

    /** High Speed Packet Access. */
    ArsdkFeatureCellularTechnologyHspa = 6,

    /** 4G. */
    ArsdkFeatureCellularTechnology4g = 7,

    /** 4G+ Band aggregation. */
    ArsdkFeatureCellularTechnology4gPlus = 8,

    /** 5G. */
    ArsdkFeatureCellularTechnology5g = 9,

};
#define ArsdkFeatureCellularTechnologyCnt 10

/** Configured access technology. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCellularNetworkMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCellularNetworkModeSdkCoreUnknown = -1,

    /** Mode auto */
    ArsdkFeatureCellularNetworkModeAuto = 0,

    /** 3G. */
    ArsdkFeatureCellularNetworkMode3g = 1,

    /** 4G. */
    ArsdkFeatureCellularNetworkMode4g = 2,

    /** 5G. */
    ArsdkFeatureCellularNetworkMode5g = 3,

};
#define ArsdkFeatureCellularNetworkModeCnt 4

@protocol ArsdkFeatureCellularCallback<NSObject>

@optional

/**
  

 - parameter modem_id: id of the modem.
Modem id is unique and persistent: the same modem model on a same drone model always has the same id.
Main/Built-in modem has id zero.
 - parameter supported_capabilities: Supported capabilities.
*/
- (void)onCapabilities:(NSUInteger)modemId supportedCapabilitiesBitField:(NSUInteger)supportedCapabilitiesBitField
NS_SWIFT_NAME(onCapabilities(modemId:supportedCapabilitiesBitField:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter mode: Mode of cellular feature.
*/
- (void)onMode:(NSUInteger)modemId mode:(ArsdkFeatureCellularMode)mode
NS_SWIFT_NAME(onMode(modemId:mode:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter status: SIM card status.
 - parameter iccid: SIM card serial number.
 - parameter imsi: International Mobile Subscriber Identity.
*/
- (void)onSimInformation:(NSUInteger)modemId status:(ArsdkFeatureCellularSimStatus)status iccid:(NSString*)iccid imsi:(NSString*)imsi
NS_SWIFT_NAME(onSimInformation(modemId:status:iccid:imsi:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter status: Registration status.
 - parameter operator: Operator name.
 - parameter technology: Access technology.
*/
- (void)onRegistrationInformation:(NSUInteger)modemId status:(ArsdkFeatureCellularRegistrationStatus)status operator:(NSString*)operator technology:(ArsdkFeatureCellularTechnology)technology
NS_SWIFT_NAME(onRegistrationInformation(modemId:status:operator:technology:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter network_mode: Allowed access technology.
*/
- (void)onNetworkMode:(NSUInteger)modemId networkMode:(ArsdkFeatureCellularNetworkMode)networkMode
NS_SWIFT_NAME(onNetworkMode(modemId:networkMode:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter roaming_allowed: 1 if roaming is allowed, 0 if disallowed.
*/
- (void)onRoamingAllowed:(NSUInteger)modemId roamingAllowed:(NSUInteger)roamingAllowed
NS_SWIFT_NAME(onRoamingAllowed(modemId:roamingAllowed:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter status: Modem status.
 - parameter imei: International mobile equipment identity.
*/
- (void)onModemInformation:(NSUInteger)modemId status:(ArsdkFeatureCellularModemStatus)status imei:(NSString*)imei
NS_SWIFT_NAME(onModemInformation(modemId:status:imei:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter status: Network status.
*/
- (void)onNetworkInformation:(NSUInteger)modemId status:(ArsdkFeatureCellularNetworkStatus)status
NS_SWIFT_NAME(onNetworkInformation(modemId:status:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter mode: 0 for auto mode, 1 for manually set apn
 - parameter url: Access Point Name URL.
 - parameter username: Access Point Name username.
 - parameter password: Access Point Name password.
*/
- (void)onApnInformation:(NSUInteger)modemId mode:(NSUInteger)mode url:(NSString*)url username:(NSString*)username password:(NSString*)password
NS_SWIFT_NAME(onApnInformation(modemId:mode:url:username:password:));

/**
  

 - parameter modem_id: Id of the modem.
 - parameter invalid_pincode: 0 if no PIN code has been provided yet, 1 if an invalid PIN code has been rejected by the SIM.
 - parameter pin_remaining_tries: Remaining PIN code tries.
*/
- (void)onPincodeRequest:(NSUInteger)modemId invalidPincode:(NSUInteger)invalidPincode pinRemainingTries:(NSUInteger)pinRemainingTries
NS_SWIFT_NAME(onPincodeRequest(modemId:invalidPincode:pinRemainingTries:));

/**
  

*/
- (void)onResetConfigFailed
NS_SWIFT_NAME(onResetConfigFailed());


@end

@interface ArsdkFeatureCellular : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCellularCallback>)callback;

/**
 Set mode of cellular feature. 

 - parameter modem_id: Id of the modem.
 - parameter mode: Requested cellular mode.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setModeEncoder:(NSUInteger)modemId mode:(ArsdkFeatureCellularMode)mode
NS_SWIFT_NAME(setModeEncoder(modemId:mode:));

/**
 Set SIM card PIN code. 

 - parameter modem_id: Id of the modem.
 - parameter pin: SIM card PIN code.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setPinCodeEncoder:(NSUInteger)modemId pin:(NSString*)pin
NS_SWIFT_NAME(setPinCodeEncoder(modemId:pin:));

/**
 Force a specific mobile technology. 

 - parameter modem_id: Id of the modem.
 - parameter network_mode: Access technology.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setNetworkModeEncoder:(NSUInteger)modemId networkMode:(ArsdkFeatureCellularNetworkMode)networkMode
NS_SWIFT_NAME(setNetworkModeEncoder(modemId:networkMode:));

/**
 Allow or disallow roaming. 

 - parameter modem_id: Id of the modem.
 - parameter allowed: 1 to allow roaming, 0 to disallow roaming.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setRoamingAllowedEncoder:(NSUInteger)modemId allowed:(NSUInteger)allowed
NS_SWIFT_NAME(setRoamingAllowedEncoder(modemId:allowed:));

/**
 Set APN configuration. 

 - parameter modem_id: Id of the modem.
 - parameter mode: 0 for auto mode, 1 to set apn manually
 - parameter url: APN URL.
 - parameter username: APN username.
 - parameter password: APN password.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setApnEncoder:(NSUInteger)modemId mode:(NSUInteger)mode url:(NSString*)url username:(NSString*)username password:(NSString*)password
NS_SWIFT_NAME(setApnEncoder(modemId:mode:url:username:password:));

/**
 Resets configuration and reboots the product if it is not flying. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))resetConfigEncoder
NS_SWIFT_NAME(resetConfigEncoder());

@end

