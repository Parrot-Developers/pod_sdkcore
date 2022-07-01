/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3NetworkstateUid;

struct arsdk_cmd;

/** The band : 2.4 GHz or 5 GHz */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworkstateWifiscanlistchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworkstateWifiscanlistchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureArdrone3NetworkstateWifiscanlistchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureArdrone3NetworkstateWifiscanlistchangedBand5ghz = 1,

};
#define ArsdkFeatureArdrone3NetworkstateWifiscanlistchangedBandCnt 2

/** The band of this channel : 2.4 GHz or 5 GHz */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworkstateWifiauthchannellistchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworkstateWifiauthchannellistchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureArdrone3NetworkstateWifiauthchannellistchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureArdrone3NetworkstateWifiauthchannellistchangedBand5ghz = 1,

};
#define ArsdkFeatureArdrone3NetworkstateWifiauthchannellistchangedBandCnt 2

@protocol ArsdkFeatureArdrone3NetworkstateCallback<NSObject>

@optional

/**
 Wifi scan results.
Please note that the list is not complete until you receive the event [WifiScanEnded](#1-14-1). 

 - parameter ssid: SSID of the AP
 - parameter rssi: RSSI of the AP in dbm (negative value)
 - parameter band: 
 - parameter channel: Channel of the AP
*/
- (void)onWifiScanListChanged:(NSString *)ssid rssi:(NSInteger)rssi band:(ArsdkFeatureArdrone3NetworkstateWifiscanlistchangedBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(onWifiScanListChanged(ssid:rssi:band:channel:));

/**
 Wifi scan ended.
When receiving this event, the list of [WifiScanResults](#1-14-0) is complete. 

*/
- (void)onAllWifiScanChanged
NS_SWIFT_NAME(onAllWifiScanChanged());

/**
 Available wifi channels.
Please note that the list is not complete until you receive the event [AvailableWifiChannelsCompleted](#1-14-3). 

 - parameter band: 
 - parameter channel: The authorized channel.
 - parameter in_or_out: Bit 0 is 1 if channel is authorized outside (0 otherwise) ; Bit 1 is 1 if channel is authorized inside (0 otherwise)
*/
- (void)onWifiAuthChannelListChanged:(ArsdkFeatureArdrone3NetworkstateWifiauthchannellistchangedBand)band channel:(NSUInteger)channel inOrOut:(NSUInteger)inOrOut
NS_SWIFT_NAME(onWifiAuthChannelListChanged(band:channel:inOrOut:));

/**
 Available wifi channels completed.
When receiving this event, the list of [AvailableWifiChannels](#1-14-2) is complete. 

*/
- (void)onAllWifiAuthChannelChanged
NS_SWIFT_NAME(onAllWifiAuthChannelChanged());


@end

@interface ArsdkFeatureArdrone3Networkstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureArdrone3NetworkstateCallback>)callback;

@end

