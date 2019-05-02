/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoNetworkUid;

struct arsdk_cmd;

/** The band(s) : 2.4 Ghz, 5 Ghz, or both */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoNetworkWifiscanBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoNetworkWifiscanBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureJpsumoNetworkWifiscanBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureJpsumoNetworkWifiscanBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeatureJpsumoNetworkWifiscanBandAll = 2,

};
#define ArsdkFeatureJpsumoNetworkWifiscanBandCnt 3

@interface ArsdkFeatureJpsumoNetwork : NSObject

/**
 Launches wifi network scan 

 - parameter band: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiScanEncoder:(ArsdkFeatureJpsumoNetworkWifiscanBand)band
NS_SWIFT_NAME(wifiScanEncoder(band:));

/**
 Controller inquire the list of authorized wifi channels. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiAuthChannelEncoder
NS_SWIFT_NAME(wifiAuthChannelEncoder());

@end

