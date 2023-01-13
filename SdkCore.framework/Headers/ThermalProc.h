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

#import "ThermalProcPaletteFactory.h"

/** Thermal camera model. */
typedef NS_ENUM(NSInteger, ThermalProcThermalCamera) {
    // Numerical values must be kept in sync with C code (tproc_thermal_camera)

    /** Lepton thermal camera. */
    ThermalProcThermalCameraLepton = 0,

    /** Boson thermal camera. */
    ThermalProcThermalCameraBoson = 1,
};

/** Thermal calibration State. */
typedef NS_ENUM(NSInteger, ThermalProcCalibrationState) {
    // Numerical values must be kept in sync with C code (tproc_calibration_state)

    /** Thermal calibration done. */
    ThermalProcCalibrationStateDone = 0,

    /** Thermal calibration requested. */
    ThermalProcCalibrationStateRequested = 1,

    /** Thermal calibration in progress. */
    ThermalProcCalibrationStateInProgress = 2,
};

/** Thermal Spot.*/
@interface ThermalProcSpot : NSObject
/** Spot position. */
@property (nonatomic, readonly) CGPoint position;
/** Temperature at the spot */
@property (nonatomic, readonly) float temperature;
@end

/** Thermal process tatus */
@interface ThermalProcStatus : NSObject

/** 'YES' if thermal data are available. */
@property (nonatomic, readonly) bool hasThermalData;

/**
 Thermal sensor calibration state.

 Not available if 'hasThermalData' equals 'NO'.
 */
@property (nonatomic, readonly) ThermalProcCalibrationState calibrationState;

/**
 Spot of the minimum temperature of the scene.

 Not available if 'hasThermalData' equals 'NO' or
 if 'calibrationState' equals 'ThermalCalibrationStateInProgress'.
 */
@property (nonatomic, readonly) ThermalProcSpot * _Nullable min;

/**
 Spot of the maximum temperature of the scene.

 Not available if 'hasThermalData' equals 'NO' or
 if 'calibrationState' equals 'ThermalCalibrationStateInProgress'.
 */
@property (nonatomic, readonly) ThermalProcSpot * _Nullable max;

/**
 Spot of the probe.

 Not available if 'hasThermalData' equals 'NO' or
 if 'calibrationState' equals 'ThermalCalibrationStateInProgress'.
 */
@property (nonatomic, readonly) ThermalProcSpot * _Nullable probe;
@end

/** Status callback */
typedef void(^ThermalProcStatusUpdate)(ThermalProcStatus * _Nonnull status);

/** Rendering Mode. */
typedef NS_ENUM(NSInteger, ThermalProcRenderingMode) {
    // Numerical values must be kept in sync with C code (tproc_rendering_mode)

    /** Visible image only. */
    ThermalProcRenderingModeVisible = 0,

    /** Thermal image only. */
    ThermalProcRenderingModeThermal = 1,

    /** Blending between visible and thermal images. */
    ThermalProcRenderingModeBlended = 2,

    /** Visible monochrome image only. */
    ThermalProcRenderingModeMonochrome = 3,
};

/** define a thermal processor */
@protocol ThermalProc
@required

/**
 Thermal probe position.
 Origin point [0;0] is at the render top left and the point [1;1] is at the at render bottom right.
 */
@property (atomic) CGPoint probePosition;

/** Thermal palette. */
@property (nonatomic, assign) id<ThermalProcPalette> _Nonnull palette;

/**
 The materials emissivity to use in percent from '0.0' to '1.0'.
 default value is '0.95' emissivity of matte materials.
 */
@property (atomic) double emissivity;

/**
 The background temperature to use to calculate temperatures, in kelvin.
 Must be greater than '0'; default value is '295.15'.
 */
@property (atomic) double backgroundTemp;

/** Rendering mode. */
@property (atomic) ThermalProcRenderingMode renderingMode;

/**
 Blending rate between visible and thermal images, from '0.0' to '1.0'.
 Only used if rendering mode equals TPROC_RENDERING_MODE_BLENDED.
 */
@property (atomic) double blendingRate;

@end
