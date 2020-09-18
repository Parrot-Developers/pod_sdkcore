/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureThermalUid;

struct arsdk_cmd;

/** Thermal state */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalModeSdkCoreUnknown = -1,

    /** Thermal is disabled */
    ArsdkFeatureThermalModeDisabled = 0,

    /** Standard thermal mode, streaming blended on controller side */
    ArsdkFeatureThermalModeStandard = 1,

    /** Blended thermal mode, streaming blended on drone side */
    ArsdkFeatureThermalModeBlended = 2,

};
#define ArsdkFeatureThermalModeCnt 3

@interface ArsdkFeatureThermalModeBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureThermalMode)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureThermalMode val))cb;

@end

/** Rendering mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalRenderingMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalRenderingModeSdkCoreUnknown = -1,

    /** Visible image only */
    ArsdkFeatureThermalRenderingModeVisible = 0,

    /** Thermal image only */
    ArsdkFeatureThermalRenderingModeThermal = 1,

    /** Blending between visible and thermal images */
    ArsdkFeatureThermalRenderingModeBlended = 2,

    /** Visible image in black and white */
    ArsdkFeatureThermalRenderingModeMonochrome = 3,

};
#define ArsdkFeatureThermalRenderingModeCnt 4

/** Palette mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalPaletteMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalPaletteModeSdkCoreUnknown = -1,

    /** Absolute palette range */
    ArsdkFeatureThermalPaletteModeAbsolute = 0,

    /** Relative palette range */
    ArsdkFeatureThermalPaletteModeRelative = 1,

    /** Palette above or under relative threshold */
    ArsdkFeatureThermalPaletteModeSpot = 2,

};
#define ArsdkFeatureThermalPaletteModeCnt 3

/** Colorization mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalColorizationMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalColorizationModeSdkCoreUnknown = -1,

    /** Use black if temperature is outside of palette bounds */
    ArsdkFeatureThermalColorizationModeLimited = 0,

    /** Use boundary color if temperature is outside of palette bounds */
    ArsdkFeatureThermalColorizationModeExtended = 1,

};
#define ArsdkFeatureThermalColorizationModeCnt 2

/** Relative range mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalRelativeRangeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalRelativeRangeModeSdkCoreUnknown = -1,

    /** Relative range is locked */
    ArsdkFeatureThermalRelativeRangeModeLocked = 0,

    /** Relative range is unlocked */
    ArsdkFeatureThermalRelativeRangeModeUnlocked = 1,

};
#define ArsdkFeatureThermalRelativeRangeModeCnt 2

/** Spot type */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalSpotType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalSpotTypeSdkCoreUnknown = -1,

    /** Colorize only if temperature is below threshold */
    ArsdkFeatureThermalSpotTypeCold = 0,

    /** Colorize only if temperature is above threshold */
    ArsdkFeatureThermalSpotTypeHot = 1,

};
#define ArsdkFeatureThermalSpotTypeCnt 2

/** Thermal range */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalRange) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalRangeSdkCoreUnknown = -1,

    /** High range (from -10 to 400°C) */
    ArsdkFeatureThermalRangeHigh = 0,

    /** Low range (from -10 to 140°C) */
    ArsdkFeatureThermalRangeLow = 1,

};
#define ArsdkFeatureThermalRangeCnt 2

/** Thermal shutter trigger mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureThermalShutterTrigger) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureThermalShutterTriggerSdkCoreUnknown = -1,

    /** Automatic trigger */
    ArsdkFeatureThermalShutterTriggerAuto = 0,

    /** Manual trigger */
    ArsdkFeatureThermalShutterTriggerManual = 1,

};
#define ArsdkFeatureThermalShutterTriggerCnt 2

@protocol ArsdkFeatureThermalCallback<NSObject>

@optional

/**
 Thermal mode. 

 - parameter mode: Current thermal mode.
*/
- (void)onMode:(ArsdkFeatureThermalMode)mode
NS_SWIFT_NAME(onMode(mode:));

/**
  

 - parameter modes: Supported thermal modes.
*/
- (void)onCapabilities:(NSUInteger)modesBitField
NS_SWIFT_NAME(onCapabilities(modesBitField:));

/**
 Palette part. 

 - parameter red: Red value. Normalized between 0 and 1.
 - parameter green: Green value. Normalized between 0 and 1.
 - parameter blue: Blue value. Normalized between 0 and 1.
 - parameter index: Index where red, green and blue have been applied.
Normalized between 0 and 1.
 - parameter list_flags: List flags.
*/
- (void)onPalettePart:(float)red green:(float)green blue:(float)blue index:(float)index listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onPalettePart(red:green:blue:index:listFlagsBitField:));

/**
 Used palette settings. 

 - parameter mode: Used palette mode.
 - parameter lowest_temp: Used lowest temperature in the palette; in Kelvin.
 - parameter highest_temp: Used highest temperature in the palette; in Kelvin.
 - parameter outside_colorization: Used colorization mode outside of the palette bounds in `absolute` mode.
 - parameter relative_range: Used relative range. Valid only in `relative` mode.
If set to `locked`, equivalent to `absolute` mode with lowest_temp, highest_temp
and `extended` outside_colorization.
 - parameter spot_type: Used spot type. Valid only in `spot` mode.
 - parameter spot_threshold: Used threshold palette index of the spot. Normalized between 0 and 1. Valid only in `spot` mode.
*/
- (void)onPaletteSettings:(ArsdkFeatureThermalPaletteMode)mode lowestTemp:(float)lowestTemp highestTemp:(float)highestTemp outsideColorization:(ArsdkFeatureThermalColorizationMode)outsideColorization relativeRange:(ArsdkFeatureThermalRelativeRangeMode)relativeRange spotType:(ArsdkFeatureThermalSpotType)spotType spotThreshold:(float)spotThreshold
NS_SWIFT_NAME(onPaletteSettings(mode:lowestTemp:highestTemp:outsideColorization:relativeRange:spotType:spotThreshold:));

/**
 Rendering parameters for blending. 

 - parameter mode: Rendering mode.
 - parameter blending_rate: Blending rate, normalized between 0 (visible image and thermal chrominance) and 1 (thermal with edges).
Valid only if mode is `blended`.
*/
- (void)onRendering:(ArsdkFeatureThermalRenderingMode)mode blendingRate:(float)blendingRate
NS_SWIFT_NAME(onRendering(mode:blendingRate:));

/**
 Emissivity value. 

 - parameter emissivity: Emissivity. Normalized between 0 and 1.
*/
- (void)onEmissivity:(float)emissivity
NS_SWIFT_NAME(onEmissivity(emissivity:));

/**
 background temperature value. 

 - parameter background_temperature: background temperature in Kelvin.
*/
- (void)onBackgroundTemperature:(float)backgroundTemperature
NS_SWIFT_NAME(onBackgroundTemperature(backgroundTemperature:));

/**
 Thermal cam sensitivity range. 

 - parameter current_range: Current range of the thermal sensor
*/
- (void)onSensitivity:(ArsdkFeatureThermalRange)currentRange
NS_SWIFT_NAME(onSensitivity(currentRange:));

/**
 Thermal cam shutter trigger mode. 

 - parameter current_trigger: Current shutter trigger mode of the thermal sensor
*/
- (void)onShutterMode:(ArsdkFeatureThermalShutterTrigger)currentTrigger
NS_SWIFT_NAME(onShutterMode(currentTrigger:));


@end

@interface ArsdkFeatureThermal : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureThermalCallback>)callback;

/**
 Set thermal mode.
Changing thermal mode may activate or deactivate some cameras on some drones. 

 - parameter mode: Requested thermal mode.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setModeEncoder:(ArsdkFeatureThermalMode)mode
NS_SWIFT_NAME(setModeEncoder(mode:));

/**
 Set palette value for a given index. 

 - parameter red: Requested red value. Normalized between 0 and 1.
 - parameter green: Requested green value. Normalized between 0 and 1.
 - parameter blue: Requested blue value. Normalized between 0 and 1.
 - parameter index: Index in the palette where given red, green and blue should be applied.
Normalized between 0 and 1.
 - parameter list_flags: List flags.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setPalettePartEncoder:(float)red green:(float)green blue:(float)blue index:(float)index listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(setPalettePartEncoder(red:green:blue:index:listFlagsBitField:));

/**
 Set palette settings. 

 - parameter mode: Requested palette mode.
 - parameter lowest_temp: Requested lowest temperature in the palette to use in `absolute` mode.
This value is also used when the palette is `relative` and the relative_range is set to `locked`.
Unit is Kelvin.
 - parameter highest_temp: Requested highest temperature in the palette to use in `absolute` mode.
This value is also used when the palette is `relative` and the relative_range is set to `locked`.
Unit is Kelvin.
 - parameter outside_colorization: Requested colorization mode outside of the palette bounds in `absolute` mode.
 - parameter relative_range: Requested relative range. Valid only in `relative` mode.
If set to `locked`, equivalent to `absolute` mode with given lowest_temp, given highest_temp
and `extended` outside_colorization.
 - parameter spot_type: Requested spot type. Valid only in `spot` mode.
 - parameter spot_threshold: Requested threshold palette index of the spot. Normalized between 0 and 1. Valid only in `spot` mode.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setPaletteSettingsEncoder:(ArsdkFeatureThermalPaletteMode)mode lowestTemp:(float)lowestTemp highestTemp:(float)highestTemp outsideColorization:(ArsdkFeatureThermalColorizationMode)outsideColorization relativeRange:(ArsdkFeatureThermalRelativeRangeMode)relativeRange spotType:(ArsdkFeatureThermalSpotType)spotType spotThreshold:(float)spotThreshold
NS_SWIFT_NAME(setPaletteSettingsEncoder(mode:lowestTemp:highestTemp:outsideColorization:relativeRange:spotType:spotThreshold:));

/**
 Set rendering parameters for blending. 

 - parameter mode: Requested rendering mode.
 - parameter blending_rate: Requested blending rate, normalized between 0 (visible image and thermal chrominance) and 1 (thermal with edges).
Ignored if mode is not `blended`.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setRenderingEncoder:(ArsdkFeatureThermalRenderingMode)mode blendingRate:(float)blendingRate
NS_SWIFT_NAME(setRenderingEncoder(mode:blendingRate:));

/**
 Set emissivity value. 

 - parameter emissivity: Requested emissivity. Normalized between 0 and 1.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setEmissivityEncoder:(float)emissivity
NS_SWIFT_NAME(setEmissivityEncoder(emissivity:));

/**
 Set background temperature value. 

 - parameter background_temperature: Requested background temperature in Kelvin.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setBackgroundTemperatureEncoder:(float)backgroundTemperature
NS_SWIFT_NAME(setBackgroundTemperatureEncoder(backgroundTemperature:));

/**
 Set the thermal camera sensitivity range. 

 - parameter range: Desired range of the thermal sensor
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setSensitivityEncoder:(ArsdkFeatureThermalRange)range
NS_SWIFT_NAME(setSensitivityEncoder(range:));

/**
 Set the thermal camera shutter mode. 

 - parameter trigger: Desired shutter trigger mode of the thermal sensor
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setShutterModeEncoder:(ArsdkFeatureThermalShutterTrigger)trigger
NS_SWIFT_NAME(setShutterModeEncoder(trigger:));

/**
 Trigg the thermal cam shutter. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))triggShutterEncoder
NS_SWIFT_NAME(triggShutterEncoder());

@end

