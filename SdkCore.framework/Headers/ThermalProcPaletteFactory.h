//    Copyright (C) 2018 Parrot Drones SAS
//
//    Redistribution and use in source and binary forms, with or without
//    modification, are permitted provided that the following conditions
//    are met:
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//    * Neither the name of the Parrot Company nor the names
//      of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written
//      permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//    PARROT COMPANY BE LIABLE FOR ANY DIRECT, INDIRECT,
//    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
//    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
//    AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
//    OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
//    SUCH DAMAGE.


/**
 Define a Thermal Color.

 Color composing a thermal palette.
 */
@interface ThermalProcColor : NSObject
/** Rate of red of the color. */
@property (nonatomic, readonly) float red;
/** Rate of green of the color. */
@property (nonatomic, readonly) float green;
/** Rate of blue of the color. */
@property (nonatomic, readonly) float blue;
/** Position of the color in the palette. */
@property (nonatomic, readonly) float position;

/**
 Create a thermal color.

 @param red: the rate of red of the color.
 @param green: the rate of green of the color.
 @param blue: the rate of blue of the color.
 @param position: the position of the color in the palette.
 */
- (instancetype _Nonnull)initWithRed:(float)red green:(float)green blue:(float)blue position:(float)position;
@end

/**
 Define a Thermal Palette.

 List of colors with their position associated.
 */
@protocol ThermalProcPalette <NSObject>

/**
 Palette Colors
 Array of `ThermalProcColor`.
 */
@property (nonatomic, readonly) NSArray * _Nonnull colors;

@end

/**
 Absolute Thermal Palette.

 Palette used between temperature range set.
 The palette can be limited or extended for out of range temperatures.
 */
@protocol ThermalProcAbsolutePalette <ThermalProcPalette>

/**
 Temperature associated to the lower boundary of the palette, in kelvin.
 */
@property (nonatomic) double lowestTemperature;

/**
 Temperature associated to the higher boundary of the palette, in kelvin.
 */
@property (nonatomic) double highestTemperature;

/**
 Yes If the palette is limited, temperatures out of range will be shown in black.
 No If the palette is no limited, it is extended with the colors of its boundaries.
 */
@property (nonatomic) BOOL isLimited;

@end


/** Called back each time palette boundaries are updated. */
typedef void(^ThermalProcPaletteBoundariesUpdate)(void);

/**
 Relative Palette.

 Palette fully used.
 The lowest color is associated to the coldest temperature of the scene and
 the highest color is associated to the hottest temperature of the scene.
 The temperature association can be locked.
 */
@protocol ThermalProcRelativePalette <ThermalProcPalette>

/**
 NO if the temperature association is unlock:
     The lowest color is associated to the coldest temperature of the scene and
     the highest color is associated to the hottest temperature of the scene.
 YES, if the temperature association is lock:
     The association between colors and temperatures is fixed and will not change according to the scene.
 */
@property (nonatomic) BOOL isLocked;

/**
 Temperature associated to the lower boundary of the palette, in kelvin.
 */
@property (readonly, nonatomic) double lowestTemperature;

/**
 Temperature associated to the higher boundary of the palette, in kelvin.
 */
@property (readonly, nonatomic) double highestTemperature;

@end


/**
 Temperature types to highlight.
 */
typedef NS_ENUM(NSInteger, ThermalProcTemperatureType) {
// Numerical values must be kept in sync with C code (tproc_temperature_type)
/** Used to show only temperatures hotter than the threshold. */
ThermalProcTemperatureTypeHot = 0,
/** Used to show only temperatures colder than the threshold. */
ThermalProcTemperatureTypeCold = 1,
};

/**
 Color application range.
 */
typedef NS_ENUM(NSInteger, ThermalProcColorRange) {
// Numerical values must be kept in sync with C code (tproc_color_range)
/** Palette colors is applied on the range of the temperatures of the scene. */
ThermalProcColorRangeScene = 0,
/** Palette colors is applied on the range of the displayed temperatures.  */
ThermalProcColorRangeVisible = 1,
};

/**
 Spot Palette.

 Palette to highlight cold spots or hot spots.

 The palette is fully used:
     The lowest color is associated to the coldest temperature of the scene and
     the highest color is associated to the hottest temperature of the scene.
 Only temperature hotter or colder than the threshold are shown.
 */
@protocol ThermalProcSpotPalette <ThermalProcPalette>

/**
 Temperature type to highlight.
 */
@property (nonatomic) ThermalProcTemperatureType temperatureType;

/**
 Threshold of highlighting from the palette, from 0 to 1.
 */
@property (nonatomic) double threshold;

/**
 Temperature associated to the lower boundary of the palette, in kelvin.
 */
@property (readonly, nonatomic) double lowestTemperature;

/**
 Temperature associated to the higher boundary of the palette, in kelvin.
 */
@property (readonly, nonatomic) double highestTemperature;

@end


/** Thermal Palette Factory. */
@interface ThermalProcPaletteFactory : NSObject

/**
 Creates a new ThermalAbsolutePalette.

 @param colors: colors of the palette; Array of `ThermalProcColor`.

 @return: a new ThermalAbsolutePalette
 */
+(id<ThermalProcAbsolutePalette> _Nonnull)createAbsolutePalette:(NSArray * _Nonnull)colors;

/**
 Creates a new ThermalRelativePalette.

 @param colors: colors of the palette; Array of `ThermalProcColor`.
 @param boundariesUpdateBlock: block called to notify the palette boundaries update.

 @return: a new ThermalRelativePalette
 */
+(id<ThermalProcRelativePalette> _Nonnull)createRelativePalette:(NSArray * _Nonnull)colors
                                      boundariesUpdateBlock:(ThermalProcPaletteBoundariesUpdate _Nullable)boundariesUpdateBlock;

/**
 Creates a new ThermalSpotPalette.

 @param colors: colors of the palette; Array of `ThermalProcColor`.
 @param boundariesUpdateBlock: block called to notify the palette boundaries update.

 @return: a new ThermalSpotPalette
 */
+(id<ThermalProcSpotPalette> _Nonnull)createSpotPalette:(NSArray * _Nonnull)colors
                              boundariesUpdateBlock:(ThermalProcPaletteBoundariesUpdate _Nullable)boundariesUpdateBlock;

@end
