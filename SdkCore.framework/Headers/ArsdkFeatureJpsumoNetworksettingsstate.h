/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoNetworksettingsstateUid;

struct arsdk_cmd;

/** The type of wifi selection settings */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedTypeSdkCoreUnknown = -1,

    /** Auto selection */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedTypeAutoAll = 0,

    /** Auto selection 2.4ghz */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedTypeAuto2_4ghz = 1,

    /** Auto selection 5 ghz */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedTypeAuto5ghz = 2,

    /** Manual selection */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedTypeManual = 3,

};
#define ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedTypeCnt 4

/** The actual wifi band state */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedBandAll = 2,

};
#define ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedBandCnt 3

@protocol ArsdkFeatureJpsumoNetworksettingsstateCallback<NSObject>

@optional

/**
 Wifi selection from product 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel (depends of the band)
*/
- (void)onWifiSelectionChanged:(ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedType)type band:(ArsdkFeatureJpsumoNetworksettingsstateWifiselectionchangedBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(onWifiSelectionChanged(type:band:channel:));


@end

@interface ArsdkFeatureJpsumoNetworksettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoNetworksettingsstateCallback>)callback;

@end

