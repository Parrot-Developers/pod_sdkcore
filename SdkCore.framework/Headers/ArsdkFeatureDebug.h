/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureDebugUid;

struct arsdk_cmd;

/** Setting type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureDebugSettingType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDebugSettingTypeSdkCoreUnknown = -1,

    /** Boolean Setting. (ex: 0, 1) */
    ArsdkFeatureDebugSettingTypeBool = 0,

    /** Decimal Setting. (ex: -3.5, 0, 2, 3.6, 6.5) */
    ArsdkFeatureDebugSettingTypeDecimal = 1,

    /** Single line text Setting. */
    ArsdkFeatureDebugSettingTypeText = 2,

};
#define ArsdkFeatureDebugSettingTypeCnt 3

/** Setting mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureDebugSettingMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDebugSettingModeSdkCoreUnknown = -1,

    /** Controller can only read setting. */
    ArsdkFeatureDebugSettingModeReadOnly = 0,

    /** Controller can read and write setting. */
    ArsdkFeatureDebugSettingModeReadWrite = 1,

};
#define ArsdkFeatureDebugSettingModeCnt 2

@protocol ArsdkFeatureDebugCallback<NSObject>

@optional

/**
 Sent by the drone as answer to get_settings_info
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
- (void)onSettingsInfo:(NSUInteger)listFlagsBitField id:(NSUInteger)id label:(NSString*)label type:(ArsdkFeatureDebugSettingType)type mode:(ArsdkFeatureDebugSettingMode)mode rangeMin:(NSString*)rangeMin rangeMax:(NSString*)rangeMax rangeStep:(NSString*)rangeStep value:(NSString*)value
NS_SWIFT_NAME(onSettingsInfo(listFlagsBitField:id:label:type:mode:rangeMin:rangeMax:rangeStep:value:));

/**
 Setting value changed.
Cmd sent by drone when setting changed occurred. 

 - parameter id: Setting Id.
 - parameter value: New setting value (string encoded).
*/
- (void)onSettingsList:(NSUInteger)id value:(NSString*)value
NS_SWIFT_NAME(onSettingsList(id:value:));


@end

@interface ArsdkFeatureDebug : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureDebugCallback>)callback;

/**
 Cmd sent by controller to get all settings info (generate "settings_info" events). 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))getAllSettingsEncoder
NS_SWIFT_NAME(getAllSettingsEncoder());

/**
 Change setting value.
Cmd sent by controller to change a writable setting. 

 - parameter id: Setting Id.
 - parameter value: New setting value (string encoded).
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setSettingEncoder:(NSUInteger)id value:(NSString*)value
NS_SWIFT_NAME(setSettingEncoder(id:value:));

@end

