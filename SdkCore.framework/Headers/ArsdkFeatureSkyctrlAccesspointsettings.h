/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlAccesspointsettingsUid;

struct arsdk_cmd;

/** The type of wifi selection (only manual at the moment) */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionTypeSdkCoreUnknown = -1,

    /** Manual selection */
    ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionTypeManual = 0,

};
#define ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionTypeCnt 1

/** The allowed band : 2.4 Ghz or 5 Ghz */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionBand5ghz = 1,

};
#define ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionBandCnt 2

/** The type of security for the network */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlAccesspointsettingsWifisecuritySecurityType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlAccesspointsettingsWifisecuritySecurityTypeSdkCoreUnknown = -1,

    /** Wifi is not protected (default) */
    ArsdkFeatureSkyctrlAccesspointsettingsWifisecuritySecurityTypeOpen = 0,

    /** Wifi is protected by wpa2 */
    ArsdkFeatureSkyctrlAccesspointsettingsWifisecuritySecurityTypeWpa2 = 1,

};
#define ArsdkFeatureSkyctrlAccesspointsettingsWifisecuritySecurityTypeCnt 2

@interface ArsdkFeatureSkyctrlAccesspointsettings : NSObject

/**
 Set the SkyController access point SSID.
The name will be checked, and can be modified before application. Use the [AccessPointSSIDChanged](#4-10-0) event to get the applied network name. 

 - parameter ssid: AccessPoint SSID
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))accessPointSSIDEncoder:(NSString*)ssid
NS_SWIFT_NAME(accessPointSSIDEncoder(ssid:));

/**
 Set the SkyController access point channel.
The channel will be checked, and can be modified before application. Use the [AccessPointChannelChanged](#4-10-1) event to get the applied channel.
The list of authorized channels for the current country can be retrived with the [WifiAuthChannel](#4-1-4) command.
This command is deprecated. Use the [WifiSelection](#4-9-2) command instead. 

 - parameter channel: AccessPoint Channel
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))accessPointChannelEncoder:(NSUInteger)channel
NS_SWIFT_NAME(accessPointChannelEncoder(channel:));

/**
 Set the SkyController access point channel.
The channel will be checked, and can be modified before application. Use the [WifiSelectionChanged](#4-10-2) event to get the applied channel/band.
The list of authorized channels for the current country can be retrived with the [WifiAuthChannel](#4-1-4) command. 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiSelectionEncoder:(ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionType)type band:(ArsdkFeatureSkyctrlAccesspointsettingsWifiselectionBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(wifiSelectionEncoder(type:band:channel:));

/**
 Set the SkyController access point security. The key will be checked, and can be refused by the product. In this case, the security will not be changed. Use the [WifiSecurityChanged](#4-10-3) event to get the applied security settings. 

 - parameter security_type: 
 - parameter key: The security key (ignored if security_type is open)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiSecurityEncoder:(ArsdkFeatureSkyctrlAccesspointsettingsWifisecuritySecurityType)securityType key:(NSString*)key
NS_SWIFT_NAME(wifiSecurityEncoder(securityType:key:));

@end

