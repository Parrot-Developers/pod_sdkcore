/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3NetworksettingsstateUid;

struct arsdk_cmd;

/** The type of wifi selection settings */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedTypeSdkCoreUnknown = -1,

    /** Auto selection */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedTypeAutoAll = 0,

    /** Auto selection 2.4ghz */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedTypeAuto2_4ghz = 1,

    /** Auto selection 5 ghz */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedTypeAuto5ghz = 2,

    /** Manual selection */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedTypeManual = 3,

};
#define ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedTypeCnt 4

/** The actual wifi band state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedBandAll = 2,

};
#define ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedBandCnt 3

/** The type of wifi security (open, wpa2) */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsstateWifisecuritychangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecuritychangedTypeSdkCoreUnknown = -1,

    /** Wifi is not protected by any security (default) */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecuritychangedTypeOpen = 0,

    /** Wifi is protected by wpa2 */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecuritychangedTypeWpa2 = 1,

};
#define ArsdkFeatureArdrone3NetworksettingsstateWifisecuritychangedTypeCnt 2

/** The type of wifi security (open, wpa2) */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsstateWifisecurityType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecurityTypeSdkCoreUnknown = -1,

    /** Wifi is not protected by any security (default) */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecurityTypeOpen = 0,

    /** Wifi is protected by wpa2 */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecurityTypeWpa2 = 1,

};
#define ArsdkFeatureArdrone3NetworksettingsstateWifisecurityTypeCnt 2

/** Type of the key */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsstateWifisecurityKeytype) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecurityKeytypeSdkCoreUnknown = -1,

    /** Key is plain text, not encrypted */
    ArsdkFeatureArdrone3NetworksettingsstateWifisecurityKeytypePlain = 0,

};
#define ArsdkFeatureArdrone3NetworksettingsstateWifisecurityKeytypeCnt 1

@protocol ArsdkFeatureArdrone3NetworksettingsstateCallback<NSObject>

@optional

/**
 Wifi selection. 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel (depends of the band)
*/
- (void)onWifiSelectionChanged:(ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedType)type band:(ArsdkFeatureArdrone3NetworksettingsstateWifiselectionchangedBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(onWifiSelectionChanged(type:band:channel:));

/**
 Wifi security type. 

 - parameter type: 
*/
- (void)onWifiSecurityChanged:(ArsdkFeatureArdrone3NetworksettingsstateWifisecuritychangedType)type
NS_SWIFT_NAME(onWifiSecurityChanged(type:));

/**
 Wifi security type. 

 - parameter type: 
 - parameter key: The key used to secure the network (empty if type is open)
 - parameter keyType: 
*/
- (void)onWifiSecurity:(ArsdkFeatureArdrone3NetworksettingsstateWifisecurityType)type key:(NSString*)key keytype:(ArsdkFeatureArdrone3NetworksettingsstateWifisecurityKeytype)keytype
NS_SWIFT_NAME(onWifiSecurity(type:key:keytype:));


@end

@interface ArsdkFeatureArdrone3Networksettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3NetworksettingsstateCallback>)callback;

@end

