/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCameraUid;

struct arsdk_cmd;

/** Camera model. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraModel) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraModelSdkCoreUnknown = -1,

    /** Main camera, for photo and/or video. */
    ArsdkFeatureCameraModelMain = 0,

    /** Thermal camera, for photo and/or video. */
    ArsdkFeatureCameraModelThermal = 1,

    /** Thermal-blended camera, Visible and Thermal stream are blended, for photo and/or video. */
    ArsdkFeatureCameraModelThermalBlended = 2,

};
#define ArsdkFeatureCameraModelCnt 3

/** Indicate if a feature is supported by the drone. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraSupported) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraSupportedSdkCoreUnknown = -1,

    /** Not Supported. */
    ArsdkFeatureCameraSupportedNotSupported = 0,

    /** Supported. */
    ArsdkFeatureCameraSupportedSupported = 1,

};
#define ArsdkFeatureCameraSupportedCnt 2

/** Indicate if a feature is available in current mode/configuration. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraAvailability) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraAvailabilitySdkCoreUnknown = -1,

    /** Not Available. */
    ArsdkFeatureCameraAvailabilityNotAvailable = 0,

    /** Available. */
    ArsdkFeatureCameraAvailabilityAvailable = 1,

};
#define ArsdkFeatureCameraAvailabilityCnt 2

/** Feature current state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraStateSdkCoreUnknown = -1,

    /** Feature is not currently active. */
    ArsdkFeatureCameraStateInactive = 0,

    /** Feature is currently active. */
    ArsdkFeatureCameraStateActive = 1,

};
#define ArsdkFeatureCameraStateCnt 2

/** Exposure mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraExposureMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraExposureModeSdkCoreUnknown = -1,

    /** Automatic shutter speed and iso, balanced. */
    ArsdkFeatureCameraExposureModeAutomatic = 0,

    /** Automatic shutter speed and iso, prefer increasing iso sensitivity over using low shutter speed.
This mode provides better results when the drone is moving dynamically. */
    ArsdkFeatureCameraExposureModeAutomaticPreferIsoSensitivity = 1,

    /** Automatic shutter speed and iso, prefer reducing shutter speed over using high iso sensitivity.
This mode provides better results when the drone is moving slowly. */
    ArsdkFeatureCameraExposureModeAutomaticPreferShutterSpeed = 2,

    /** Manual iso sensitivity, automatic shutter speed. */
    ArsdkFeatureCameraExposureModeManualIsoSensitivity = 3,

    /** Manual shutter speed, automatic iso. */
    ArsdkFeatureCameraExposureModeManualShutterSpeed = 4,

    /** Manual iso sensitivity and shutter speed. */
    ArsdkFeatureCameraExposureModeManual = 5,

};
#define ArsdkFeatureCameraExposureModeCnt 6

@interface ArsdkFeatureCameraExposureModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraExposureMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraExposureMode val))cb;

@end

/** The shutter speed in seconds. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraShutterSpeed) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraShutterSpeedSdkCoreUnknown = -1,

    /** 1/10000 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over10000 = 0,

    /** 1/8000 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over8000 = 1,

    /** 1/6400 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over6400 = 2,

    /** 1/5000 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over5000 = 3,

    /** 1/4000 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over4000 = 4,

    /** 1/3200 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over3200 = 5,

    /** 1/2500 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over2500 = 6,

    /** 1/2000 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over2000 = 7,

    /** 1/1600 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over1600 = 8,

    /** 1/1250 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over1250 = 9,

    /** 1/1000 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over1000 = 10,

    /** 1/800 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over800 = 11,

    /** 1/640 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over640 = 12,

    /** 1/500 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over500 = 13,

    /** 1/400 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over400 = 14,

    /** 1/320 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over320 = 15,

    /** 1/240 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over240 = 16,

    /** 1/200 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over200 = 17,

    /** 1/160 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over160 = 18,

    /** 1/120 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over120 = 19,

    /** 1/100 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over100 = 20,

    /** 1/80 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over80 = 21,

    /** 1/60 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over60 = 22,

    /** 1/50 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over50 = 23,

    /** 1/40 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over40 = 24,

    /** 1/30 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over30 = 25,

    /** 1/25 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over25 = 26,

    /** 1/15 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over15 = 27,

    /** 1/10 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over10 = 28,

    /** 1/8 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over8 = 29,

    /** 1/6 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over6 = 30,

    /** 1/4 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over4 = 31,

    /** 1/3 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over3 = 32,

    /** 1/2 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over2 = 33,

    /** 1/1.5 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1Over1_5 = 34,

    /** 1 sec. */
    ArsdkFeatureCameraShutterSpeedShutter1 = 35,

};
#define ArsdkFeatureCameraShutterSpeedCnt 36

@interface ArsdkFeatureCameraShutterSpeedBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraShutterSpeed)val inBitField:(uint64_t)bitfield;

+ (void)forAllSetIn:(uint64_t)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraShutterSpeed val))cb;

@end

/** ISO Sensitivity levels. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraIsoSensitivity) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraIsoSensitivitySdkCoreUnknown = -1,

    /** ISO 50. */
    ArsdkFeatureCameraIsoSensitivityIso50 = 0,

    /** ISO 64. */
    ArsdkFeatureCameraIsoSensitivityIso64 = 1,

    /** ISO 80. */
    ArsdkFeatureCameraIsoSensitivityIso80 = 2,

    /** ISO 100. */
    ArsdkFeatureCameraIsoSensitivityIso100 = 3,

    /** ISO 125. */
    ArsdkFeatureCameraIsoSensitivityIso125 = 4,

    /** ISO 160. */
    ArsdkFeatureCameraIsoSensitivityIso160 = 5,

    /** ISO 200. */
    ArsdkFeatureCameraIsoSensitivityIso200 = 6,

    /** ISO 250. */
    ArsdkFeatureCameraIsoSensitivityIso250 = 7,

    /** ISO 320. */
    ArsdkFeatureCameraIsoSensitivityIso320 = 8,

    /** ISO 400. */
    ArsdkFeatureCameraIsoSensitivityIso400 = 9,

    /** ISO 500. */
    ArsdkFeatureCameraIsoSensitivityIso500 = 10,

    /** ISO 640. */
    ArsdkFeatureCameraIsoSensitivityIso640 = 11,

    /** ISO 800. */
    ArsdkFeatureCameraIsoSensitivityIso800 = 12,

    /** ISO 1200. */
    ArsdkFeatureCameraIsoSensitivityIso1200 = 13,

    /** ISO 1600. */
    ArsdkFeatureCameraIsoSensitivityIso1600 = 14,

    /** ISO 2500. */
    ArsdkFeatureCameraIsoSensitivityIso2500 = 15,

    /** ISO 3200. */
    ArsdkFeatureCameraIsoSensitivityIso3200 = 16,

};
#define ArsdkFeatureCameraIsoSensitivityCnt 17

@interface ArsdkFeatureCameraIsoSensitivityBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraIsoSensitivity)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraIsoSensitivity val))cb;

@end

/** Exposure compensation. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraEvCompensation) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraEvCompensationSdkCoreUnknown = -1,

    /** -3.00 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus3_00 = 0,

    /** -2.67 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus2_67 = 1,

    /** -2.33 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus2_33 = 2,

    /** -2.00 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus2_00 = 3,

    /** -1.67 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus1_67 = 4,

    /** -1.33 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus1_33 = 5,

    /** -1.00 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus1_00 = 6,

    /** -0.67 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus0_67 = 7,

    /** -0.33 EV. */
    ArsdkFeatureCameraEvCompensationEvMinus0_33 = 8,

    /** 0.00 EV. */
    ArsdkFeatureCameraEvCompensationEv0_00 = 9,

    /** 0.33 EV. */
    ArsdkFeatureCameraEvCompensationEv0_33 = 10,

    /** 0.67 EV. */
    ArsdkFeatureCameraEvCompensationEv0_67 = 11,

    /** 1.00 EV. */
    ArsdkFeatureCameraEvCompensationEv1_00 = 12,

    /** 1.33 EV. */
    ArsdkFeatureCameraEvCompensationEv1_33 = 13,

    /** 1.67 EV. */
    ArsdkFeatureCameraEvCompensationEv1_67 = 14,

    /** 2.00 EV. */
    ArsdkFeatureCameraEvCompensationEv2_00 = 15,

    /** 2.33 EV. */
    ArsdkFeatureCameraEvCompensationEv2_33 = 16,

    /** 2.67 EV. */
    ArsdkFeatureCameraEvCompensationEv2_67 = 17,

    /** 3.00 EV. */
    ArsdkFeatureCameraEvCompensationEv3_00 = 18,

};
#define ArsdkFeatureCameraEvCompensationCnt 19

@interface ArsdkFeatureCameraEvCompensationBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraEvCompensation)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraEvCompensation val))cb;

@end

/** The white balance mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraWhiteBalanceMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraWhiteBalanceModeSdkCoreUnknown = -1,

    /** Automatic Estimation of White Balance scales. */
    ArsdkFeatureCameraWhiteBalanceModeAutomatic = 0,

    /** Candle preset. */
    ArsdkFeatureCameraWhiteBalanceModeCandle = 1,

    /** Sunset preset. */
    ArsdkFeatureCameraWhiteBalanceModeSunset = 2,

    /** Incandescent light preset. */
    ArsdkFeatureCameraWhiteBalanceModeIncandescent = 3,

    /** Warm white fluorescent light preset. */
    ArsdkFeatureCameraWhiteBalanceModeWarmWhiteFluorescent = 4,

    /** Halogen light preset. */
    ArsdkFeatureCameraWhiteBalanceModeHalogen = 5,

    /** Fluorescent light preset. */
    ArsdkFeatureCameraWhiteBalanceModeFluorescent = 6,

    /** Cool white fluorescent light preset. */
    ArsdkFeatureCameraWhiteBalanceModeCoolWhiteFluorescent = 7,

    /** Flash light preset. */
    ArsdkFeatureCameraWhiteBalanceModeFlash = 8,

    /** Daylight preset. */
    ArsdkFeatureCameraWhiteBalanceModeDaylight = 9,

    /** Sunny preset. */
    ArsdkFeatureCameraWhiteBalanceModeSunny = 10,

    /** Cloudy preset. */
    ArsdkFeatureCameraWhiteBalanceModeCloudy = 11,

    /** Snow preset. */
    ArsdkFeatureCameraWhiteBalanceModeSnow = 12,

    /** Hazy preset. */
    ArsdkFeatureCameraWhiteBalanceModeHazy = 13,

    /** Shaded preset. */
    ArsdkFeatureCameraWhiteBalanceModeShaded = 14,

    /** Green foliage preset. */
    ArsdkFeatureCameraWhiteBalanceModeGreenFoliage = 15,

    /** Blue sky preset. */
    ArsdkFeatureCameraWhiteBalanceModeBlueSky = 16,

    /** Custom white balance value. */
    ArsdkFeatureCameraWhiteBalanceModeCustom = 17,

};
#define ArsdkFeatureCameraWhiteBalanceModeCnt 18

@interface ArsdkFeatureCameraWhiteBalanceModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraWhiteBalanceMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraWhiteBalanceMode val))cb;

@end

/** The white balance temperature. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraWhiteBalanceTemperature) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraWhiteBalanceTemperatureSdkCoreUnknown = -1,

    /** 1500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT1500 = 0,

    /** 1750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT1750 = 1,

    /** 2000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT2000 = 2,

    /** 2250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT2250 = 3,

    /** 2500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT2500 = 4,

    /** 2750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT2750 = 5,

    /** 3000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT3000 = 6,

    /** 3250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT3250 = 7,

    /** 3500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT3500 = 8,

    /** 3750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT3750 = 9,

    /** 4000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT4000 = 10,

    /** 4250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT4250 = 11,

    /** 4500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT4500 = 12,

    /** 4750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT4750 = 13,

    /** 5000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT5000 = 14,

    /** 5250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT5250 = 15,

    /** 5500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT5500 = 16,

    /** 5750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT5750 = 17,

    /** 6000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT6000 = 18,

    /** 6250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT6250 = 19,

    /** 6500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT6500 = 20,

    /** 6750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT6750 = 21,

    /** 7000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT7000 = 22,

    /** 7250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT7250 = 23,

    /** 7500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT7500 = 24,

    /** 7750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT7750 = 25,

    /** 8000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT8000 = 26,

    /** 8250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT8250 = 27,

    /** 8500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT8500 = 28,

    /** 8750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT8750 = 29,

    /** 9000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT9000 = 30,

    /** 9250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT9250 = 31,

    /** 9500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT9500 = 32,

    /** 9750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT9750 = 33,

    /** 10000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT10000 = 34,

    /** 10250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT10250 = 35,

    /** 10500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT10500 = 36,

    /** 10750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT10750 = 37,

    /** 11000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT11000 = 38,

    /** 11250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT11250 = 39,

    /** 11500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT11500 = 40,

    /** 11750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT11750 = 41,

    /** 12000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT12000 = 42,

    /** 12250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT12250 = 43,

    /** 12500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT12500 = 44,

    /** 12750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT12750 = 45,

    /** 13000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT13000 = 46,

    /** 13250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT13250 = 47,

    /** 13500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT13500 = 48,

    /** 13750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT13750 = 49,

    /** 14000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT14000 = 50,

    /** 14250 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT14250 = 51,

    /** 14500 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT14500 = 52,

    /** 14750 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT14750 = 53,

    /** 15000 K. */
    ArsdkFeatureCameraWhiteBalanceTemperatureT15000 = 54,

};
#define ArsdkFeatureCameraWhiteBalanceTemperatureCnt 55

@interface ArsdkFeatureCameraWhiteBalanceTemperatureBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraWhiteBalanceTemperature)val inBitField:(uint64_t)bitfield;

+ (void)forAllSetIn:(uint64_t)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraWhiteBalanceTemperature val))cb;

@end

/** Images style. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraStyle) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraStyleSdkCoreUnknown = -1,

    /** Natural look style. */
    ArsdkFeatureCameraStyleStandard = 0,

    /** Parrot Log, produce flat and desaturated images, best for post-processing. */
    ArsdkFeatureCameraStylePlog = 1,

    /** Intense style: bright colors, warm shade, high contrast. */
    ArsdkFeatureCameraStyleIntense = 2,

    /** Pastel style: soft colors, cold shade, low contrast. */
    ArsdkFeatureCameraStylePastel = 3,

};
#define ArsdkFeatureCameraStyleCnt 4

@interface ArsdkFeatureCameraStyleBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraStyle)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraStyle val))cb;

@end

/** Camera mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraCameraMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraCameraModeSdkCoreUnknown = -1,

    /** Camera is in recording mode. */
    ArsdkFeatureCameraCameraModeRecording = 0,

    /** Camera is in photo mode. */
    ArsdkFeatureCameraCameraModePhoto = 1,

};
#define ArsdkFeatureCameraCameraModeCnt 2

@interface ArsdkFeatureCameraCameraModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraCameraMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraCameraMode val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraRecordingMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraRecordingModeSdkCoreUnknown = -1,

    /** Standard mode. */
    ArsdkFeatureCameraRecordingModeStandard = 0,

    /** Create an accelerated video by dropping some frame at a user specified rate define by
`hyperlapse_value`. */
    ArsdkFeatureCameraRecordingModeHyperlapse = 1,

    /** Record x2 or x4 slowed-down videos. */
    ArsdkFeatureCameraRecordingModeSlowMotion = 2,

    /** Record high-framerate videos (playback speed is x1). */
    ArsdkFeatureCameraRecordingModeHighFramerate = 3,

};
#define ArsdkFeatureCameraRecordingModeCnt 4

@interface ArsdkFeatureCameraRecordingModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraRecordingMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraRecordingMode val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraPhotoMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraPhotoModeSdkCoreUnknown = -1,

    /** Single shot mode. */
    ArsdkFeatureCameraPhotoModeSingle = 0,

    /** Bracketing mode. Takes a burst of 3 or 5 frames with a different exposure. */
    ArsdkFeatureCameraPhotoModeBracketing = 1,

    /** Burst mode. Takes burst of frames. */
    ArsdkFeatureCameraPhotoModeBurst = 2,

    /** Time-lapse mode. Takes frames at a regular time interval. */
    ArsdkFeatureCameraPhotoModeTimeLapse = 3,

    /** GPS-lapse mode. Takse frames at a regular GPS position interval. */
    ArsdkFeatureCameraPhotoModeGpsLapse = 4,

};
#define ArsdkFeatureCameraPhotoModeCnt 5

@interface ArsdkFeatureCameraPhotoModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraPhotoMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraPhotoMode val))cb;

@end

/** Video resolution. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraResolution) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraResolutionSdkCoreUnknown = -1,

    /** 4096x2160 pixels (4k cinema). */
    ArsdkFeatureCameraResolutionResDci4k = 0,

    /** 3840x2160 pixels (UHD). */
    ArsdkFeatureCameraResolutionResUhd4k = 1,

    /** 2704x1524 pixels. */
    ArsdkFeatureCameraResolutionRes2_7k = 2,

    /** 1920x1080 pixels (Full HD). */
    ArsdkFeatureCameraResolutionRes1080p = 3,

    /** 1280x720 pixels (HD). */
    ArsdkFeatureCameraResolutionRes720p = 4,

    /** 856x480 pixels. */
    ArsdkFeatureCameraResolutionRes480p = 5,

    /** 1440x1080 pixels (SD). */
    ArsdkFeatureCameraResolutionRes1080pSd = 6,

    /** 960x720 pixels (SD). */
    ArsdkFeatureCameraResolutionRes720pSd = 7,

    /** 7680x4320 pixels (UHD). */
    ArsdkFeatureCameraResolutionResUhd8k = 8,

    /** 5120x2880 pixels. */
    ArsdkFeatureCameraResolutionRes5k = 9,

};
#define ArsdkFeatureCameraResolutionCnt 10

@interface ArsdkFeatureCameraResolutionBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraResolution)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraResolution val))cb;

@end

/** Video recording frame rate */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraFramerate) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraFramerateSdkCoreUnknown = -1,

    /** 23.97 fps. */
    ArsdkFeatureCameraFramerateFps24 = 0,

    /** 25 fps. */
    ArsdkFeatureCameraFramerateFps25 = 1,

    /** 29.97 fps. */
    ArsdkFeatureCameraFramerateFps30 = 2,

    /** 47.952 fps. */
    ArsdkFeatureCameraFramerateFps48 = 3,

    /** 50 fps. */
    ArsdkFeatureCameraFramerateFps50 = 4,

    /** 59.94 fps. */
    ArsdkFeatureCameraFramerateFps60 = 5,

    /** 95.88 fps. */
    ArsdkFeatureCameraFramerateFps96 = 6,

    /** 100 fps. */
    ArsdkFeatureCameraFramerateFps100 = 7,

    /** 119.88 fps. */
    ArsdkFeatureCameraFramerateFps120 = 8,

    /** 9 fps. For thermal only, capture triggered by thermal sensor. */
    ArsdkFeatureCameraFramerateFps9 = 9,

    /** 15 fps. */
    ArsdkFeatureCameraFramerateFps15 = 10,

    /** 20 fps. */
    ArsdkFeatureCameraFramerateFps20 = 11,

    /** 191.81 fps. */
    ArsdkFeatureCameraFramerateFps192 = 12,

    /** 200 fps. */
    ArsdkFeatureCameraFramerateFps200 = 13,

    /** 239.76 fps. */
    ArsdkFeatureCameraFramerateFps240 = 14,

    /** 10 fps. For thermal only, capture triggered by thermal sensor. */
    ArsdkFeatureCameraFramerateFps10 = 15,

    /** 8.57 fps. For thermal only, capture triggered by thermal sensor. */
    ArsdkFeatureCameraFramerateFps8_6 = 16,

};
#define ArsdkFeatureCameraFramerateCnt 17

@interface ArsdkFeatureCameraFramerateBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraFramerate)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraFramerate val))cb;

@end

/** The photo format. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraPhotoFormat) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraPhotoFormatSdkCoreUnknown = -1,

    /** Sensor full resolution, not dewarped. */
    ArsdkFeatureCameraPhotoFormatFullFrame = 0,

    /** Rectilinear projection, dewarped. */
    ArsdkFeatureCameraPhotoFormatRectilinear = 1,

};
#define ArsdkFeatureCameraPhotoFormatCnt 2

@interface ArsdkFeatureCameraPhotoFormatBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraPhotoFormat)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraPhotoFormat val))cb;

@end

/** The photo format. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraPhotoFileFormat) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraPhotoFileFormatSdkCoreUnknown = -1,

    /** photo recorded in JPEG format. */
    ArsdkFeatureCameraPhotoFileFormatJpeg = 0,

    /** photo recorded in DNG format. */
    ArsdkFeatureCameraPhotoFileFormatDng = 1,

    /** photo recorded in both DNG and JPEG format. */
    ArsdkFeatureCameraPhotoFileFormatDngJpeg = 2,

};
#define ArsdkFeatureCameraPhotoFileFormatCnt 3

@interface ArsdkFeatureCameraPhotoFileFormatBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraPhotoFileFormat)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraPhotoFileFormat val))cb;

@end

/** Anti-flicker mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraAntiflickerMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraAntiflickerModeSdkCoreUnknown = -1,

    /** Anti-flicker off. */
    ArsdkFeatureCameraAntiflickerModeOff = 0,

    /** Auto detect. */
    ArsdkFeatureCameraAntiflickerModeAuto = 1,

    /** force the exposure time to be an integer multiple of 10ms. */
    ArsdkFeatureCameraAntiflickerModeMode50hz = 2,

    /** force the exposure time to be an integer multiple of 8.33ms. */
    ArsdkFeatureCameraAntiflickerModeMode60hz = 3,

};
#define ArsdkFeatureCameraAntiflickerModeCnt 4

@interface ArsdkFeatureCameraAntiflickerModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraAntiflickerMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraAntiflickerMode val))cb;

@end

/** Values for hyperlapse mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraHyperlapseValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraHyperlapseValueSdkCoreUnknown = -1,

    /** Record 1 of 15 frames. */
    ArsdkFeatureCameraHyperlapseValueRatio15 = 0,

    /** Record 1 of 30 frames. */
    ArsdkFeatureCameraHyperlapseValueRatio30 = 1,

    /** Record 1 of 60 frames. */
    ArsdkFeatureCameraHyperlapseValueRatio60 = 2,

    /** Record 1 of 120 frames. */
    ArsdkFeatureCameraHyperlapseValueRatio120 = 3,

    /** Record 1 of 240 frames. */
    ArsdkFeatureCameraHyperlapseValueRatio240 = 4,

};
#define ArsdkFeatureCameraHyperlapseValueCnt 5

@interface ArsdkFeatureCameraHyperlapseValueBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraHyperlapseValue)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraHyperlapseValue val))cb;

@end

/** Values for burst photo mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraBurstValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraBurstValueSdkCoreUnknown = -1,

    /** Record 14 picture over 4 second. */
    ArsdkFeatureCameraBurstValueBurst14Over4s = 0,

    /** Record 14 picture over 2 second. */
    ArsdkFeatureCameraBurstValueBurst14Over2s = 1,

    /** Record 14 picture over 1 second. */
    ArsdkFeatureCameraBurstValueBurst14Over1s = 2,

    /** Record 10 picture over 4 second. */
    ArsdkFeatureCameraBurstValueBurst10Over4s = 3,

    /** Record 10 picture over 2 second. */
    ArsdkFeatureCameraBurstValueBurst10Over2s = 4,

    /** Record 10 picture over 1 second. */
    ArsdkFeatureCameraBurstValueBurst10Over1s = 5,

    /** Record 4 picture over 4 second. */
    ArsdkFeatureCameraBurstValueBurst4Over4s = 6,

    /** Record 4 picture over 2 second. */
    ArsdkFeatureCameraBurstValueBurst4Over2s = 7,

    /** Record 4 picture over 1 second. */
    ArsdkFeatureCameraBurstValueBurst4Over1s = 8,

};
#define ArsdkFeatureCameraBurstValueCnt 9

@interface ArsdkFeatureCameraBurstValueBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraBurstValue)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraBurstValue val))cb;

@end

/** Bracketing mode preset. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraBracketingPreset) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraBracketingPresetSdkCoreUnknown = -1,

    /** 3 frames, with EV compensation of [-1 EV, 0 EV, +1 EV]. */
    ArsdkFeatureCameraBracketingPresetPreset1ev = 0,

    /** 3 frames, with EV compensation of [-2 EV, 0 EV, +2 EV]. */
    ArsdkFeatureCameraBracketingPresetPreset2ev = 1,

    /** 3 frames, with EV compensation of [-3 EV, 0 EV, +3 EV]. */
    ArsdkFeatureCameraBracketingPresetPreset3ev = 2,

    /** 5 frames, with EV compensation of [-2 EV, -1 EV, 0 EV, +1 EV, +2 EV]. */
    ArsdkFeatureCameraBracketingPresetPreset1ev2ev = 3,

    /** 5 frames, with EV compensation of [-3 EV, -1 EV, 0 EV, +1 EV, +3 EV]. */
    ArsdkFeatureCameraBracketingPresetPreset1ev3ev = 4,

    /** 5 frames, with EV compensation of [-3 EV, -2 EV, 0 EV, +2 EV, +3 EV]. */
    ArsdkFeatureCameraBracketingPresetPreset2ev3ev = 5,

    /** 7 frames, with EV compensation of [-3 EV, -2 EV, -1 EV, 0 EV, +1 EV, +2 EV, +3 EV]. */
    ArsdkFeatureCameraBracketingPresetPreset1ev2ev3ev = 6,

};
#define ArsdkFeatureCameraBracketingPresetCnt 7

@interface ArsdkFeatureCameraBracketingPresetBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraBracketingPreset)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraBracketingPreset val))cb;

@end

/** Video stream mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraStreamingMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraStreamingModeSdkCoreUnknown = -1,

    /** Minimize latency with average reliability (best for piloting). */
    ArsdkFeatureCameraStreamingModeLowLatency = 0,

    /** Maximize the reliability with an average latency (best when streaming quality is important but not
the latency). */
    ArsdkFeatureCameraStreamingModeHighReliability = 1,

    /** Maximize the reliability using a framerate decimation with an average latency (best when streaming
quality is important but not the latency). */
    ArsdkFeatureCameraStreamingModeHighReliabilityLowFramerate = 2,

};
#define ArsdkFeatureCameraStreamingModeCnt 3

@interface ArsdkFeatureCameraStreamingModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraStreamingMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraStreamingMode val))cb;

@end

/** Result for command `take_photo`. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraPhotoResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraPhotoResultSdkCoreUnknown = -1,

    /** Taking a new photo. */
    ArsdkFeatureCameraPhotoResultTakingPhoto = 0,

    /** A photo has been taken. */
    ArsdkFeatureCameraPhotoResultPhotoTaken = 1,

    /** A photo has been saved to the file system. */
    ArsdkFeatureCameraPhotoResultPhotoSaved = 2,

    /** Error taking photo: not enough space in storage. */
    ArsdkFeatureCameraPhotoResultErrorNoStorageSpace = 3,

    /** Error taking photo: wrong state. */
    ArsdkFeatureCameraPhotoResultErrorBadState = 4,

    /** Error taking photo: generic error. */
    ArsdkFeatureCameraPhotoResultError = 5,

};
#define ArsdkFeatureCameraPhotoResultCnt 6

/** Start/Stop recording result. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraRecordingResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraRecordingResultSdkCoreUnknown = -1,

    /** Recording started. */
    ArsdkFeatureCameraRecordingResultStarted = 0,

    /** Recording stopped. */
    ArsdkFeatureCameraRecordingResultStopped = 1,

    /** Recording stopped because storage is full. */
    ArsdkFeatureCameraRecordingResultStoppedNoStorageSpace = 2,

    /** Recording stopped because storage write speed is too slow. */
    ArsdkFeatureCameraRecordingResultStoppedStorageTooSlow = 3,

    /** Error starting recording: wrong state. */
    ArsdkFeatureCameraRecordingResultErrorBadState = 4,

    /** Error starting or during recording. */
    ArsdkFeatureCameraRecordingResultError = 5,

    /** Recording stopped because of internal reconfiguration. */
    ArsdkFeatureCameraRecordingResultStoppedReconfigured = 6,

};
#define ArsdkFeatureCameraRecordingResultCnt 7

/** Zoom control mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraZoomControlMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraZoomControlModeSdkCoreUnknown = -1,

    /** Zoom is set by giving a level. */
    ArsdkFeatureCameraZoomControlModeLevel = 0,

    /** Zoom is set by giving a velocity. */
    ArsdkFeatureCameraZoomControlModeVelocity = 1,

};
#define ArsdkFeatureCameraZoomControlModeCnt 2

/** Auto Exposure metering mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCameraAutoExposureMeteringMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCameraAutoExposureMeteringModeSdkCoreUnknown = -1,

    /** Default Auto Exposure metering mode. */
    ArsdkFeatureCameraAutoExposureMeteringModeStandard = 0,

    /** Auto Exposure metering mode which favours the center top of the matrix. */
    ArsdkFeatureCameraAutoExposureMeteringModeCenterTop = 1,

};
#define ArsdkFeatureCameraAutoExposureMeteringModeCnt 2

@interface ArsdkFeatureCameraAutoExposureMeteringModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureCameraAutoExposureMeteringMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureCameraAutoExposureMeteringMode val))cb;

@end

@protocol ArsdkFeatureCameraCallback<NSObject>

@optional

/**
 Describes camera supported capabilities. 

 - parameter cam_id: id of the camera.
Camera id is unique and persistent: the same camera model on a same drone model always has the same id.
Main/Built-in camera has id zero.
 - parameter model: Camera model.
 - parameter exposure_modes: Supported exposure modes.
 - parameter exposure_lock_supported: Exposure lock support.
 - parameter exposure_roi_lock_supported: Exposure lock on ROI support.
 - parameter ev_compensations: Supported ev compensation values. Empty if ev_compensation is not supported.
 - parameter white_balance_modes: Supported white balances modes.
 - parameter custom_white_balance_temperatures: Supported white balance temperature for "custom" white balance mode. Empty if "custom"
mode is not supported.
 - parameter white_balance_lock_supported: White balance lock support.
 - parameter styles: Supported image styles.
 - parameter camera_modes: Supported camera modes.
 - parameter hyperlapse_values: Supported values for hyperlapse recording mode. Empty of hyperlapse recording mode is not supported.
 - parameter bracketing_presets: Supported values for bracketing photo mode. Empty of bracketing photo mode is not supported.
 - parameter burst_values: Supported values for burst photo mode. Empty of burst photo mode is not supported.
 - parameter streaming_modes: Supported streaming modes, Empty if streaming is not supported.
 - parameter timelapse_interval_min: Minimal time-lapse capture interval, in seconds.
 - parameter gpslapse_interval_min: Minimal GPS-lapse capture interval, in meters.
 - parameter auto_exposure_metering_modes: Supported auto exposure metering modes
*/
- (void)onCameraCapabilities:(NSUInteger)camId model:(ArsdkFeatureCameraModel)model exposureModesBitField:(NSUInteger)exposureModesBitField exposureLockSupported:(ArsdkFeatureCameraSupported)exposureLockSupported exposureRoiLockSupported:(ArsdkFeatureCameraSupported)exposureRoiLockSupported evCompensationsBitField:(uint64_t)evCompensationsBitField whiteBalanceModesBitField:(NSUInteger)whiteBalanceModesBitField customWhiteBalanceTemperaturesBitField:(uint64_t)customWhiteBalanceTemperaturesBitField whiteBalanceLockSupported:(ArsdkFeatureCameraSupported)whiteBalanceLockSupported stylesBitField:(NSUInteger)stylesBitField cameraModesBitField:(NSUInteger)cameraModesBitField hyperlapseValuesBitField:(NSUInteger)hyperlapseValuesBitField bracketingPresetsBitField:(NSUInteger)bracketingPresetsBitField burstValuesBitField:(NSUInteger)burstValuesBitField streamingModesBitField:(NSUInteger)streamingModesBitField timelapseIntervalMin:(float)timelapseIntervalMin gpslapseIntervalMin:(float)gpslapseIntervalMin autoExposureMeteringModesBitField:(NSUInteger)autoExposureMeteringModesBitField
NS_SWIFT_NAME(onCameraCapabilities(camId:model:exposureModesBitField:exposureLockSupported:exposureRoiLockSupported:evCompensationsBitField:whiteBalanceModesBitField:customWhiteBalanceTemperaturesBitField:whiteBalanceLockSupported:stylesBitField:cameraModesBitField:hyperlapseValuesBitField:bracketingPresetsBitField:burstValuesBitField:streamingModesBitField:timelapseIntervalMin:gpslapseIntervalMin:autoExposureMeteringModesBitField:));

/**
 Describe recording capabilities. Each entry of this list gives valid resolutions/framerates pair for the listed modes and if HDR is supported in this configuration. The same mode can be in multiple entries. 

 - parameter id: Setting id. U8 msb is cam_id of the related camera.
 - parameter recording_modes: Recording modes this capability applies to.
 - parameter resolutions: Supported resolutions in specified modes and framerates.
 - parameter framerates: Supported framerates in specified modes and resolutions.
 - parameter hdr: Indicate if hdr is supported in this configuration.
 - parameter list_flags: List flags.
*/
- (void)onRecordingCapabilities:(NSUInteger)id recordingModesBitField:(NSUInteger)recordingModesBitField resolutionsBitField:(NSUInteger)resolutionsBitField frameratesBitField:(NSUInteger)frameratesBitField hdr:(ArsdkFeatureCameraSupported)hdr listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onRecordingCapabilities(id:recordingModesBitField:resolutionsBitField:frameratesBitField:hdr:listFlagsBitField:));

/**
 Describe photo capabilities. Each entry of this list gives a valid format/fileformat pair for the listed modes and if HDR is supported in this configuration. The same mode can be in multiple entries. 

 - parameter id: Setting id. U8 msb is cam_id of the related camera.
 - parameter photo_modes: Photo modes this capability applies to.
 - parameter photo_formats: Supported photo formats in specified modes and file formats (DNG file
will always be full-frame, regardless of this setting).
 - parameter photo_file_formats: Supported photo file formats in specified modes and formats.
 - parameter hdr: Indicate if hdr is supported in this configuration.
 - parameter list_flags: List flags.
*/
- (void)onPhotoCapabilities:(NSUInteger)id photoModesBitField:(NSUInteger)photoModesBitField photoFormatsBitField:(NSUInteger)photoFormatsBitField photoFileFormatsBitField:(NSUInteger)photoFileFormatsBitField hdr:(ArsdkFeatureCameraSupported)hdr listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onPhotoCapabilities(id:photoModesBitField:photoFormatsBitField:photoFileFormatsBitField:hdr:listFlagsBitField:));

/**
 Describe anti-flickering. Antiflickering is global for all cameras 

 - parameter supported_modes: Supported anti-flicker mode.
*/
- (void)onAntiflickerCapabilities:(NSUInteger)supportedModesBitField
NS_SWIFT_NAME(onAntiflickerCapabilities(supportedModesBitField:));

/**
 Notify current exposure settings. This can be different from the actually used exposure values notified by event [exposure](#143-10) if the mode is not `manual`. 

 - parameter cam_id: Id of the camera.
 - parameter mode: Exposure mode as set by command "set_exposure_mode".
 - parameter manual_shutter_speed: Shutter speed as set by command "set_manual_shutter_speed".
 - parameter manual_shutter_speed_capabilities: Supported shutter speeds for current photo or recording configuration.
Empty if "manual" or "manual_shutter_speed" exposure modes are not supported.
 - parameter manual_iso_sensitivity: ISO sensitivity level as set by command "set_manual_iso_sensitivity".
 - parameter manual_iso_sensitivity_capabilities: Supported manual iso sensitivity for current photo or recording configuration.
Empty if "manual" or "manual_iso_sensitivity" exposure modes are not supported.
 - parameter max_iso_sensitivity: Maximum ISO sensitivity level as set by command "set_max_iso_sensitivity".
 - parameter max_iso_sensitivities_capabilities: Supported max iso sensitivity for current photo or recording configuration.
Empty if setting max iso sensitivity is not supported.
 - parameter metering_mode: Auto Exposure metering mode.
*/
- (void)onExposureSettings:(NSUInteger)camId mode:(ArsdkFeatureCameraExposureMode)mode manualShutterSpeed:(ArsdkFeatureCameraShutterSpeed)manualShutterSpeed manualShutterSpeedCapabilitiesBitField:(uint64_t)manualShutterSpeedCapabilitiesBitField manualIsoSensitivity:(ArsdkFeatureCameraIsoSensitivity)manualIsoSensitivity manualIsoSensitivityCapabilitiesBitField:(uint64_t)manualIsoSensitivityCapabilitiesBitField maxIsoSensitivity:(ArsdkFeatureCameraIsoSensitivity)maxIsoSensitivity maxIsoSensitivitiesCapabilitiesBitField:(uint64_t)maxIsoSensitivitiesCapabilitiesBitField meteringMode:(ArsdkFeatureCameraAutoExposureMeteringMode)meteringMode
NS_SWIFT_NAME(onExposureSettings(camId:mode:manualShutterSpeed:manualShutterSpeedCapabilitiesBitField:manualIsoSensitivity:manualIsoSensitivityCapabilitiesBitField:maxIsoSensitivity:maxIsoSensitivitiesCapabilitiesBitField:meteringMode:));

/**
 Notify of actual exposure values (different from [exposure_settings](#143-9) values when one of the setting is in automatic mode). 

 - parameter cam_id: Id of the camera.
 - parameter shutter_speed: Effective shutter speed.
 - parameter iso_sensitivity: Effective ISO sensitivity level.
 - parameter lock: Auto exposure lock state.
 - parameter lock_roi_x: Auto exposure lock ROI center on x axis, between 0 and 1, relative to streaming image width, less than
0 if exposure is not locked with on a ROI.
 - parameter lock_roi_y: Auto exposure lock ROI center on y axis, between 0 and 1, relative to streaming image height, less than
if exposure is not locked with on a ROI.
 - parameter lock_roi_width: Auto exposure lock ROI width, between 0 and 1, relative to streaming image width, less than if exposure
is not locked with on a ROI.
 - parameter lock_roi_height: Auto exposure lock ROI height, between 0 and 1, relative to streaming image height less than if exposure
is not locked with on a ROI.
*/
- (void)onExposure:(NSUInteger)camId shutterSpeed:(ArsdkFeatureCameraShutterSpeed)shutterSpeed isoSensitivity:(ArsdkFeatureCameraIsoSensitivity)isoSensitivity lock:(ArsdkFeatureCameraState)lock lockRoiX:(float)lockRoiX lockRoiY:(float)lockRoiY lockRoiWidth:(float)lockRoiWidth lockRoiHeight:(float)lockRoiHeight
NS_SWIFT_NAME(onExposure(camId:shutterSpeed:isoSensitivity:lock:lockRoiX:lockRoiY:lockRoiWidth:lockRoiHeight:));

/**
 Notify of actual white balance mode 

 - parameter cam_id: Id of the camera.
 - parameter mode: Actual white balance mode.
 - parameter temperature: Actual white balance temperature if the mode `custom`, invalid else.
 - parameter lock: White balance lock state.
*/
- (void)onWhiteBalance:(NSUInteger)camId mode:(ArsdkFeatureCameraWhiteBalanceMode)mode temperature:(ArsdkFeatureCameraWhiteBalanceTemperature)temperature lock:(ArsdkFeatureCameraState)lock
NS_SWIFT_NAME(onWhiteBalance(camId:mode:temperature:lock:));

/**
 Notify of actual EV compensation 

 - parameter cam_id: Id of the camera.
 - parameter value: Actual EV compensation value.
*/
- (void)onEvCompensation:(NSUInteger)camId value:(ArsdkFeatureCameraEvCompensation)value
NS_SWIFT_NAME(onEvCompensation(camId:value:));

/**
 Notify of actual anti-flicker mode 

 - parameter mode: Anti-flicker mode as set by [set_antiflicker_mode](#143-16).
 - parameter value: Actual anti-flicker value selected by the drone.
When `mode` is `auto`, indicate the actual anti-flicker value selected by the drone. (50hz or 60hz)
In all other modes, this is the same that `mode`
*/
- (void)onAntiflickerMode:(ArsdkFeatureCameraAntiflickerMode)mode value:(ArsdkFeatureCameraAntiflickerMode)value
NS_SWIFT_NAME(onAntiflickerMode(mode:value:));

/**
 Notify current style and its saturation, contrast and sharpness values. 

 - parameter cam_id: Id of the camera.
 - parameter style: Active style.
 - parameter saturation: Actual saturation value for this style.
 - parameter saturation_min: Minimum supported value for style saturation.
 - parameter saturation_max: Maximum supported value for style saturation.
 - parameter contrast: Actual contrast value for this style.
 - parameter contrast_min: Minimum supported value for style contrast.
 - parameter contrast_max: Maximum supported value for style contrast.
 - parameter sharpness: Actual sharpness value for this style.
 - parameter sharpness_min: Minimum supported value for style sharpness.
 - parameter sharpness_max: Maximum supported value for style sharpness.
*/
- (void)onStyle:(NSUInteger)camId style:(ArsdkFeatureCameraStyle)style saturation:(NSInteger)saturation saturationMin:(NSInteger)saturationMin saturationMax:(NSInteger)saturationMax contrast:(NSInteger)contrast contrastMin:(NSInteger)contrastMin contrastMax:(NSInteger)contrastMax sharpness:(NSInteger)sharpness sharpnessMin:(NSInteger)sharpnessMin sharpnessMax:(NSInteger)sharpnessMax
NS_SWIFT_NAME(onStyle(camId:style:saturation:saturationMin:saturationMax:contrast:contrastMin:contrastMax:sharpness:sharpnessMin:sharpnessMax:));

/**
 Current camera zoom level. 

 - parameter cam_id: Id of the camera.
 - parameter level: Actual zoom level. Ignored if `available` is `not_available`.
*/
- (void)onZoomLevel:(NSUInteger)camId level:(float)level
NS_SWIFT_NAME(onZoomLevel(camId:level:));

/**
 Zoom information. This event is never sent if the device doesn't have a zoom. 

 - parameter cam_id: Id of the camera.
 - parameter available: Tells if zoom is available in the current configuration.
 - parameter high_quality_maximum_level: Maximum zoom level without degrading image quality. Ignored if `available` is `not_available`.
 - parameter maximum_level: Maximum zoom level with image quality degradation. Ignored if `available` is `not_available`.
Same value than `high_quality_maximum_level` if there is no digital zoom with quality degradation.
*/
- (void)onZoomInfo:(NSUInteger)camId available:(ArsdkFeatureCameraAvailability)available highQualityMaximumLevel:(float)highQualityMaximumLevel maximumLevel:(float)maximumLevel
NS_SWIFT_NAME(onZoomInfo(camId:available:highQualityMaximumLevel:maximumLevel:));

/**
 Max zoom speed setting. This setting contains the range and the current value. All values are expressed as the tangent of the angle in degrees per seconds. 

 - parameter cam_id: Id of the camera.
 - parameter min: Minimal bound of the max zoom speed range.
Expressed as a tan(deg) / sec.
 - parameter max: Maximal bound of the max zoom speed range
Expressed as a tan(deg) / sec.
 - parameter current: Current max zoom speed.
Expressed as a tan(deg) / sec.
*/
- (void)onMaxZoomSpeed:(NSUInteger)camId min:(float)min max:(float)max current:(float)current
NS_SWIFT_NAME(onMaxZoomSpeed(camId:min:max:current:));

/**
 Whether zoom change by indicating a velocity is allowed to go on a zoom level that degrades video quality. If not allowed, zoom level will stop at the level given by the `high_quality_maximum_level` of the [Zoom](143-20) event. 

 - parameter cam_id: Id of the camera.
 - parameter allowed: 1 if quality degradation is allowed, 0 otherwise.
*/
- (void)onZoomVelocityQualityDegradation:(NSUInteger)camId allowed:(NSUInteger)allowed
NS_SWIFT_NAME(onZoomVelocityQualityDegradation(camId:allowed:));

/**
 Notify of camera HDR setting. 

 - parameter cam_id: Id of the camera.
 - parameter value: Actual HDR setting value.
*/
- (void)onHdrSetting:(NSUInteger)camId value:(ArsdkFeatureCameraState)value
NS_SWIFT_NAME(onHdrSetting(camId:value:));

/**
 Tells if HDR is available and if it's currently active. 

 - parameter cam_id: Id of the camera.
 - parameter available: Tells if HDR is available in current configuration.
 - parameter state: Actual HDR state.
*/
- (void)onHdr:(NSUInteger)camId available:(ArsdkFeatureCameraAvailability)available state:(ArsdkFeatureCameraState)state
NS_SWIFT_NAME(onHdr(camId:available:state:));

/**
 Notify of camera mode 

 - parameter cam_id: Id of the camera.
 - parameter mode: Camera mode.
*/
- (void)onCameraMode:(NSUInteger)camId mode:(ArsdkFeatureCameraCameraMode)mode
NS_SWIFT_NAME(onCameraMode(camId:mode:));

/**
 Notify of camera recording mode 

 - parameter cam_id: Id of the camera.
 - parameter mode: Camera camera recording mode.
 - parameter resolution: Recording resolution.
 - parameter framerate: Recording framerate.
 - parameter hyperlapse: Hyperlapse value when the recording mode is hyperlapse. Invalid in other modes.
 - parameter bitrate: Recording bitrate for current configuration (bits/s). Zero if unavailable.
*/
- (void)onRecordingMode:(NSUInteger)camId mode:(ArsdkFeatureCameraRecordingMode)mode resolution:(ArsdkFeatureCameraResolution)resolution framerate:(ArsdkFeatureCameraFramerate)framerate hyperlapse:(ArsdkFeatureCameraHyperlapseValue)hyperlapse bitrate:(NSUInteger)bitrate
NS_SWIFT_NAME(onRecordingMode(camId:mode:resolution:framerate:hyperlapse:bitrate:));

/**
 Notify of camera photo mode 

 - parameter cam_id: Id of the camera.
 - parameter mode: Camera photo mode.
 - parameter format: Actual format.
 - parameter file_format: Actual photo file format.
 - parameter burst: Actual burst value when the photo mode is burst. Invalid in other modes.
 - parameter bracketing: Actual bracketing value when the photo mode is bracketing. Invalid in other modes.
 - parameter capture_interval: Actual time-lapse interval value (in seconds) when the photo mode is time_lapse.
Actual GPS-lapse interval value (in meters) when the photo mode is gps_lapse.
Ignored in other modes.
*/
- (void)onPhotoMode:(NSUInteger)camId mode:(ArsdkFeatureCameraPhotoMode)mode format:(ArsdkFeatureCameraPhotoFormat)format fileFormat:(ArsdkFeatureCameraPhotoFileFormat)fileFormat burst:(ArsdkFeatureCameraBurstValue)burst bracketing:(ArsdkFeatureCameraBracketingPreset)bracketing captureInterval:(float)captureInterval
NS_SWIFT_NAME(onPhotoMode(camId:mode:format:fileFormat:burst:bracketing:captureInterval:));

/**
 Notify of actual streaming mode setting. 

 - parameter cam_id: Id of the camera.
 - parameter value: Actual streaming mode setting.
*/
- (void)onStreamingMode:(NSUInteger)camId value:(ArsdkFeatureCameraStreamingMode)value
NS_SWIFT_NAME(onStreamingMode(camId:value:));

/**
 Sent as progress and result of [take_photo](#143-39) command. This event is not sent during the connection. 

 - parameter cam_id: Id of the camera.
 - parameter result: Progress or result value:
- `taking_photo` indicate that the camera starts taking photo (or multiple photos when mode is `burst`
or `bracketing`).
- `photo_taken` indicate that one photo has been taken and is about be saved to disk. In `bracketing`
mode, this event is
sent when the last photo of the bracketing sequence has been taken. In `burst` mode this event is
sent after each photo but maximum every 100ms.
- `photo_saved` indicate the media containing the photo has been saved to disk. In `burst` or
`bracketing` mode, indicate that all photos of the burst or bracketing sequence have been saved
to disk.
Other results are errors.
 - parameter photo_count: Only valid when result is `photo_taken`, indicate the number of photo taken in the sequence.
 - parameter media_id: Only valid when result is `photo_saved`, indicate the media id containing taken photo(s).
*/
- (void)onPhotoProgress:(NSUInteger)camId result:(ArsdkFeatureCameraPhotoResult)result photoCount:(NSUInteger)photoCount mediaId:(nonnull NSString *)mediaId
NS_SWIFT_NAME(onPhotoProgress(camId:result:photoCount:mediaId:));

/**
 Current photo camera state. Indicates if the camera is ready to take a photo. 

 - parameter cam_id: Id of the camera.
 - parameter available: Tell if photo feature is available in current mode.
 - parameter state: Tell if photo feature is currently active.
*/
- (void)onPhotoState:(NSUInteger)camId available:(ArsdkFeatureCameraAvailability)available state:(ArsdkFeatureCameraState)state
NS_SWIFT_NAME(onPhotoState(camId:available:state:));

/**
 Sent when recording state change. This event is not sent during the connection. 

 - parameter cam_id: Id of the camera.
 - parameter result: Current recording result. Indicate if recording has started/stopped.
 - parameter media_id: Recorded media_id. Only valid when result is `stopped` or `stopped_no_storage_space`.
*/
- (void)onRecordingProgress:(NSUInteger)camId result:(ArsdkFeatureCameraRecordingResult)result mediaId:(nonnull NSString *)mediaId
NS_SWIFT_NAME(onRecordingProgress(camId:result:mediaId:));

/**
 Current recording state. Indicates if the camera is currently recording. 

 - parameter cam_id: Id of the camera.
 - parameter available: Tell if recording feature is available in current mode.
 - parameter state: Current recording state.
 - parameter start_timestamp: If state is `active`, the timestamp if the start of the recording, in milliseconds since
00:00:00 UTC on 1 January 1970.
*/
- (void)onRecordingState:(NSUInteger)camId available:(ArsdkFeatureCameraAvailability)available state:(ArsdkFeatureCameraState)state startTimestamp:(uint64_t)startTimestamp
NS_SWIFT_NAME(onRecordingState(camId:available:state:startTimestamp:));

/**
  

 - parameter cam_id: Id of the camera.
 - parameter state: Auto-record state.
*/
- (void)onAutorecord:(NSUInteger)camId state:(ArsdkFeatureCameraState)state
NS_SWIFT_NAME(onAutorecord(camId:state:));

/**
 Current camera state. Indicates which cameras are currently active. 

 - parameter active_cameras: Bitfield showing which cameras are active.
A camera is active   when the bit corresponding to its cam_id is 1.
A camera is inactive when the bit corresponding to its cam_id is 0.
*/
- (void)onCameraStates:(NSUInteger)activeCameras
NS_SWIFT_NAME(onCameraStates(activeCameras:));

/**
 Remaining time or distance before next photo. 

 - parameter mode: Selected mode: only `time_lapse` and `gps_lapse` are supported
 - parameter remaining: In time_lapse photo_mode: remaining time in seconds before next photo
In gps_lapse photo_mode: remaining distance in meters before next photo
*/
- (void)onNextPhotoDelay:(ArsdkFeatureCameraPhotoMode)mode remaining:(float)remaining
NS_SWIFT_NAME(onNextPhotoDelay(mode:remaining:));

/**
  

 - parameter cam_id: Id of the camera.
 - parameter min_bound_yaw: Lower bound of the alignment offset that can be set on the yaw axis, in degrees
 - parameter max_bound_yaw: Upper bound of the alignment offset that can be set on the yaw axis, in degrees
 - parameter current_yaw: Current alignment offset applied to the yaw axis, in degrees
 - parameter min_bound_pitch: Lower bound of the alignment offset that can be set on the pitch axis, in degrees
 - parameter max_bound_pitch: Upper bound of the alignment offset that can be set on the pitch axis, in degrees
 - parameter current_pitch: Current alignment offset applied to the pitch axis, in degrees
 - parameter min_bound_roll: Lower bound of the alignment offset that can be set on the roll axis, in degrees
 - parameter max_bound_roll: Upper bound of the alignment offset that can be set on the roll axis, in degrees
 - parameter current_roll: Current alignment offset applied to the roll axis, in degrees
*/
- (void)onAlignmentOffsets:(NSUInteger)camId minBoundYaw:(float)minBoundYaw maxBoundYaw:(float)maxBoundYaw currentYaw:(float)currentYaw minBoundPitch:(float)minBoundPitch maxBoundPitch:(float)maxBoundPitch currentPitch:(float)currentPitch minBoundRoll:(float)minBoundRoll maxBoundRoll:(float)maxBoundRoll currentRoll:(float)currentRoll
NS_SWIFT_NAME(onAlignmentOffsets(camId:minBoundYaw:maxBoundYaw:currentYaw:minBoundPitch:maxBoundPitch:currentPitch:minBoundRoll:maxBoundRoll:currentRoll:));


@end

@interface ArsdkFeatureCamera : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCameraCallback>)callback;

/**
 Sets exposure mode, shutter speed, iso sensitivity and maximum iso sensitivity. 

 - parameter cam_id: Id of the camera.
 - parameter mode: Requested exposure mode: Auto, Manual Shutter Speed, Manual ISO or Manual.
 - parameter shutter_speed: Requested shutter speed, ignored if mode is not Manual Shutter Speed or Manual.
 - parameter iso_sensitivity: Requested ISO sensitivity level, ignored if mode is not Manual ISO or Manual.
 - parameter max_iso_sensitivity: Requested maximum ISO sensitivity level, ignored is not Auto. This value define the maximum iso
sensitivity the autoexposure engine can use to adjust exposure.
 - parameter metering_mode: Auto Exposure metering mode, ignored if mode is Manual
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setExposureSettingsEncoder:(NSUInteger)camId mode:(ArsdkFeatureCameraExposureMode)mode shutterSpeed:(ArsdkFeatureCameraShutterSpeed)shutterSpeed isoSensitivity:(ArsdkFeatureCameraIsoSensitivity)isoSensitivity maxIsoSensitivity:(ArsdkFeatureCameraIsoSensitivity)maxIsoSensitivity meteringMode:(ArsdkFeatureCameraAutoExposureMeteringMode)meteringMode
NS_SWIFT_NAME(setExposureSettingsEncoder(camId:mode:shutterSpeed:isoSensitivity:maxIsoSensitivity:meteringMode:));

/**
 Lock shutter speed and iso sensitivity to current values. Valid for all exposure modes exepted `manual`. Auto exposure lock is automatically removed when the exposure mode is changed. 

 - parameter cam_id: Id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))lockExposureEncoder:(NSUInteger)camId
NS_SWIFT_NAME(lockExposureEncoder(camId:));

/**
 Lock shutter speed and iso sensitivity optimized on a specific region. Valid for all exposure modes exepted `manual` Auto exposure lock is automatically removed when the exposure mode is changed. 

 - parameter cam_id: Id of the camera.
 - parameter roi_center_x: ROI center on x axis. between 0 and 1, relative to streaming image width.
 - parameter roi_center_y: ROI center on y axis. between 0 and 1, relative to streaming image height.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))lockExposureOnRoiEncoder:(NSUInteger)camId roiCenterX:(float)roiCenterX roiCenterY:(float)roiCenterY
NS_SWIFT_NAME(lockExposureOnRoiEncoder(camId:roiCenterX:roiCenterY:));

/**
 Valid when exposure is locked. 

 - parameter cam_id: Id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))unlockExposureEncoder:(NSUInteger)camId
NS_SWIFT_NAME(unlockExposureEncoder(camId:));

/**
 Change the white balance mode and custom temperature. 

 - parameter cam_id: Id of the camera.
 - parameter mode: Requested white balance mode.
 - parameter temperature: Requested white balance temperature when mode is `custom`. Ignored else.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setWhiteBalanceEncoder:(NSUInteger)camId mode:(ArsdkFeatureCameraWhiteBalanceMode)mode temperature:(ArsdkFeatureCameraWhiteBalanceTemperature)temperature
NS_SWIFT_NAME(setWhiteBalanceEncoder(camId:mode:temperature:));

/**
 Lock/unlock white balance to current value. Valid when white balance mode not `custom`. White balance lock is automatically removed when the white balance mode is changed. 

 - parameter cam_id: Id of the camera.
 - parameter state: Requested lock state.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setWhiteBalanceLockEncoder:(NSUInteger)camId state:(ArsdkFeatureCameraState)state
NS_SWIFT_NAME(setWhiteBalanceLockEncoder(camId:state:));

/**
 Change the EV compensation value. 

 - parameter cam_id: Id of the camera.
 - parameter value: Requested EV compensation value.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setEvCompensationEncoder:(NSUInteger)camId value:(ArsdkFeatureCameraEvCompensation)value
NS_SWIFT_NAME(setEvCompensationEncoder(camId:value:));

/**
 Change the anti-flicker mode. 

 - parameter mode: Requested anti-flicker mode.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setAntiflickerModeEncoder:(ArsdkFeatureCameraAntiflickerMode)mode
NS_SWIFT_NAME(setAntiflickerModeEncoder(mode:));

/**
 Change the active style. 

 - parameter cam_id: Id of the camera.
 - parameter style: Style to activate.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setStyleEncoder:(NSUInteger)camId style:(ArsdkFeatureCameraStyle)style
NS_SWIFT_NAME(setStyleEncoder(camId:style:));

/**
 Change style saturation, contrast and sharpness of the current active style. 

 - parameter cam_id: Id of the camera.
 - parameter saturation: Requested saturation value for this style.
 - parameter contrast: Requested contrast value for this style.
 - parameter sharpness: Requested sharpness value for this style.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setStyleParamsEncoder:(NSUInteger)camId saturation:(NSInteger)saturation contrast:(NSInteger)contrast sharpness:(NSInteger)sharpness
NS_SWIFT_NAME(setStyleParamsEncoder(camId:saturation:contrast:sharpness:));

/**
  

 - parameter cam_id: id of the camera.
 - parameter control_mode: Mode of changing the zoom.
This parameter will characterize following parameters units.
 - parameter target: Zoom target.
Units depend on the `control_mode` value:
- `level`: value is in zoom level
- `velocity`, value is in signed ratio (from -1 to 1) of the [MaxZoomSpeed](#143-24) `current` parameter.
Negative values will produce a zoom out, positive values produce a zoom in.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setZoomTargetEncoder:(NSUInteger)camId controlMode:(ArsdkFeatureCameraZoomControlMode)controlMode target:(float)target
NS_SWIFT_NAME(setZoomTargetEncoder(camId:controlMode:target:));

/**
 Set the max zoom speed setting.
You can get bounds using [MaxZoomSpeed](#143-24). 

 - parameter cam_id: Id of the camera.
 - parameter max: Desired current max zoom speed. Should lay between the bounds given by [MaxZoomSpeed](#143-25).
Expressed as a tan(deg) / sec.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setMaxZoomSpeedEncoder:(NSUInteger)camId max:(float)max
NS_SWIFT_NAME(setMaxZoomSpeedEncoder(camId:max:));

/**
 Set the max zoom velocity. 

 - parameter cam_id: Id of the camera.
 - parameter allow: 1 to allow quality degradation, 0 otherwise.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setZoomVelocityQualityDegradationEncoder:(NSUInteger)camId allow:(NSUInteger)allow
NS_SWIFT_NAME(setZoomVelocityQualityDegradationEncoder(camId:allow:));

/**
 Change HDR setting. if HDR setting is `active`, HDR will be used when supported in active configuration. 

 - parameter cam_id: Id of the camera.
 - parameter value: Requested HDR setting value.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setHdrSettingEncoder:(NSUInteger)camId value:(ArsdkFeatureCameraState)value
NS_SWIFT_NAME(setHdrSettingEncoder(camId:value:));

/**
 Change camera mode. 

 - parameter cam_id: Id of the camera.
 - parameter value: Requested camera mode.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setCameraModeEncoder:(NSUInteger)camId value:(ArsdkFeatureCameraCameraMode)value
NS_SWIFT_NAME(setCameraModeEncoder(camId:value:));

/**
 Change recording mode and parameters to be used when the camera is in mode recording. Note that if the camera is in photo modes, actual camera mode is not changed, new recording mode and parameters are saved and are apply when the camera mode is changed to `recording`. 

 - parameter cam_id: Id of the camera.
 - parameter mode: Requested camera recording mode.
 - parameter resolution: Requested recording resolution.
 - parameter framerate: Requested recording framerate.
 - parameter hyperlapse: Requested hyperlapse value when the recording mode is hyperlapse. Ignored in other modes
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setRecordingModeEncoder:(NSUInteger)camId mode:(ArsdkFeatureCameraRecordingMode)mode resolution:(ArsdkFeatureCameraResolution)resolution framerate:(ArsdkFeatureCameraFramerate)framerate hyperlapse:(ArsdkFeatureCameraHyperlapseValue)hyperlapse
NS_SWIFT_NAME(setRecordingModeEncoder(camId:mode:resolution:framerate:hyperlapse:));

/**
 Change photo mode and parameters to be used when the camera is in mode photo. Note that if the camera is in recording modes, actual camera mode is not changed, new photo mode and parameters are saved and are apply when the camera mode is changed to `photo`. 

 - parameter cam_id: Id of the camera.
 - parameter mode: Requested camera photo mode.
 - parameter format: Requested photo format.
 - parameter file_format: Requested photo file format.
 - parameter burst: Requested burst value when the photo mode is burst. Ignored in other modes.
 - parameter bracketing: Requested bracketing value when the photo mode is bracketing. Ignored in other modes.
 - parameter capture_interval: Requested time-lapse interval value (in seconds) when the photo mode is time_lapse.
Requested GPS-lapse interval value (in meters) when the photo mode is gps_lapse.
Ignored in other modes.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setPhotoModeEncoder:(NSUInteger)camId mode:(ArsdkFeatureCameraPhotoMode)mode format:(ArsdkFeatureCameraPhotoFormat)format fileFormat:(ArsdkFeatureCameraPhotoFileFormat)fileFormat burst:(ArsdkFeatureCameraBurstValue)burst bracketing:(ArsdkFeatureCameraBracketingPreset)bracketing captureInterval:(float)captureInterval
NS_SWIFT_NAME(setPhotoModeEncoder(camId:mode:format:fileFormat:burst:bracketing:captureInterval:));

/**
 Change streaming mode setting. 

 - parameter cam_id: Id of the camera.
 - parameter value: New streaming mode.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setStreamingModeEncoder:(NSUInteger)camId value:(ArsdkFeatureCameraStreamingMode)value
NS_SWIFT_NAME(setStreamingModeEncoder(camId:value:));

/**
 Take a photo. Can be sent when `photo_state` is `available`. 

 - parameter cam_id: Id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))takePhotoEncoder:(NSUInteger)camId
NS_SWIFT_NAME(takePhotoEncoder(camId:));

/**
  

 - parameter cam_id: Id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startRecordingEncoder:(NSUInteger)camId
NS_SWIFT_NAME(startRecordingEncoder(camId:));

/**
  

 - parameter cam_id: Id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))stopRecordingEncoder:(NSUInteger)camId
NS_SWIFT_NAME(stopRecordingEncoder(camId:));

/**
 When auto-record is enabled, if the drone is in recording mode, recording starts when taking-off and stops after landing. 

 - parameter cam_id: Id of the camera.
 - parameter state: Requested auto-record state.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setAutorecordEncoder:(NSUInteger)camId state:(ArsdkFeatureCameraState)state
NS_SWIFT_NAME(setAutorecordEncoder(camId:state:));

/**
  

 - parameter cam_id: id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))resetZoomEncoder:(NSUInteger)camId
NS_SWIFT_NAME(resetZoomEncoder(camId:));

/**
 Stops an ongoing photos capture. Only for `time_lapse` and `gps_lapse` `photo_mode`. Only when `photo_state` is `available` and `active`. 

 - parameter cam_id: Id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))stopPhotoEncoder:(NSUInteger)camId
NS_SWIFT_NAME(stopPhotoEncoder(camId:));

/**
  

 - parameter cam_id: Id of the camera.
 - parameter yaw: Alignment offset, in degrees, that should be applied to the yaw axis.
This value will be clamped between [alignment_offsets](#143-52) min_bound_yaw and max_bound_yaw
 - parameter pitch: Alignment offset, in degrees, that should be applied to the pitch axis.
This value will be clamped between [alignment_offsets](#143-52) min_bound_pitch and max_bound_pitch
 - parameter roll: Alignment offset, in degrees, that should be applied to the roll axis.
This value will be clamped between [alignment_offsets](#143-52) min_bound_roll and max_bound_roll
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setAlignmentOffsetsEncoder:(NSUInteger)camId yaw:(float)yaw pitch:(float)pitch roll:(float)roll
NS_SWIFT_NAME(setAlignmentOffsetsEncoder(camId:yaw:pitch:roll:));

/**
  

 - parameter cam_id: Id of the camera.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))resetAlignmentOffsetsEncoder:(NSUInteger)camId
NS_SWIFT_NAME(resetAlignmentOffsetsEncoder(camId:));

@end

