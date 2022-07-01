/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3PicturesettingsstateUid;

struct arsdk_cmd;

/** The type of photo format */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedTypeSdkCoreUnknown = -1,

    /** Take raw image */
    ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedTypeRaw = 0,

    /** Take a 4:3 jpeg photo */
    ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedTypeJpeg = 1,

    /** Take a 16:9 snapshot from camera */
    ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedTypeSnapshot = 2,

    /** Take jpeg fisheye image only */
    ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedTypeJpegFisheye = 3,

};
#define ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedTypeCnt 4

/** The type auto white balance */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedTypeSdkCoreUnknown = -1,

    /** Auto guess of best white balance params */
    ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedTypeAuto = 0,

    /** Tungsten white balance */
    ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedTypeTungsten = 1,

    /** Daylight white balance */
    ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedTypeDaylight = 2,

    /** Cloudy white balance */
    ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedTypeCloudy = 3,

    /** White balance for a flash */
    ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedTypeCoolWhite = 4,

};
#define ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedTypeCnt 5

/** Video stabilization mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedModeSdkCoreUnknown = -1,

    /** Video flat on roll and pitch */
    ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedModeRollPitch = 0,

    /** Video flat on pitch only */
    ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedModePitch = 1,

    /** Video flat on roll only */
    ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedModeRoll = 2,

    /** Video follows drone angles */
    ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedModeNone = 3,

};
#define ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedModeCnt 4

/** Video recording mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsstateVideorecordingmodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsstateVideorecordingmodechangedModeSdkCoreUnknown = -1,

    /** Maximize recording quality. */
    ArsdkFeatureArdrone3PicturesettingsstateVideorecordingmodechangedModeQuality = 0,

    /** Maximize recording time. */
    ArsdkFeatureArdrone3PicturesettingsstateVideorecordingmodechangedModeTime = 1,

};
#define ArsdkFeatureArdrone3PicturesettingsstateVideorecordingmodechangedModeCnt 2

/** Video framerate */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsstateVideoframeratechangedFramerate) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsstateVideoframeratechangedFramerateSdkCoreUnknown = -1,

    /** 23.976 frames per second. */
    ArsdkFeatureArdrone3PicturesettingsstateVideoframeratechangedFramerate24Fps = 0,

    /** 25 frames per second. */
    ArsdkFeatureArdrone3PicturesettingsstateVideoframeratechangedFramerate25Fps = 1,

    /** 29.97 frames per second. */
    ArsdkFeatureArdrone3PicturesettingsstateVideoframeratechangedFramerate30Fps = 2,

};
#define ArsdkFeatureArdrone3PicturesettingsstateVideoframeratechangedFramerateCnt 3

/** Video resolution type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PicturesettingsstateVideoresolutionschangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PicturesettingsstateVideoresolutionschangedTypeSdkCoreUnknown = -1,

    /** 1080p recording, 480p streaming. */
    ArsdkFeatureArdrone3PicturesettingsstateVideoresolutionschangedTypeRec1080Stream480 = 0,

    /** 720p recording, 720p streaming. */
    ArsdkFeatureArdrone3PicturesettingsstateVideoresolutionschangedTypeRec720Stream720 = 1,

};
#define ArsdkFeatureArdrone3PicturesettingsstateVideoresolutionschangedTypeCnt 2

@protocol ArsdkFeatureArdrone3PicturesettingsstateCallback<NSObject>

@optional

/**
 Picture format. 

 - parameter type: 
*/
- (void)onPictureFormatChanged:(ArsdkFeatureArdrone3PicturesettingsstatePictureformatchangedType)type
NS_SWIFT_NAME(onPictureFormatChanged(type:));

/**
 White balance mode. 

 - parameter type: 
*/
- (void)onAutoWhiteBalanceChanged:(ArsdkFeatureArdrone3PicturesettingsstateAutowhitebalancechangedType)type
NS_SWIFT_NAME(onAutoWhiteBalanceChanged(type:));

/**
 Image exposure. 

 - parameter value: Exposure value
 - parameter min: Min exposure value
 - parameter max: Max exposure value
*/
- (void)onExpositionChanged:(float)value min:(float)min max:(float)max
NS_SWIFT_NAME(onExpositionChanged(value:min:max:));

/**
 Image saturation. 

 - parameter value: Saturation value
 - parameter min: Min saturation value
 - parameter max: Max saturation value
*/
- (void)onSaturationChanged:(float)value min:(float)min max:(float)max
NS_SWIFT_NAME(onSaturationChanged(value:min:max:));

/**
 Timelapse mode. 

 - parameter enabled: 1 if timelapse is enabled, 0 otherwise
 - parameter interval: interval in seconds for taking pictures
 - parameter minInterval: Minimal interval for taking pictures
 - parameter maxInterval: Maximal interval for taking pictures
*/
- (void)onTimelapseChanged:(NSUInteger)enabled interval:(float)interval mininterval:(float)mininterval maxinterval:(float)maxinterval
NS_SWIFT_NAME(onTimelapseChanged(enabled:interval:mininterval:maxinterval:));

/**
 Video Autorecord mode. 

 - parameter enabled: 1 if video autorecord is enabled, 0 otherwise
 - parameter mass_storage_id: Mass storage id for the taken video
*/
- (void)onVideoAutorecordChanged:(NSUInteger)enabled massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(onVideoAutorecordChanged(enabled:massStorageId:));

/**
 Video stabilization mode. 

 - parameter mode: 
*/
- (void)onVideoStabilizationModeChanged:(ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedMode)mode
NS_SWIFT_NAME(onVideoStabilizationModeChanged(mode:));

/**
 Video recording mode. 

 - parameter mode: 
*/
- (void)onVideoRecordingModeChanged:(ArsdkFeatureArdrone3PicturesettingsstateVideorecordingmodechangedMode)mode
NS_SWIFT_NAME(onVideoRecordingModeChanged(mode:));

/**
 Video framerate. 

 - parameter framerate: 
*/
- (void)onVideoFramerateChanged:(ArsdkFeatureArdrone3PicturesettingsstateVideoframeratechangedFramerate)framerate
NS_SWIFT_NAME(onVideoFramerateChanged(framerate:));

/**
 Video resolutions.
This event informs about the recording AND streaming resolutions. 

 - parameter type: 
*/
- (void)onVideoResolutionsChanged:(ArsdkFeatureArdrone3PicturesettingsstateVideoresolutionschangedType)type
NS_SWIFT_NAME(onVideoResolutionsChanged(type:));


@end

@interface ArsdkFeatureArdrone3Picturesettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureArdrone3PicturesettingsstateCallback>)callback;

@end

