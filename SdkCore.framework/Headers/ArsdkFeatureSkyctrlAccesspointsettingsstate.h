/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlAccesspointsettingsstateUid;

struct arsdk_cmd;

/** The type of wifi selection (only manual at the moment) */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedTypeSdkCoreUnknown = -1,

    /** Manual selection */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedTypeManual = 0,

};
#define ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedTypeCnt 1

/** The allowed band : 2.4 Ghz or 5 Ghz */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedBand5ghz = 1,

};
#define ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedBandCnt 2

/** The type of security for the network */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlAccesspointsettingsstateWifisecuritychangedSecurityType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifisecuritychangedSecurityTypeSdkCoreUnknown = -1,

    /** Wifi is not protected (default) */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifisecuritychangedSecurityTypeOpen = 0,

    /** Wifi is protected by wpa2 */
    ArsdkFeatureSkyctrlAccesspointsettingsstateWifisecuritychangedSecurityTypeWpa2 = 1,

};
#define ArsdkFeatureSkyctrlAccesspointsettingsstateWifisecuritychangedSecurityTypeCnt 2

@protocol ArsdkFeatureSkyctrlAccesspointsettingsstateCallback<NSObject>

@optional

/**
 Changing the SSID will often (if not always) trigger a disconnection of the controller, so this event will only be recieved during the initial connexion phase. 

 - parameter ssid: AccessPoint SSID
*/
- (void)onAccessPointSSIDChanged:(NSString*)ssid
NS_SWIFT_NAME(onAccessPointSSIDChanged(ssid:));

/**
 This command is deprecated, as the returned channel number does not contain information about the wifi band (2.4GHz or 5GHz). Use the [WifiSelectionChanged](#4-10-2) event instead 

 - parameter channel: AccessPoint Channel
*/
- (void)onAccessPointChannelChanged:(NSUInteger)channel
NS_SWIFT_NAME(onAccessPointChannelChanged(channel:));

/**
 Changing the channel will often (if not always) trigger a disconnection of the controller, so this event will only be recieved during the initial connexion phase. 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel
*/
- (void)onWifiSelectionChanged:(ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedType)type band:(ArsdkFeatureSkyctrlAccesspointsettingsstateWifiselectionchangedBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(onWifiSelectionChanged(type:band:channel:));

/**
 Changing the security will often (if not always) trigger a disconnection of the controller, so this event will only be recieved during the initial connexion phase. 

 - parameter security_type: 
 - parameter key: The security key (ignored if security_type is open)
*/
- (void)onWifiSecurityChanged:(ArsdkFeatureSkyctrlAccesspointsettingsstateWifisecuritychangedSecurityType)securityType key:(NSString*)key
NS_SWIFT_NAME(onWifiSecurityChanged(securityType:key:));


@end

@interface ArsdkFeatureSkyctrlAccesspointsettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureSkyctrlAccesspointsettingsstateCallback>)callback;

@end

