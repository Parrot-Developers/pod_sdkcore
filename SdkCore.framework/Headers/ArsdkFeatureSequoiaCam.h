/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSequoiaCamUid;

struct arsdk_cmd;

/** Radiometric calibration status */
typedef NS_ENUM(NSInteger, ArsdkFeatureSequoiaCamRadiometricCalibStatusValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSequoiaCamRadiometricCalibStatusValueSdkCoreUnknown = -1,

    /** Radiometric calibration is available */
    ArsdkFeatureSequoiaCamRadiometricCalibStatusValueAvailable = 0,

    /** Radiometric calibration is not available */
    ArsdkFeatureSequoiaCamRadiometricCalibStatusValueUnavailable = 1,

    /** Radiometric calibration In progress */
    ArsdkFeatureSequoiaCamRadiometricCalibStatusValueInProgress = 2,

};
#define ArsdkFeatureSequoiaCamRadiometricCalibStatusValueCnt 3

/** Last radiometric calibration result */
typedef NS_ENUM(NSInteger, ArsdkFeatureSequoiaCamRadiometricCalibResultValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSequoiaCamRadiometricCalibResultValueSdkCoreUnknown = -1,

    /** Radiometric calibration is successfull */
    ArsdkFeatureSequoiaCamRadiometricCalibResultValueSuccess = 0,

    /** Radiometric calibration failed */
    ArsdkFeatureSequoiaCamRadiometricCalibResultValueError = 1,

};
#define ArsdkFeatureSequoiaCamRadiometricCalibResultValueCnt 2

/** Last session state */
typedef NS_ENUM(NSInteger, ArsdkFeatureSequoiaCamSessionStatusValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSequoiaCamSessionStatusValueSdkCoreUnknown = -1,

    /** A session is currently opened */
    ArsdkFeatureSequoiaCamSessionStatusValueOpened = 0,

    /** No session is currently opened */
    ArsdkFeatureSequoiaCamSessionStatusValueClosed = 1,

};
#define ArsdkFeatureSequoiaCamSessionStatusValueCnt 2

/** Sensor to use */
typedef NS_ENUM(NSInteger, ArsdkFeatureSequoiaCamSensorValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSequoiaCamSensorValueSdkCoreUnknown = -1,

    /** near infra red */
    ArsdkFeatureSequoiaCamSensorValueNearInfraRed = 0,

    /** green */
    ArsdkFeatureSequoiaCamSensorValueGreen = 1,

    /** red */
    ArsdkFeatureSequoiaCamSensorValueRed = 2,

    /** red edge */
    ArsdkFeatureSequoiaCamSensorValueRedEdge = 3,

};
#define ArsdkFeatureSequoiaCamSensorValueCnt 4

@interface ArsdkFeatureSequoiaCamSensorValueBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureSequoiaCamSensorValue)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureSequoiaCamSensorValue val))cb;

@end

/** Storage selection */
typedef NS_ENUM(NSInteger, ArsdkFeatureSequoiaCamStorageInfosSelected) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSequoiaCamStorageInfosSelectedSdkCoreUnknown = -1,

    /** sd is selected */
    ArsdkFeatureSequoiaCamStorageInfosSelectedSd = 0,

    /** internal is selected */
    ArsdkFeatureSequoiaCamStorageInfosSelectedInternal = 1,

};
#define ArsdkFeatureSequoiaCamStorageInfosSelectedCnt 2

/** Errors bits */
typedef NS_ENUM(NSInteger, ArsdkFeatureSequoiaCamSystemError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSequoiaCamSystemErrorSdkCoreUnknown = -1,

    /** UPDATE ERR. */
    ArsdkFeatureSequoiaCamSystemErrorUpdateErr = 0,

    /** TEMP ERR. */
    ArsdkFeatureSequoiaCamSystemErrorTempErr = 1,

    /** NO SUNSHINE ERR. */
    ArsdkFeatureSequoiaCamSystemErrorNoSunshineErr = 2,

};
#define ArsdkFeatureSequoiaCamSystemErrorCnt 3

@interface ArsdkFeatureSequoiaCamSystemErrorBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureSequoiaCamSystemError)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureSequoiaCamSystemError val))cb;

@end

@protocol ArsdkFeatureSequoiaCamCallback<NSObject>

@optional

/**
 Is radiometric calibration available ?
 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter value: 
 - parameter list_flags: 
*/
- (void)onRadiometricCalibStatus:(NSUInteger)camId value:(ArsdkFeatureSequoiaCamRadiometricCalibStatusValue)value listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onRadiometricCalibStatus(camId:value:listFlagsBitField:));

/**
 Last radiometric calibration result.
 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter value: 
 - parameter list_flags: 
*/
- (void)onRadiometricCalibResult:(NSUInteger)camId value:(ArsdkFeatureSequoiaCamRadiometricCalibResultValue)value listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onRadiometricCalibResult(camId:value:listFlagsBitField:));

/**
 Session state changed 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter state: 
 - parameter session_path: 
 - parameter live_stitch_path: 
 - parameter list_flags: 
*/
- (void)onSessionStateChanged:(NSUInteger)camId state:(ArsdkFeatureSequoiaCamSessionStatusValue)state sessionPath:(nonnull NSString *)sessionPath liveStitchPath:(nonnull NSString *)liveStitchPath listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onSessionStateChanged(camId:state:sessionPath:liveStitchPath:listFlagsBitField:));

/**
 Current live stitch mask value. 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter mask: 
 - parameter list_flags: 
*/
- (void)onLiveStitchMaskChanged:(NSUInteger)camId maskBitField:(NSUInteger)maskBitField listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onLiveStitchMaskChanged(camId:maskBitField:listFlagsBitField:));

/**
 Last picture id available for live stitch. 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter picture_id: 
 - parameter list_flags: 
*/
- (void)onLiveStitchLastPictureIdChanged:(NSUInteger)camId pictureId:(NSUInteger)pictureId listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onLiveStitchLastPictureIdChanged(camId:pictureId:listFlagsBitField:));

/**
 Storage infos
 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter selected: 
 - parameter internal_available: Boolean. 1 if ro, 0 if rw
 - parameter internal_total_size: Total size in bytes of internal
 - parameter internal_free_size: Free bytes of the internal
 - parameter internal_is_ro: Boolean. 1 if ro, 0 if rw
 - parameter internal_is_corrupted: Boolean. 1 if corrupted, 0 otherwise
 - parameter sd_available: Boolean. 1 if ro, 0 if rw
 - parameter sd_total_size: Total size in bytes of the sd
 - parameter sd_free_size: Free bytes of the sd
 - parameter sd_is_ro: Boolean. 1 if ro, 0 if rw
 - parameter sd_is_corrupted: Boolean. 1 if corrupted, 0 otherwise
 - parameter list_flags: 
*/
- (void)onStorageInfos:(NSUInteger)camId selected:(ArsdkFeatureSequoiaCamStorageInfosSelected)selected internalAvailable:(NSUInteger)internalAvailable internalTotalSize:(uint64_t)internalTotalSize internalFreeSize:(uint64_t)internalFreeSize internalIsRo:(NSUInteger)internalIsRo internalIsCorrupted:(NSUInteger)internalIsCorrupted sdAvailable:(NSUInteger)sdAvailable sdTotalSize:(uint64_t)sdTotalSize sdFreeSize:(uint64_t)sdFreeSize sdIsRo:(NSUInteger)sdIsRo sdIsCorrupted:(NSUInteger)sdIsCorrupted listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onStorageInfos(camId:selected:internalAvailable:internalTotalSize:internalFreeSize:internalIsRo:internalIsCorrupted:sdAvailable:sdTotalSize:sdFreeSize:sdIsRo:sdIsCorrupted:listFlagsBitField:));

/**
 System status, 0x00 for all ok
 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter errors: System errors bitfield. 0 is no error.
 - parameter list_flags: 
*/
- (void)onSystemStatus:(NSUInteger)camId errorsBitField:(NSUInteger)errorsBitField listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onSystemStatus(camId:errorsBitField:listFlagsBitField:));

/**
 Number of pictures that are currently processed. 

 - parameter cam_id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter nb_pictures: 
 - parameter list_flags: 
*/
- (void)onLiveStitchPicturesInProgressNumberChanged:(NSUInteger)camId nbPictures:(NSUInteger)nbPictures listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onLiveStitchPicturesInProgressNumberChanged(camId:nbPictures:listFlagsBitField:));


@end

@interface ArsdkFeatureSequoiaCam : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureSequoiaCamCallback>)callback;

/**
 Launch capture on radiometric calibration mode. This PTP mode is 0x8004 

 - parameter id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))radiometricCalibStartEncoder:(NSUInteger)id
NS_SWIFT_NAME(radiometricCalibStartEncoder(id:));

/**
 Changes sequoia path for future media 

 - parameter id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter name: Name of the session, only letters, numbers, '-' and '_' are allowed.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))openSessionEncoder:(NSUInteger)id name:(nonnull NSString *)name
NS_SWIFT_NAME(openSessionEncoder(id:name:));

/**
 Close current mission session. 

 - parameter id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))closeSessionEncoder:(NSUInteger)id
NS_SWIFT_NAME(closeSessionEncoder(id:));

/**
 Configure live stitch mode 

 - parameter id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - parameter sensors_mask: Sensors to use for live stitch
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setLiveStitchMaskEncoder:(NSUInteger)id sensorsMaskBitField:(NSUInteger)sensorsMaskBitField
NS_SWIFT_NAME(setLiveStitchMaskEncoder(id:sensorsMaskBitField:));

/**
 Ask to send back a storage_event 

 - parameter id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))getStorageInfosEncoder:(NSUInteger)id
NS_SWIFT_NAME(getStorageInfosEncoder(id:));

/**
 This command will request a factory reset from the Sequoia. *The factory reset procedure implies an automatic reboot the sequoia*, which will be done immediately after recieving this command. 

 - parameter id: Camera id, as given in the [connected accessories](#1-33-0) event.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))factoryResetEncoder:(NSUInteger)id
NS_SWIFT_NAME(factoryResetEncoder(id:));

@end

