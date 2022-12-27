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

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

/** Information upon a media supported by a stream. */
@interface SdkCoreMediaInfo: NSObject
/** Media identifier (unique within a same libpdraw instance) */
@property (nonatomic, assign, readonly) long mediaId;

- (nonnull instancetype)init NS_UNAVAILABLE;
@end


/* Fraction */
@interface SdkCoreFraction: NSObject
/* Numerator of the fraction */
@property (nonatomic, assign, readonly) int numerator;

/* Denominator of the fraction */
@property (nonatomic, assign, readonly) int denominator;

- (nonnull instancetype)init NS_UNAVAILABLE;
@end


/** Color primaries */
typedef NS_ENUM(NSInteger, SdkCoreColorPrimaries) {
    /** Unknown color primaries */
    SdkCoreColorPrimariesUnknown = 0,

    /** Rec. ITU-R BT.601-7 525-line color primaries */
    SdkCoreColorPrimariesBt601x525,

    /** Rec. ITU-R BT.601-7 625-line color primaries */
    SdkCoreColorPrimariesBt601x625,

    /** Rec. ITU-R BT.709-6 / IEC 61966-2-1 sRGB color primaries */
    SdkCoreColorPrimariesBt709,
    SdkCoreColorPrimariesSrgb = SdkCoreColorPrimariesBt709,

    /** Rec. ITU-R BT.2020-2 / Rec. ITU-R BT.2100-1 color primaries */
    SdkCoreColorPrimariesBt2020,
    SdkCoreColorPrimariesBt2100 = SdkCoreColorPrimariesBt2020,

    /** SMPTE RP 431-2 "DCI-P3" color primaries */
    SdkCoreColorPrimariesDciP3,

    /** SMPTE RP 432-1 "Display-P3" color primaries */
    SdkCoreColorPrimariesDisplayP3,
};

/** Transfer functions */
typedef NS_ENUM(NSInteger, SdkCoreTransferFunction) {
    /* Unknown transfer function */
    SdkCoreTransferFunctionUnknown = 0,

    /* Rec. ITU-R BT.601-7 525-line or 625-line transfer function */
    SdkCoreTransferFunctionBt601,

    /* Rec. ITU-R BT.709-6 transfer function */
    SdkCoreTransferFunctionBt709,

    /* Rec. ITU-R BT.2020-2 transfer function */
    SdkCoreTransferFunctionBt2020,

    /* SMPTE ST 2084 / Rec. ITU-R BT.2100-1 perceptual quantization
     * transfer function */
    SdkCoreTransferFunctionPq,

    /* Rec. ITU-R BT.2100-1 hybrid log-gamma transfer function */
    SdkCoreTransferFunctionHlg,

    /* IEC 61966-2-1 sRGB transfer function */
    SdkCoreTransferFunctionSrgb,
};

/* Matrix coefficients */
typedef NS_ENUM(NSInteger, SdkCoreMatrixCoefs) {
    /* Unknown matrix coefficients */
    SdkCoreMatrixCoefsUnknown = 0,

    /* Identity / IEC 61966-2-1 sRGB matrix coefficients */
    SdkCoreMatrixCoefsIdentity,
    SdkCoreMatrixCoefsSrgb = SdkCoreMatrixCoefsIdentity,

    /* Rec. ITU-R BT.601-7 525-line matrix coefficients */
    SdkCoreMatrixCoefsBt601x525,

    /* Rec. ITU-R BT.601-7 625-line matrix coefficients */
    SdkCoreMatrixCoefsBt601x625,

    /* Rec. ITU-R BT.709-6 matrix coefficients */
    SdkCoreMatrixCoefsBt709,

    /* Rec. ITU-R BT.2020 non-constant luminance system / Rec. ITU-R
     * BT.2100 matrix coefficients */
    SdkCoreMatrixCoefsBt2020NonCst,
    SdkCoreMatrixCoefsBt2100 = SdkCoreMatrixCoefsBt2020NonCst,

    /* Rec. ITU-R BT.2020 constant luminance system */
    SdkCoreMatrixCoefsBt2020Cst,
};

/** Dynamic range */
typedef NS_ENUM(NSInteger, SdkCoreDynamicRange) {
    /** Unknown dynamic range */
    SdkCoreDynamicRangeUnknown = 0,

    /** Standard dynamic range */
    SdkCoreDynamicRangeSdr,

    /** High dynamic range: Parrot 8bit HDR */
    SdkCoreDynamicRangeHdr8,

    /** High dynamic range: standard 10bit HDR10
     * (Rec. ITU-R BT.2020 color primaries,
     * SMPTE ST 2084 perceptual quantization transfer function
     * and SMPTE ST 2086 metadata) */
    SdkCoreDynamicRangeHdr10,
};

/** Tone mapping */
typedef NS_ENUM(NSInteger, SdkCoreToneMapping) {
    /** Unknown tone mapping */
    SdkCoreToneMappingUnknown = 0,

    /** Standard tone mapping */
    SdkCoreToneMappingStandard,

    /** Parrot P-log tone mapping */
    SdkCoreToneMappingPLog,
};


/** Dimension */
@interface SdkCoreDimension: NSObject
/** Dimension width */
@property (nonatomic, assign, readonly) unsigned int width;

/** Dimension height */
@property (nonatomic, assign, readonly) unsigned int height;

@end


/** Point */
@interface SdkCorePoint: NSObject
/** x coordinate */
@property (nonatomic, assign, readonly) float x;

/** y coordinate */
@property (nonatomic, assign, readonly) float y;

- (nonnull instancetype)initX:(float)x y:(float)y;
@end

/** Mastering display color volume */
@interface SdkCoreMasteringDisplayColorVolume: NSObject
/** Color primaries */
@property (nonatomic, assign, readonly) SdkCoreColorPrimaries displayPrimaries;

/* Color primaries normalized chromacity coordinates;
 * indexes: 0 = green, 1 = blue, 2 = red */
@property (nonatomic, strong, readonly, nullable) NSArray<SdkCorePoint *> *colorPrimaries;

/* White point normalized chromaticity coordinates */
@property (nonatomic, strong, readonly, nullable) SdkCorePoint *whitePoint;

/** Luminance range maximum value (in cd/m2, 0 if unknown) */
@property (nonatomic, assign, readonly) float maxDisplayMasteringLuminance;

/** Luminance range minimum value (in cd/m2, 0 if unknown) */
@property (nonatomic, assign, readonly) float minDisplayMasteringLuminance;
@end

/** Content light level */
@interface SdkCoreContentLightLevel : NSObject
/** Maximum content light level (in cd/m2, 0 if unknown) */
@property (nonatomic, assign, readonly) unsigned int maxContentLightLevel;

/** Maximum frame average light level (in cd/m2, 0 if unknown) */
@property (nonatomic, assign, readonly) unsigned int maxFrameAverageLightLevel;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

/** Information upon a video media supported by a stream. */
@interface SdkCoreVideoInfo: SdkCoreMediaInfo

/** Video frame rate */
@property (nonatomic, strong, readonly, nonnull) SdkCoreFraction *framerate;

/** Bit depth */
@property (nonatomic, assign, readonly) unsigned int bitDepth;

/** Full color range */
@property (nonatomic, assign, readonly) BOOL fullRange;

/** Color primaries */
@property (nonatomic, assign, readonly) SdkCoreColorPrimaries colorPrimaries;

/** Transfer function */
@property (nonatomic, assign, readonly) SdkCoreTransferFunction transferFunction;

/** Matrix coefficients */
@property (nonatomic, assign, readonly) SdkCoreMatrixCoefs matrixCoefs;

/** Dynamic range */
@property (nonatomic, assign, readonly) SdkCoreDynamicRange dynamicRange;

/** Tone mapping */
@property (nonatomic, assign, readonly) SdkCoreToneMapping toneMapping;

/** Video frame resolution (in pixel units) */
@property (nonatomic, strong, readonly, nonnull) SdkCoreDimension *resolution;

/** Sample aspect ratio (no unit; full
 * aspect ratio is sar.width / sar.height) */
@property (nonatomic, strong, readonly, nonnull) SdkCoreDimension *sar;

/** Mastering display color volume */
@property (nonatomic, strong, readonly, nonnull) SdkCoreMasteringDisplayColorVolume *masteringDisplayColorVolume;

/** Content light level */
@property (nonatomic, strong, readonly, nullable) SdkCoreContentLightLevel *contentLightLevel;

- (nonnull instancetype)init NS_UNAVAILABLE;
@end

/* Raw pixel format */
typedef NS_ENUM(NSInteger, SdkCoreRawPixFormat) {
    /* Unknown or raw pixel format */
    SdkCoreRawPixFormatUnknown = 0,
    SdkCoreRawPixFormatRAW = SdkCoreRawPixFormatUnknown,

    /* YUV/YCbCr 4:2:0 pixel format */
    SdkCoreRawPixFormatYuv420,

    /* YUV/YCbCr 4:2:2 pixel format */
    SdkCoreRawPixFormatYuv422,

    /* YUV/YCbCr 4:4:4 pixel format */
    SdkCoreRawPixFormatYuv444,

    /* Gray pixel format */
    SdkCoreRawPixFormatGray,

    /* RGB pixel format */
    SdkCoreRawPixFormatRgb24,

    /* RGB + alpha pixel format */
    SdkCoreRawPixFormatRgba32,

    /* Bayer pixel format */
    SdkCoreRawPixFormatBayer,

    /* Depth map pixel format */
    SdkCoreRawPixFormatDepth,

    /* Depth map (float data) pixel format */
    SdkCoreRawPixFormatDepthFloat,
};


/* Raw pixel ordering */
typedef NS_ENUM(NSInteger, SdkCoreRawPixOrder) {
    /* Unknown pixel ordering */
    SdkCoreRawPixOrderUnknown = 0,

    /* A is first pixel */
    SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderABC = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderAB = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderA = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderRGB = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderRGBA = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderYUYV = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderYUV = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderRGGB = SdkCoreRawPixOrderABCD,
    SdkCoreRawPixOrderABDC,
    SdkCoreRawPixOrderACBD,
    SdkCoreRawPixOrderACB = SdkCoreRawPixOrderACBD,
    SdkCoreRawPixOrderYVYU = SdkCoreRawPixOrderACBD,
    SdkCoreRawPixOrderYVU = SdkCoreRawPixOrderACBD,
    SdkCoreRawPixOrderACDB,
    SdkCoreRawPixOrderADBC,
    SdkCoreRawPixOrderADCB,

    /* B is first pixel */
    SdkCoreRawPixOrderBACD,
    SdkCoreRawPixOrderBAC = SdkCoreRawPixOrderBACD,
    SdkCoreRawPixOrderBA = SdkCoreRawPixOrderBACD,
    SdkCoreRawPixOrderBADC,
    SdkCoreRawPixOrderGRBG = SdkCoreRawPixOrderBADC,
    SdkCoreRawPixOrderBCAD,
    SdkCoreRawPixOrderBCA = SdkCoreRawPixOrderBCAD,
    SdkCoreRawPixOrderBCDA,
    SdkCoreRawPixOrderBDAC,
    SdkCoreRawPixOrderBDCA,

    /* C is first pixel */
    SdkCoreRawPixOrderCABD,
    SdkCoreRawPixOrderCAB = SdkCoreRawPixOrderCABD,
    SdkCoreRawPixOrderCADB,
    SdkCoreRawPixOrderCBAD,
    SdkCoreRawPixOrderCBA = SdkCoreRawPixOrderCBAD,
    SdkCoreRawPixOrderBGR = SdkCoreRawPixOrderCBAD,
    SdkCoreRawPixOrderBGRA = SdkCoreRawPixOrderCBAD,
    SdkCoreRawPixOrderCBDA,
    SdkCoreRawPixOrderCDAB,
    SdkCoreRawPixOrderGBRG = SdkCoreRawPixOrderCDAB,
    SdkCoreRawPixOrderCDBA,

    /* D is first pixel */
    SdkCoreRawPixOrderDABC,
    SdkCoreRawPixOrderDACB,
    SdkCoreRawPixOrderDBAC,
    SdkCoreRawPixOrderDBCA,
    SdkCoreRawPixOrderDCAB,
    SdkCoreRawPixOrderDCBA,
    SdkCoreRawPixOrderABGR = SdkCoreRawPixOrderDCBA,
    SdkCoreRawPixOrderBGGR = SdkCoreRawPixOrderDCBA,
};


/* Raw pixel layout */
typedef NS_ENUM(NSInteger, SdkCoreRawPixLayout) {
    /* Unknown pixel layout */
    SdkCoreRawPixLayoutUnknown = 0,

    /* Linear pixel layout */
    SdkCoreRawPixLayoutLinear,

    /* HiSilicon tiled pixel layout (tiles of 64x16) */
    SdkCoreRawPixLayoutHiSiTile64x16,

    /* HiSilicon tiled pixel layout (tiles of 64x16) - compressed */
    SdkCoreRawPixLayoutHiSiTile64x16Compressed,
};


/* Raw data layout */
typedef NS_ENUM(NSInteger, SdkCoreRawDataLayout) {
    /* Unknown data layout */
    SdkCoreRawDataLayoutUnknown = 0,

    /* Packed data layout */
    SdkCoreRawDataLayoutPacked,
    SdkCoreRawDataLayoutRGB24 = SdkCoreRawDataLayoutPacked,
    SdkCoreRawDataLayoutRGBA32 = SdkCoreRawDataLayoutPacked,

    /* Planar data layout */
    SdkCoreRawDataLayoutPlanar,
    SdkCoreRawDataLayoutPlanarRGB = SdkCoreRawDataLayoutPlanar,
    SdkCoreRawDataLayoutPlanarRGBA = SdkCoreRawDataLayoutPlanar,
    SdkCoreRawDataLayoutPlanarYUV = SdkCoreRawDataLayoutPlanar,

    /* Semi-planar data layout */
    SdkCoreRawDataLayoutSemiPlanar,
    SdkCoreRawDataLayoutSemiPlanarYxUV = SdkCoreRawDataLayoutSemiPlanar,

    /* Interleaved data layout */
    SdkCoreRawDataLayoutInterleaved,
    SdkCoreRawDataLayoutYUYV = SdkCoreRawDataLayoutInterleaved,

    /* Opaque data layout */
    SdkCoreRawDataLayoutOpaque,
};


/** Information upon an Coded video media supported by a stream. */
@interface SdkCoreCodedInfo: SdkCoreVideoInfo
@end

/** Information upon a Raw video media supported by a stream. */
@interface SdkCoreRawInfo: SdkCoreVideoInfo
/** Pixel format */
@property (nonatomic, assign, readonly) SdkCoreRawPixFormat pixFormat;

/** Pixel order */
@property (nonatomic, assign, readonly) SdkCoreRawPixOrder pixOrder;

/** Pixel layout */
@property (nonatomic, assign, readonly) SdkCoreRawPixLayout pixLayout;

/** Pixel value size in bits (excluding padding) */
@property (nonatomic, assign, readonly) unsigned int pixSize;

/** Data layout */
@property (nonatomic, assign, readonly) SdkCoreRawDataLayout dataLayout;

/** Data padding: true is padding in lower bits,
 * false is padding in higher bits */
@property (nonatomic, assign, readonly) BOOL dataPadLow;

/** Data endianness: true is little-endian, false is big-endian */
@property (nonatomic, assign, readonly) BOOL dataLittleEndian;

/** Data size in bits including padding */
@property (nonatomic, assign, readonly) unsigned int dataSize;
@end
