/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlSettingsstateUid;

struct arsdk_cmd;

/** Variant of the product */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlSettingsstateProductvariantchangedVariant) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlSettingsstateProductvariantchangedVariantSdkCoreUnknown = -1,

    /** SkyController of the bebop generation.
(Bebop battery, original key layout, red/blue/yellow) */
    ArsdkFeatureSkyctrlSettingsstateProductvariantchangedVariantBebop = 0,

    /** SkyController of the bebop2 generation.
(Bebop2 battery, updated key layout, black) */
    ArsdkFeatureSkyctrlSettingsstateProductvariantchangedVariantBebop2 = 1,

};
#define ArsdkFeatureSkyctrlSettingsstateProductvariantchangedVariantCnt 2

@protocol ArsdkFeatureSkyctrlSettingsstateCallback<NSObject>

@optional

/**
 All settings have been sent by the controller. 

*/
- (void)onAllSettingsChanged
NS_SWIFT_NAME(onAllSettingsChanged());

/**
 This command is not implemented. 

*/
- (void)onResetChanged
NS_SWIFT_NAME(onResetChanged());

/**
 The product serial of the controller. 

 - parameter serialNumber: Serial number (hexadecimal value)
*/
- (void)onProductSerialChanged:(NSString *)serialnumber
NS_SWIFT_NAME(onProductSerialChanged(serialnumber:));

/**
 This event allow differentiation between original (red/blue/yellow) SkyControllers, and the Black Edition SkyControllers. 

 - parameter variant: 
*/
- (void)onProductVariantChanged:(ArsdkFeatureSkyctrlSettingsstateProductvariantchangedVariant)variant
NS_SWIFT_NAME(onProductVariantChanged(variant:));

/**
 Software and hardware versions of the controller. 

 - parameter software: Product software version
 - parameter hardware: Product hardware version
*/
- (void)onProductVersionChanged:(NSString *)software hardware:(NSString *)hardware
NS_SWIFT_NAME(onProductVersionChanged(software:hardware:));

/**
 The serial number (or any other UID) for the main CPU. 

 - parameter id: Product main cpu id
*/
- (void)onCPUID:(NSString *)id
NS_SWIFT_NAME(onCPUID(id:));


@end

@interface ArsdkFeatureSkyctrlSettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSkyctrlSettingsstateCallback>)callback;

@end

