/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3NetworksettingsUid;

struct arsdk_cmd;

/** The type of wifi selection (auto, manual) */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsWifiselectionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsWifiselectionTypeSdkCoreUnknown = -1,

    /** Auto selection */
    ArsdkFeatureArdrone3NetworksettingsWifiselectionTypeAuto = 0,

    /** Manual selection */
    ArsdkFeatureArdrone3NetworksettingsWifiselectionTypeManual = 1,

};
#define ArsdkFeatureArdrone3NetworksettingsWifiselectionTypeCnt 2

/** The allowed band(s) : 2.4 Ghz, 5 Ghz, or all */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsWifiselectionBand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsWifiselectionBandSdkCoreUnknown = -1,

    /** 2.4 GHz band */
    ArsdkFeatureArdrone3NetworksettingsWifiselectionBand2_4ghz = 0,

    /** 5 GHz band */
    ArsdkFeatureArdrone3NetworksettingsWifiselectionBand5ghz = 1,

    /** Both 2.4 and 5 GHz bands */
    ArsdkFeatureArdrone3NetworksettingsWifiselectionBandAll = 2,

};
#define ArsdkFeatureArdrone3NetworksettingsWifiselectionBandCnt 3

/** The type of wifi security (open, wpa2) */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsWifisecurityType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsWifisecurityTypeSdkCoreUnknown = -1,

    /** Wifi is not protected by any security (default) */
    ArsdkFeatureArdrone3NetworksettingsWifisecurityTypeOpen = 0,

    /** Wifi is protected by wpa2 */
    ArsdkFeatureArdrone3NetworksettingsWifisecurityTypeWpa2 = 1,

};
#define ArsdkFeatureArdrone3NetworksettingsWifisecurityTypeCnt 2

/** Type of the key */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3NetworksettingsWifisecurityKeytype) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3NetworksettingsWifisecurityKeytypeSdkCoreUnknown = -1,

    /** Key is plain text, not encrypted */
    ArsdkFeatureArdrone3NetworksettingsWifisecurityKeytypePlain = 0,

};
#define ArsdkFeatureArdrone3NetworksettingsWifisecurityKeytypeCnt 1

@interface ArsdkFeatureArdrone3Networksettings : NSObject

/**
 Select or auto-select channel of choosen band. 

 - parameter type: 
 - parameter band: 
 - parameter channel: The channel (not used in auto mode)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiSelectionEncoder:(ArsdkFeatureArdrone3NetworksettingsWifiselectionType)type band:(ArsdkFeatureArdrone3NetworksettingsWifiselectionBand)band channel:(NSUInteger)channel
NS_SWIFT_NAME(wifiSelectionEncoder(type:band:channel:));

/**
 Set wifi security type.
The security will be changed on the next restart 

 - parameter type: 
 - parameter key: The key to secure the network (empty if type is open)
 - parameter keyType: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))wifiSecurityEncoder:(ArsdkFeatureArdrone3NetworksettingsWifisecurityType)type key:(NSString*)key keytype:(ArsdkFeatureArdrone3NetworksettingsWifisecurityKeytype)keytype
NS_SWIFT_NAME(wifiSecurityEncoder(type:key:keytype:));

@end

