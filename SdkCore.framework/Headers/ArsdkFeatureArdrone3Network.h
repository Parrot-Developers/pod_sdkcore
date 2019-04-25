/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3NetworkUid;

struct arsdk_cmd;

/** The band(s) : 2.4 Ghz, 5 Ghz, or both */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworkWifiscanBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworkWifiscanBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureArdrone3NetworkWifiscanBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureArdrone3NetworkWifiscanBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeatureArdrone3NetworkWifiscanBandAll = 2,

};
#define ArsdkFeatureArdrone3NetworkWifiscanBandCnt 3

@interface ArsdkFeatureArdrone3Network : NSObject

/**
 Scan wifi network to get a list of all networks found by the drone 

 - parameter band: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiScanEncoder:(ArsdkFeatureArdrone3NetworkWifiscanBand)band
NS_SWIFT_NAME(wifiScanEncoder(band:));

/**
 Ask for available wifi channels.
The list of available Wifi channels is related to the country of the drone. You can get this country from the event [CountryChanged](#0-3-6). 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiAuthChannelEncoder
NS_SWIFT_NAME(wifiAuthChannelEncoder());

@end

