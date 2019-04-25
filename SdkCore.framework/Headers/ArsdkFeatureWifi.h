/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureWifiUid;

struct arsdk_cmd;

/** The band : 2.4 Ghz or 5 Ghz */
typedef NS_ENUM(NSInteger, ArsdkFeatureWifiBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureWifiBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureWifiBand2_4Ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureWifiBand5Ghz = 1,

};
#define ArsdkFeatureWifiBandCnt 2

@interface ArsdkFeatureWifiBandBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureWifiBand)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureWifiBand val))cb;

@end

/** The wifi selection type available */
typedef NS_ENUM(NSInteger, ArsdkFeatureWifiSelectionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureWifiSelectionTypeSdkCoreUnknown = -1,

    /** Auto selection on all channels */
    ArsdkFeatureWifiSelectionTypeAutoAll = 0,

    /** Auto selection 2.4ghz */
    ArsdkFeatureWifiSelectionTypeAuto2_4Ghz = 1,

    /** Auto selection 5 ghz */
    ArsdkFeatureWifiSelectionTypeAuto5Ghz = 2,

    /** manual selection */
    ArsdkFeatureWifiSelectionTypeManual = 3,

};
#define ArsdkFeatureWifiSelectionTypeCnt 4

/** The type of wifi security (open, wpa2) */
typedef NS_ENUM(NSInteger, ArsdkFeatureWifiSecurityType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureWifiSecurityTypeSdkCoreUnknown = -1,

    /** Wifi is not protected by any security (default) */
    ArsdkFeatureWifiSecurityTypeOpen = 0,

    /** Wifi is protected by wpa2 */
    ArsdkFeatureWifiSecurityTypeWpa2 = 1,

};
#define ArsdkFeatureWifiSecurityTypeCnt 2

@interface ArsdkFeatureWifiSecurityTypeBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureWifiSecurityType)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureWifiSecurityType val))cb;

@end

/** Type of the key sent */
typedef NS_ENUM(NSInteger, ArsdkFeatureWifiSecurityKeyType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureWifiSecurityKeyTypeSdkCoreUnknown = -1,

    /** Key is plain text, not encrypted */
    ArsdkFeatureWifiSecurityKeyTypePlain = 0,

};
#define ArsdkFeatureWifiSecurityKeyTypeCnt 1

/** Type of environment */
typedef NS_ENUM(NSInteger, ArsdkFeatureWifiEnvironment) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureWifiEnvironmentSdkCoreUnknown = -1,

    /** indoor environment */
    ArsdkFeatureWifiEnvironmentIndoor = 0,

    /** outdoor environment */
    ArsdkFeatureWifiEnvironmentOutdoor = 1,

};
#define ArsdkFeatureWifiEnvironmentCnt 2

@interface ArsdkFeatureWifiEnvironmentBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureWifiEnvironment)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureWifiEnvironment val))cb;

@end

/** Type of country selection */
typedef NS_ENUM(NSInteger, ArsdkFeatureWifiCountrySelection) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureWifiCountrySelectionSdkCoreUnknown = -1,

    /** Manual selection. */
    ArsdkFeatureWifiCountrySelectionManual = 0,

    /** Automatic selection. */
    ArsdkFeatureWifiCountrySelectionAuto = 1,

};
#define ArsdkFeatureWifiCountrySelectionCnt 2

@protocol ArsdkFeatureWifiCallback<NSObject>

@optional

/**
 Wifi scan results. 

 - parameter ssid: SSID of the AP
 - parameter rssi: RSSI of the AP.
 - parameter band: 
 - parameter channel: Channel of the AP
 - parameter list_flags: 
*/
- (void)onScannedItem:(NSString*)ssid rssi:(NSInteger)rssi band:(ArsdkFeatureWifiBand)band channel:(NSUInteger)channel listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onScannedItem(ssid:rssi:band:channel:listFlagsBitField:));

/**
 Available channel results. 

 - parameter band: 
 - parameter channel: The channel number
 - parameter environment: 
 - parameter list_flags: 
*/
- (void)onAuthorizedChannel:(ArsdkFeatureWifiBand)band channel:(NSUInteger)channel environmentBitField:(NSUInteger)environmentBitField listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onAuthorizedChannel(band:channel:environmentBitField:listFlagsBitField:));

/**
 Wifi selection changed. 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel of the drone's access point
*/
- (void)onApChannelChanged:(ArsdkFeatureWifiSelectionType)type band:(ArsdkFeatureWifiBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(onApChannelChanged(type:band:channel:));

/**
  

 - parameter type: 
 - parameter key: The key to secure the network. Not used if type is open
 - parameter key_type: 
*/
- (void)onSecurityChanged:(ArsdkFeatureWifiSecurityType)type key:(NSString*)key keyType:(ArsdkFeatureWifiSecurityKeyType)keyType
NS_SWIFT_NAME(onSecurityChanged(type:key:keyType:));

/**
 Wifi country changed. 

 - parameter selection_mode: 
 - parameter code: Country code with ISO 3166 format, empty string means unknown country.
*/
- (void)onCountryChanged:(ArsdkFeatureWifiCountrySelection)selectionMode code:(NSString*)code
NS_SWIFT_NAME(onCountryChanged(selectionMode:code:));

/**
 Status of the wifi config : either indoor or outdoor. 

 - parameter environment: 1 if it uses outdoor wifi settings, 0 otherwise
*/
- (void)onEnvironmentChanged:(ArsdkFeatureWifiEnvironment)environment
NS_SWIFT_NAME(onEnvironmentChanged(environment:));

/**
 Rssi Changed. This is an information about the Wifi link quality. 

 - parameter rssi: Rssi on the connected wifi network. Rssi values are generally between -30 and -120dBm. The nearest of 0 is the better.
*/
- (void)onRssiChanged:(NSInteger)rssi
NS_SWIFT_NAME(onRssiChanged(rssi:));

/**
 List of countries supported by the drone. 

 - parameter countries: List of country code in ISO 3166 format separated by ";"
*/
- (void)onSupportedCountries:(NSString*)countries
NS_SWIFT_NAME(onSupportedCountries(countries:));

/**
 List of security types supported by the drone. 

 - parameter types: Bitfield of supported security types.
*/
- (void)onSupportedSecurityTypes:(NSUInteger)typesBitField
NS_SWIFT_NAME(onSupportedSecurityTypes(typesBitField:));


@end

@interface ArsdkFeatureWifi : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureWifiCallback>)callback;

/**
 Launches wifi network scan for a given band to get a list of all wifi networks found by the drone. 

 - parameter band: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))scanEncoder:(NSUInteger)bandBitField
NS_SWIFT_NAME(scanEncoder(bandBitField:));

/**
 Get all available Wifi channels.
The list of available Wifi channels is related to the country of the drone. You can get this country with the event [WifiCountryChanged](#wifi-CountryChanged). 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))updateAuthorizedChannelsEncoder
NS_SWIFT_NAME(updateAuthorizedChannelsEncoder());

/**
 Select channel of choosen band to put the drone's access point on this channel. 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel you want to select. Used only when type is manual.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setApChannelEncoder:(ArsdkFeatureWifiSelectionType)type band:(ArsdkFeatureWifiBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(setApChannelEncoder(type:band:channel:));

/**
 Set the wifi security.
The security is changed on the next boot. 

 - parameter type: 
 - parameter key: The key to secure the network. Not used if type is open
 - parameter key_type: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setSecurityEncoder:(ArsdkFeatureWifiSecurityType)type key:(NSString*)key keyType:(ArsdkFeatureWifiSecurityKeyType)keyType
NS_SWIFT_NAME(setSecurityEncoder(type:key:keyType:));

/**
 Set the wifi country. 

 - parameter selection_mode: 
 - parameter code: Country code with ISO 3166 format. Not used if automatic is 1.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setCountryEncoder:(ArsdkFeatureWifiCountrySelection)selectionMode code:(NSString*)code
NS_SWIFT_NAME(setCountryEncoder(selectionMode:code:));

/**
 Set indoor or outdoor wifi settings. 

 - parameter environment: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setEnvironmentEncoder:(ArsdkFeatureWifiEnvironment)environment
NS_SWIFT_NAME(setEnvironmentEncoder(environment:));

@end

