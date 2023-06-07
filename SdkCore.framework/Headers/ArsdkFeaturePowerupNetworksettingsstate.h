/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupNetworksettingsstateUid;

struct arsdk_cmd;

/** The type of wifi selection settings */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedTypeSdkCoreUnknown = -1,

    /** Auto selection */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedTypeAutoAll = 0,

    /** Auto selection 2.4ghz */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedTypeAuto2_4ghz = 1,

    /** Auto selection 5 ghz */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedTypeAuto5ghz = 2,

    /** Manual selection */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedTypeManual = 3,

};
#define ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedTypeCnt 4

/** The actual wifi band state */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedBandAll = 2,

};
#define ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedBandCnt 3

@protocol ArsdkFeaturePowerupNetworksettingsstateCallback<NSObject>

@optional

/**
 Wifi selection from product 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel (depends of the band)
*/
- (void)onWifiSelectionChanged:(ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedType)type band:(ArsdkFeaturePowerupNetworksettingsstateWifiselectionchangedBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(onWifiSelectionChanged(type:band:channel:));


@end

@interface ArsdkFeaturePowerupNetworksettingsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeaturePowerupNetworksettingsstateCallback>)callback;

@end

