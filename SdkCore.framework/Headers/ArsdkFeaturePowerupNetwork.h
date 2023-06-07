/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupNetworkUid;

struct arsdk_cmd;

/** The band(s) : 2.4 Ghz, 5 Ghz, or both */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupNetworkWifiscanBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupNetworkWifiscanBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeaturePowerupNetworkWifiscanBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeaturePowerupNetworkWifiscanBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeaturePowerupNetworkWifiscanBandAll = 2,

};
#define ArsdkFeaturePowerupNetworkWifiscanBandCnt 3

@interface ArsdkFeaturePowerupNetwork : NSObject

/**
 Launches wifi network scan 

 - parameter band: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))wifiScanEncoder:(ArsdkFeaturePowerupNetworkWifiscanBand)band
NS_SWIFT_NAME(wifiScanEncoder(band:));

/**
 Controller inquire the list of authorized wifi channels. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))wifiAuthChannelEncoder
NS_SWIFT_NAME(wifiAuthChannelEncoder());

@end

