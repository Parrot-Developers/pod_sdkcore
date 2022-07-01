/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlWifistateUid;

struct arsdk_cmd;

/** Wifi status */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlWifistateConnexionchangedStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlWifistateConnexionchangedStatusSdkCoreUnknown = -1,

    /** Connected */
    ArsdkFeatureSkyctrlWifistateConnexionchangedStatusConnected = 0,

    /** Error */
    ArsdkFeatureSkyctrlWifistateConnexionchangedStatusError = 1,

    /** Disconnected */
    ArsdkFeatureSkyctrlWifistateConnexionchangedStatusDisconnected = 2,

};
#define ArsdkFeatureSkyctrlWifistateConnexionchangedStatusCnt 3

/** The band of this channel : 2.4 GHz or 5 GHz */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedBand5ghz = 1,

};
#define ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedBandCnt 2

/** The band of this channel : 2.4 GHz or 5 GHz */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedv2Band) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedv2BandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedv2Band2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedv2Band5ghz = 1,

};
#define ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedv2BandCnt 2

/** Type of environment */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlWifistateWifienvironmentchangedEnvironment) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlWifistateWifienvironmentchangedEnvironmentSdkCoreUnknown = -1,

    /** indoor environment */
    ArsdkFeatureSkyctrlWifistateWifienvironmentchangedEnvironmentIndoor = 0,

    /** outdoor environment */
    ArsdkFeatureSkyctrlWifistateWifienvironmentchangedEnvironmentOutdoor = 1,

};
#define ArsdkFeatureSkyctrlWifistateWifienvironmentchangedEnvironmentCnt 2

@protocol ArsdkFeatureSkyctrlWifistateCallback<NSObject>

@optional

/**
 List of visible wifi networks.
The application must clear the list before sending the [RequestWifiList](#4-1-0) command. 

 - parameter bssid: Wifi bssid
 - parameter ssid: Wifi ssid
 - parameter secured: Is wifi secured by passphrase
 - parameter saved: Is wifi saved in terminal
 - parameter rssi: Wifi rssi
 - parameter frequency: Wifi frequency
*/
- (void)onWifiList:(NSString *)bssid ssid:(NSString *)ssid secured:(NSUInteger)secured saved:(NSUInteger)saved rssi:(NSInteger)rssi frequency:(NSInteger)frequency
NS_SWIFT_NAME(onWifiList(bssid:ssid:secured:saved:rssi:frequency:));

/**
 Describes the current wifi connection status of the SkyController.
The connection to a wifi network does not guarantee a connection to a drone. To get the drone connection state, use the [device ConnectionChanged](#4-3-1) event. 

 - parameter ssid: Wifi ssid
 - parameter status: 
*/
- (void)onConnexionChanged:(NSString *)ssid status:(ArsdkFeatureSkyctrlWifistateConnexionchangedStatus)status
NS_SWIFT_NAME(onConnexionChanged(ssid:status:));

/**
 Each element represent an authorized wifi channel for the current country regulatory domain.
Note that some channels might be only authorized for indoor or outdoor use.
The list is complete when the [AllWifiAuthChannelChanged](#4-0-3) event is recieved. 

 - parameter band: 
 - parameter channel: The authorized channel
 - parameter in_or_out: Bit 0 is 1 if channel is authorized outside (0 otherwise)
Bit 1 is 1 if channel is authorized inside (0 otherwise)
*/
- (void)onWifiAuthChannelListChanged:(ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedBand)band channel:(NSUInteger)channel inOrOut:(NSUInteger)inOrOut
NS_SWIFT_NAME(onWifiAuthChannelListChanged(band:channel:inOrOut:));

/**
 This event closes the [WifiAuthChannel](#4-1-4) command response. No more [WifiAuthChannelListChanged](#4-0-2) event will be sent after this event. 

*/
- (void)onAllWifiAuthChannelChanged
NS_SWIFT_NAME(onAllWifiAuthChannelChanged());

/**
 This event describes the signal strength for the long range wifi.
A zero value is used when the SkyController is not connected to a wifi network. 

 - parameter level: Level of the signal. Levels are from 0 to 5.
0 is an unknown value. 1 is a weak wifi signal, 5 is the best.
*/
- (void)onWifiSignalChanged:(NSUInteger)level
NS_SWIFT_NAME(onWifiSignalChanged(level:));

/**
 Each element represent an authorized wifi channel for the current country regulatory domain.
Note that some channels might be only authorized for indoor or outdoor use. 

 - parameter band: 
 - parameter channel: The authorized channel
 - parameter in_or_out: Bit 0 is 1 if channel is authorized outside (0 otherwise)
Bit 1 is 1 if channel is authorized inside (0 otherwise)
 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
0x08: Remove: This value should be removed from the existing list.
*/
- (void)onWifiAuthChannelListChangedV2:(ArsdkFeatureSkyctrlWifistateWifiauthchannellistchangedv2Band)band channel:(NSUInteger)channel inOrOut:(NSUInteger)inOrOut listFlags:(NSUInteger)listFlags
NS_SWIFT_NAME(onWifiAuthChannelListChangedV2(band:channel:inOrOut:listFlags:));

/**
 The wifi country of the SkyController will follow the wifi country of the currently connected drone, except for country-locked SkyControllers. 

 - parameter code: Country code with ISO 3166 format, empty string means unknown country.
*/
- (void)onWifiCountryChanged:(NSString *)code
NS_SWIFT_NAME(onWifiCountryChanged(code:));

/**
 The wifi environment of the SkyController will follow the wifi environment of the currently connected drone 

 - parameter environment: 
*/
- (void)onWifiEnvironmentChanged:(ArsdkFeatureSkyctrlWifistateWifienvironmentchangedEnvironment)environment
NS_SWIFT_NAME(onWifiEnvironmentChanged(environment:));


@end

@interface ArsdkFeatureSkyctrlWifistate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSkyctrlWifistateCallback>)callback;

@end

