/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupNetworksettingsUid;

struct arsdk_cmd;

/** The type of wifi selection (auto, manual) */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupNetworksettingsWifiselectionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupNetworksettingsWifiselectionTypeSdkCoreUnknown = -1,

    /** Auto selection */
    ArsdkFeaturePowerupNetworksettingsWifiselectionTypeAuto = 0,

    /** Manual selection */
    ArsdkFeaturePowerupNetworksettingsWifiselectionTypeManual = 1,

};
#define ArsdkFeaturePowerupNetworksettingsWifiselectionTypeCnt 2

/** The allowed band(s) : 2.4 Ghz, 5 Ghz, or all */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupNetworksettingsWifiselectionBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupNetworksettingsWifiselectionBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeaturePowerupNetworksettingsWifiselectionBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeaturePowerupNetworksettingsWifiselectionBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeaturePowerupNetworksettingsWifiselectionBandAll = 2,

};
#define ArsdkFeaturePowerupNetworksettingsWifiselectionBandCnt 3

@interface ArsdkFeaturePowerupNetworksettings : NSObject

/**
 Auto-select channel of choosen band 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel (not used in auto mode)
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))wifiSelectionEncoder:(ArsdkFeaturePowerupNetworksettingsWifiselectionType)type band:(ArsdkFeaturePowerupNetworksettingsWifiselectionBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(wifiSelectionEncoder(type:band:channel:));

@end

