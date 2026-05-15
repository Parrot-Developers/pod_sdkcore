/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlDebugUid;

struct arsdk_cmd;

/** Setting type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlDebugSettingType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlDebugSettingTypeSdkCoreUnknown = -1,

    /** Boolean Setting. (ex: 0, 1) */
    ArsdkFeatureSkyctrlDebugSettingTypeBool = 0,

    /** Decimal Setting. (ex: -3.5, 0, 2, 3.6, 6.5) */
    ArsdkFeatureSkyctrlDebugSettingTypeDecimal = 1,

    /** Single line text Setting. */
    ArsdkFeatureSkyctrlDebugSettingTypeText = 2,

};
#define ArsdkFeatureSkyctrlDebugSettingTypeCnt 3

/** Setting mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlDebugSettingMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlDebugSettingModeSdkCoreUnknown = -1,

    /** Controller can only read setting. */
    ArsdkFeatureSkyctrlDebugSettingModeReadOnly = 0,

    /** Controller can read and write setting. */
    ArsdkFeatureSkyctrlDebugSettingModeReadWrite = 1,

};
#define ArsdkFeatureSkyctrlDebugSettingModeCnt 2

@protocol ArsdkFeatureSkyctrlDebugCallback<NSObject>

@optional

/**
 Sent by the SkyController as answer to get_settings_info
Describe a debug setting and give the current value. 

 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
 - parameter id: Setting Id.
 - parameter label: Setting displayed label (single line).
 - parameter type: Setting type.
 - parameter mode: Setting mode.
 - parameter range_min: Setting range minimal value for decimal type.
 - parameter range_max: Setting range max value for decimal type.
 - parameter range_step: Setting step value for decimal type
 - parameter value: Current Setting value (string encoded).
*/
- (void)onSettingsInfo:(NSUInteger)listFlagsBitField id:(NSUInteger)id label:(nonnull NSString *)label type:(ArsdkFeatureSkyctrlDebugSettingType)type mode:(ArsdkFeatureSkyctrlDebugSettingMode)mode rangeMin:(nonnull NSString *)rangeMin rangeMax:(nonnull NSString *)rangeMax rangeStep:(nonnull NSString *)rangeStep value:(nonnull NSString *)value
NS_SWIFT_NAME(onSettingsInfo(listFlagsBitField:id:label:type:mode:rangeMin:rangeMax:rangeStep:value:));

/**
 Setting value changed.
Cmd sent by SkyController when setting changed occurred. 

 - parameter id: Setting Id.
 - parameter value: New setting value (string encoded).
*/
- (void)onSettingsList:(NSUInteger)id value:(nonnull NSString *)value
NS_SWIFT_NAME(onSettingsList(id:value:));


@end

@interface ArsdkFeatureSkyctrlDebug : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureSkyctrlDebugCallback>)callback;

/**
 Cmd sent by controller to get all settings info (generate "settings_info" events). 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))getAllSettingsEncoder
NS_SWIFT_NAME(getAllSettingsEncoder());

/**
 Change setting value.
Cmd sent by controller to change a writable setting. 

 - parameter id: Setting Id.
 - parameter value: New setting value (string encoded).
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setSettingEncoder:(NSUInteger)id value:(nonnull NSString *)value
NS_SWIFT_NAME(setSettingEncoder(id:value:));

@end

