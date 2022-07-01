/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupNetworkstateUid;

struct arsdk_cmd;

/** The band : 2.4 GHz or 5 GHz */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupNetworkstateWifiscanlistchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupNetworkstateWifiscanlistchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeaturePowerupNetworkstateWifiscanlistchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeaturePowerupNetworkstateWifiscanlistchangedBand5ghz = 1,

};
#define ArsdkFeaturePowerupNetworkstateWifiscanlistchangedBandCnt 2

/** The band of this channel : 2.4 GHz or 5 GHz */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupNetworkstateWifiauthchannellistchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupNetworkstateWifiauthchannellistchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeaturePowerupNetworkstateWifiauthchannellistchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeaturePowerupNetworkstateWifiauthchannellistchangedBand5ghz = 1,

};
#define ArsdkFeaturePowerupNetworkstateWifiauthchannellistchangedBandCnt 2

@protocol ArsdkFeaturePowerupNetworkstateCallback<NSObject>

@optional

/**
 One scanning result found 

 - parameter ssid: SSID of the AP
 - parameter rssi: RSSI of the AP in dbm (negative value)
 - parameter band: 
 - parameter channel: Channel of the AP
*/
- (void)onWifiScanListChanged:(NSString *)ssid rssi:(NSInteger)rssi band:(ArsdkFeaturePowerupNetworkstateWifiscanlistchangedBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(onWifiScanListChanged(ssid:rssi:band:channel:));

/**
 State sent when all scanning result sent 

*/
- (void)onAllWifiScanChanged
NS_SWIFT_NAME(onAllWifiScanChanged());

/**
 Notify of an Authorized Channel. 

 - parameter band: 
 - parameter channel: The authorized channel.
 - parameter in_or_out: Bit 0 is 1 if channel is authorized outside (0 otherwise) ; Bit 1 is 1 if channel is authorized inside (0 otherwise)
*/
- (void)onWifiAuthChannelListChanged:(ArsdkFeaturePowerupNetworkstateWifiauthchannellistchangedBand)band channel:(NSUInteger)channel inOrOut:(NSUInteger)inOrOut
NS_SWIFT_NAME(onWifiAuthChannelListChanged(band:channel:inOrOut:));

/**
 Notify the end of the list of Authorized wifi Channel. 

*/
- (void)onAllWifiAuthChannelChanged
NS_SWIFT_NAME(onAllWifiAuthChannelChanged());

/**
 Notification sent by the firmware to give an indication of the WiFi link quality. 

 - parameter quality: The WiFi link quality in range 0-6, the higher the value, the higher the link quality.
*/
- (void)onLinkQualityChanged:(NSUInteger)quality
NS_SWIFT_NAME(onLinkQualityChanged(quality:));


@end

@interface ArsdkFeaturePowerupNetworkstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeaturePowerupNetworkstateCallback>)callback;

@end

