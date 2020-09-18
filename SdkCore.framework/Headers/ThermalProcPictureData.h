//    Copyright (C) 2019 Parrot Drones SAS
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

#import "ThermalProc.h"

/** Thermal picture. */
@interface ThermalProcPictureData : NSObject

/** Visible picture decompressed data. */
@property (nonatomic, readonly) NSData *visibleData;

/** Width of visible picture, in pixels. */
@property (nonatomic, readonly) int visibleWidth;

/** Height of visible picture, in pixels. */
@property (nonatomic, readonly) int visibleHeight;

/** Thermal data. */
@property (nonatomic, readonly) NSData *thermalData;

/** Format revision major number. */
@property (nonatomic, readonly) int formatVersionMajor;

/** Format revision minor number. */
@property (nonatomic, readonly) int formatVersionMinor;

/** Calibration's R parameter. */
@property (nonatomic, readonly) double calibR;

/** Calibration's B parameter. */
@property (nonatomic, readonly) double calibB;

/** Calibration's F parameter. */
@property (nonatomic, readonly) double calibF;

/** Calibration's O parameter. */
@property (nonatomic, readonly) double calibO;

/** Transmission coefficient of the thermal window. */
@property (nonatomic, readonly) double tauWin;

/** Window reflection. */
@property (nonatomic, readonly) double rWin;

/** Sensor temperature reflected, in Kelvin. */
@property (nonatomic, readonly) double sensorTemp;

/** Sensor housing temperature, in Kelvin. */
@property (nonatomic, readonly) double sensorHTemp;

/** Thermal camera scaling factor. */
@property (nonatomic, readonly) double scalingFactor;

/** Focal length of the lens. */
@property (nonatomic, readonly) double focalLength;

/** Focal plane X resolution. */
@property (nonatomic, readonly) double focalXResolution;

/** Yaw orientation of the view in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double viewYaw;

/** Pitch orientation of the view in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double viewPitch;

/** Roll orientation of the view in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double viewRoll;

/** Yaw orientation of the visible camera in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double visibleCamYaw;

/** Pitch orientation of the visible camera in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double visibleCamPitch;

/** Roll orientation of the visible camera in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double visibleCamRoll;

/** Yaw orientation of the thermal camera in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double thermalCamYaw;

/** Pitch orientation of the thermal camera in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double thermalCamPitch;

/** Roll orientation of the thermal camera in NED (north, east, down coordinates). */
@property (nonatomic, readonly) double thermalCamRoll;

/** Thermal camera model. */
@property (nonatomic, readonly) enum ThermalProcThermalCamera cameraModel;

/**
 Initialize a thermal picture.

 - parameter visibleData: visible picture decompressed data.
 - parameter visibleWidth: width of visible picture, in pixels.
 - parameter visibleHeight: height of visible picture, in pixels.
 - parameter thermalData: thermal data.
 - parameter formatVersionMajor: format revision major number.
 - parameter formatVersionMinor: format revision minor number.
 - parameter calibR: calibration's R parameter.
 - parameter calibB: calibration's B parameter.
 - parameter calibF: calibration's F parameter.
 - parameter calibO: calibration's O parameter.
 - parameter tauWin: Transmission coefficient of the thermal window.
 - parameter rWin: Window reflection.
 - parameter sensorTemp: Sensor temperature reflected, in Kelvin.
 - parameter sensorHTemp: Sensor housing temperature, in Kelvin.
 - parameter scalingFactor: thermal camera scaling factor.
 - parameter focalLength: focal length of the lens.
 - parameter focalXResolution: focal plane X resolution.
 - parameter viewYaw: yaw orientation of the view in NED (north, east, down coordinates)
 - parameter viewPitch: pitch orientation of the view in NED
 - parameter viewRoll: roll orientation of the view in NED
 - parameter visibleCamYaw: yaw orientation of the visible camera in NED
 - parameter visibleCamPitch: pitch orientation of the visible camera in NED
 - parameter visibleCamRoll: roll orientation of the visible camera in NED
 - parameter thermalCamYaw: yaw orientation of the thermal camera in NED
 - parameter thermalCamPitch: pitch orientation of the thermal camera in NED
 - parameter thermalCamRoll: roll orientation of the thermal camera in NED
 - parameter cameraModel: thermal camera model
 */
- (instancetype)initWithVisibleData:(NSData *)visibleData
                       visibleWidth:(int)visibleWidth
                      visibleHeight:(int)visibleHeight
                        thermalData:(NSData *)thermalData
                 formatVersionMajor:(int)formatVersionMajor
                 formatVersionMinor:(int)formatVersionMinor
                             calibR:(double)calibR
                             calibB:(double)calibB
                             calibF:(double)calibF
                             calibO:(double)calibO
                             tauWin:(double)tauWin
                               rWin:(double)rWin
                         sensorTemp:(double)sensorTemp
                        sensorHTemp:(double)sensorHTemp
                      scalingFactor:(double)scalingFactor
                        focalLength:(double)focalLength
                   focalXResolution:(double)focalXResolution
                            viewYaw:(double)viewYaw
                          viewPitch:(double)viewPitch
                           viewRoll:(double)viewRoll
                      visibleCamYaw:(double)visibleCamYaw
                    visibleCamPitch:(double)visibleCamPitch
                     visibleCamRoll:(double)visibleCamRoll
                      thermalCamYaw:(double)thermalCamYaw
                    thermalCamPitch:(double)thermalCamPitch
                     thermalCamRoll:(double)thermalCamRoll
                        cameraModel:(ThermalProcThermalCamera)cameraModel;

/**
 Decompress a jpeg image.

 - parameter data: jpeg data.
 - parameter width: output width of decompressed image.
 - parameter height: output height of decompressed image.
 - returns: decompressed data on success, 'nil' otherwise.
 */
+ (NSData *) decompressJpegFrom:(NSData *)data
                          width:(int *)width
                         height:(int *)height;

@end
