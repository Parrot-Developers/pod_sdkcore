/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoNetworksettingsUid;

struct arsdk_cmd;

/** The type of wifi selection (auto, manual) */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoNetworksettingsWifiselectionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoNetworksettingsWifiselectionTypeSdkCoreUnknown = -1,

    /** Auto selection */
    ArsdkFeatureJpsumoNetworksettingsWifiselectionTypeAuto = 0,

    /** Manual selection */
    ArsdkFeatureJpsumoNetworksettingsWifiselectionTypeManual = 1,

};
#define ArsdkFeatureJpsumoNetworksettingsWifiselectionTypeCnt 2

/** The allowed band(s) : 2.4 Ghz, 5 Ghz, or all */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoNetworksettingsWifiselectionBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoNetworksettingsWifiselectionBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureJpsumoNetworksettingsWifiselectionBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureJpsumoNetworksettingsWifiselectionBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeatureJpsumoNetworksettingsWifiselectionBandAll = 2,

};
#define ArsdkFeatureJpsumoNetworksettingsWifiselectionBandCnt 3

@interface ArsdkFeatureJpsumoNetworksettings : NSObject

/**
 Auto-select channel of choosen band 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel (not used in auto mode)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiSelectionEncoder:(ArsdkFeatureJpsumoNetworksettingsWifiselectionType)type band:(ArsdkFeatureJpsumoNetworksettingsWifiselectionBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(wifiSelectionEncoder(type:band:channel:));

@end

