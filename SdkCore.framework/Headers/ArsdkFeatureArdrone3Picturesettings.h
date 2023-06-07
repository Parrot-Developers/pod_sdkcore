/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3PicturesettingsUid;

struct arsdk_cmd;

/** The type of photo format */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsPictureformatselectionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsPictureformatselectionTypeSdkCoreUnknown = -1,

    /** Take raw image */
    ArsdkFeatureArdrone3PicturesettingsPictureformatselectionTypeRaw = 0,

    /** Take a 4:3 jpeg photo */
    ArsdkFeatureArdrone3PicturesettingsPictureformatselectionTypeJpeg = 1,

    /** Take a 16:9 snapshot from camera */
    ArsdkFeatureArdrone3PicturesettingsPictureformatselectionTypeSnapshot = 2,

    /** Take jpeg fisheye image only */
    ArsdkFeatureArdrone3PicturesettingsPictureformatselectionTypeJpegFisheye = 3,

};
#define ArsdkFeatureArdrone3PicturesettingsPictureformatselectionTypeCnt 4

/** The type auto white balance */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionTypeSdkCoreUnknown = -1,

    /** Auto guess of best white balance params */
    ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionTypeAuto = 0,

    /** Tungsten white balance */
    ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionTypeTungsten = 1,

    /** Daylight white balance */
    ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionTypeDaylight = 2,

    /** Cloudy white balance */
    ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionTypeCloudy = 3,

    /** White balance for a flash */
    ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionTypeCoolWhite = 4,

};
#define ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionTypeCnt 5

/** Video stabilization mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeModeSdkCoreUnknown = -1,

    /** Video flat on roll and pitch */
    ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeModeRollPitch = 0,

    /** Video flat on pitch only */
    ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeModePitch = 1,

    /** Video flat on roll only */
    ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeModeRoll = 2,

    /** Video follows drone angles */
    ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeModeNone = 3,

};
#define ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeModeCnt 4

/** Video recording mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsVideorecordingmodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsVideorecordingmodeModeSdkCoreUnknown = -1,

    /** Maximize recording quality. */
    ArsdkFeatureArdrone3PicturesettingsVideorecordingmodeModeQuality = 0,

    /** Maximize recording time. */
    ArsdkFeatureArdrone3PicturesettingsVideorecordingmodeModeTime = 1,

};
#define ArsdkFeatureArdrone3PicturesettingsVideorecordingmodeModeCnt 2

/** Video framerate */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsVideoframerateFramerate) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsVideoframerateFramerateSdkCoreUnknown = -1,

    /** 23.976 frames per second. */
    ArsdkFeatureArdrone3PicturesettingsVideoframerateFramerate24Fps = 0,

    /** 25 frames per second. */
    ArsdkFeatureArdrone3PicturesettingsVideoframerateFramerate25Fps = 1,

    /** 29.97 frames per second. */
    ArsdkFeatureArdrone3PicturesettingsVideoframerateFramerate30Fps = 2,

};
#define ArsdkFeatureArdrone3PicturesettingsVideoframerateFramerateCnt 3

/** Video streaming and recording resolutions */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsVideoresolutionsType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsVideoresolutionsTypeSdkCoreUnknown = -1,

    /** 1080p recording, 480p streaming. */
    ArsdkFeatureArdrone3PicturesettingsVideoresolutionsTypeRec1080Stream480 = 0,

    /** 720p recording, 720p streaming. */
    ArsdkFeatureArdrone3PicturesettingsVideoresolutionsTypeRec720Stream720 = 1,

};
#define ArsdkFeatureArdrone3PicturesettingsVideoresolutionsTypeCnt 2

@interface ArsdkFeatureArdrone3Picturesettings : NSObject

/**
 Set picture format.
Please note that the time required to take the picture is highly related to this format.
Also, please note that if your picture format is different from snapshot, picture taking will stop video recording (it will restart after the picture has been taken). 

 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))pictureFormatSelectionEncoder:(ArsdkFeatureArdrone3PicturesettingsPictureformatselectionType)type
NS_SWIFT_NAME(pictureFormatSelectionEncoder(type:));

/**
 Set White Balance mode. 

 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))autoWhiteBalanceSelectionEncoder:(ArsdkFeatureArdrone3PicturesettingsAutowhitebalanceselectionType)type
NS_SWIFT_NAME(autoWhiteBalanceSelectionEncoder(type:));

/**
 Set image exposure. 

 - parameter value: Exposition value (bounds given by ExpositionChanged arg min and max, by default [-3:3])
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))expositionSelectionEncoder:(float)value
NS_SWIFT_NAME(expositionSelectionEncoder(value:));

/**
 Set image saturation. 

 - parameter value: Saturation value (bounds given by SaturationChanged arg min and max, by default [-100:100])
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))saturationSelectionEncoder:(float)value
NS_SWIFT_NAME(saturationSelectionEncoder(value:));

/**
 Set timelapse mode.
If timelapse mode is set, instead of taking a video, the drone will take picture regularly.
Watch out, this command only configure the timelapse mode. Once it is configured, you can start/stop the timelapse with the [RecordVideo](#1-7-3) command. 

 - parameter enabled: 1 if timelapse is enabled, 0 otherwise
 - parameter interval: interval in seconds for taking pictures
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))timelapseSelectionEncoder:(NSUInteger)enabled interval:(float)interval
NS_SWIFT_NAME(timelapseSelectionEncoder(enabled:interval:));

/**
 Set video autorecord mode.
If autorecord is set, video record will be automatically started when the drone takes off and stopped slightly after landing. 

 - parameter enabled: 1 if video autorecord is enabled, 0 otherwise
 - parameter mass_storage_id: Mass storage id to take video
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))videoAutorecordSelectionEncoder:(NSUInteger)enabled massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(videoAutorecordSelectionEncoder(enabled:massStorageId:));

/**
 Set video stabilization mode. 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))videoStabilizationModeEncoder:(ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeMode)mode
NS_SWIFT_NAME(videoStabilizationModeEncoder(mode:));

/**
 Set video recording mode. 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))videoRecordingModeEncoder:(ArsdkFeatureArdrone3PicturesettingsVideorecordingmodeMode)mode
NS_SWIFT_NAME(videoRecordingModeEncoder(mode:));

/**
 Set video framerate. 

 - parameter framerate: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))videoFramerateEncoder:(ArsdkFeatureArdrone3PicturesettingsVideoframerateFramerate)framerate
NS_SWIFT_NAME(videoFramerateEncoder(framerate:));

/**
 Set video streaming and recording resolutions. 

 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))videoResolutionsEncoder:(ArsdkFeatureArdrone3PicturesettingsVideoresolutionsType)type
NS_SWIFT_NAME(videoResolutionsEncoder(type:));

@end

