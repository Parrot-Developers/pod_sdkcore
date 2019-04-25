/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneMinicamstateUid;

struct arsdk_cmd;

/** Power mode of the camera. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMinicamstatePowermodechangedPowerMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMinicamstatePowermodechangedPowerModeSdkCoreUnknown = -1,

    /** Low power: most hardware is powered off, wake up via USB resume.

Used when charging. */
    ArsdkFeatureMinidroneMinicamstatePowermodechangedPowerModeLow = 0,

    /** Medium power: video hardware is powered off.

Used when drone is not flying during more than 3 minutes.
Note that it can still stream the SD content. */
    ArsdkFeatureMinidroneMinicamstatePowermodechangedPowerModeMedium = 1,

    /** Normal power: all features are available.

Used when flying. */
    ArsdkFeatureMinidroneMinicamstatePowermodechangedPowerModeNormal = 2,

};
#define ArsdkFeatureMinidroneMinicamstatePowermodechangedPowerModeCnt 3

/** State of the camera. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMinicamstateStatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMinicamstateStatechangedStateSdkCoreUnknown = -1,

    /** Minicam is unplugged. */
    ArsdkFeatureMinidroneMinicamstateStatechangedStateUnplugged = 0,

    /** Minicam is plugged, but not ready. */
    ArsdkFeatureMinidroneMinicamstateStatechangedStatePlugged = 1,

    /** Minicam is ready. */
    ArsdkFeatureMinidroneMinicamstateStatechangedStateReady = 2,

};
#define ArsdkFeatureMinidroneMinicamstateStatechangedStateCnt 3

/** State of device picture recording. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMinicamstatePicturechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMinicamstatePicturechangedStateSdkCoreUnknown = -1,

    /** Picture recording is ready. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedStateReady = 0,

    /** Picture recording is busy. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedStateBusy = 1,

    /** Picture recording is not available. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedStateNotAvailable = 2,

};
#define ArsdkFeatureMinidroneMinicamstatePicturechangedStateCnt 3

/** Result of device picture recording. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMinicamstatePicturechangedResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultSdkCoreUnknown = -1,

    /** Success. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultSuccess = 0,

    /** Device is full. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultFullDevice = 1,

    /** Continuous shooting is already running. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultContinuousShooting = 2,

    /** Over snapshot max queue size. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultFullQueue = 3,

    /** Couldn't take picture. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultError = 4,

    /** SD card doesn't exist. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultNoSd = 5,

    /** SD card format error. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultSdBadFormat = 6,

    /** SD card is formatting. */
    ArsdkFeatureMinidroneMinicamstatePicturechangedResultSdFormatting = 7,

};
#define ArsdkFeatureMinidroneMinicamstatePicturechangedResultCnt 8

/** State of device video recording. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMinicamstateVideostatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedStateSdkCoreUnknown = -1,

    /** Video is stopped. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedStateStopped = 0,

    /** Video is started. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedStateStarted = 1,

    /** The video recording is not available. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedStateNotavailable = 2,

};
#define ArsdkFeatureMinidroneMinicamstateVideostatechangedStateCnt 3

/** Error to explain the state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMinicamstateVideostatechangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorSdkCoreUnknown = -1,

    /** No Error. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorOk = 0,

    /** Unknown generic error. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorUnknown = 1,

    /** Video camera is out of order. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorCameraKo = 2,

    /** Memory full ; cannot save one additional video. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorLowbattery = 4,

    /** SD card doesn't exist. */
    ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorNoSd = 5,

};
#define ArsdkFeatureMinidroneMinicamstateVideostatechangedErrorCnt 6

@protocol ArsdkFeatureMinidroneMinicamstateCallback<NSObject>

@optional

/**
 Event informing about the minicam power mode. 

 - parameter power_mode: 
*/
- (void)onPowerModeChanged:(ArsdkFeatureMinidroneMinicamstatePowermodechangedPowerMode)powerMode
NS_SWIFT_NAME(onPowerModeChanged(powerMode:));

/**
 Event informing about the minicam product serial number. 

 - parameter serial_number: Serial number.
*/
- (void)onProductSerialChanged:(NSString*)serialNumber
NS_SWIFT_NAME(onProductSerialChanged(serialNumber:));

/**
 Event informing about the state of the camera. 

 - parameter state: 
*/
- (void)onStateChanged:(ArsdkFeatureMinidroneMinicamstateStatechangedState)state
NS_SWIFT_NAME(onStateChanged(state:));

/**
 Get the accessory Version. 

 - parameter software: Accessory software version.
 - parameter hardware: Accessory hardware version.
*/
- (void)onVersionChanged:(NSString*)software hardware:(NSString*)hardware
NS_SWIFT_NAME(onVersionChanged(software:hardware:));

/**
 Event informing that the picture has been taken. 

 - parameter state: 
 - parameter result: 
*/
- (void)onPictureChanged:(ArsdkFeatureMinidroneMinicamstatePicturechangedState)state result:(ArsdkFeatureMinidroneMinicamstatePicturechangedResult)result
NS_SWIFT_NAME(onPictureChanged(state:result:));

/**
 Event informing about the video recording state. 

 - parameter state: 
 - parameter error: 
*/
- (void)onVideoStateChanged:(ArsdkFeatureMinidroneMinicamstateVideostatechangedState)state error:(ArsdkFeatureMinidroneMinicamstateVideostatechangedError)error
NS_SWIFT_NAME(onVideoStateChanged(state:error:));

/**
 Event informing that the mass storage has been formatted. 

 - parameter state: 1 if Mass Storage has been formatted, 0 otherwise.
*/
- (void)onMassStorageFormatChanged:(NSUInteger)state
NS_SWIFT_NAME(onMassStorageFormatChanged(state:));


@end

@interface ArsdkFeatureMinidroneMinicamstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneMinicamstateCallback>)callback;

@end

