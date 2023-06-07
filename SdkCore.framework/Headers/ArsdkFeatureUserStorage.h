/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureUserStorageUid;

struct arsdk_cmd;

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStoragePhyState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStoragePhyStateSdkCoreUnknown = -1,

    /** The removable media is not detected. */
    ArsdkFeatureUserStoragePhyStateUndetected = 0,

    /** The removable media is too small for operation. */
    ArsdkFeatureUserStoragePhyStateTooSmall = 1,

    /** The removable media is too slow for operation. */
    ArsdkFeatureUserStoragePhyStateTooSlow = 2,

    /** The removable media is detected. */
    ArsdkFeatureUserStoragePhyStateAvailable = 3,

    /** The removable media is used by mass-storage gadget. */
    ArsdkFeatureUserStoragePhyStateUsbMassStorage = 4,

};
#define ArsdkFeatureUserStoragePhyStateCnt 5

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageFsState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageFsStateSdkCoreUnknown = -1,

    /** The media file system state is not known (yet) */
    ArsdkFeatureUserStorageFsStateUnknown = 0,

    /** The media file system is not supported, unformatted or capacity is too low. */
    ArsdkFeatureUserStorageFsStateFormatNeeded = 1,

    /** The media file system is getting formatted. */
    ArsdkFeatureUserStorageFsStateFormatting = 2,

    /** The media file system is ready to be used. */
    ArsdkFeatureUserStorageFsStateReady = 3,

    /** The media file system is not available. */
    ArsdkFeatureUserStorageFsStateError = 4,

    /** The media file system needs a password for decryption. */
    ArsdkFeatureUserStorageFsStatePasswordNeeded = 5,

    /** The media file system is being checked */
    ArsdkFeatureUserStorageFsStateChecking = 6,

    /** The media file system is not managed by the drone itself but accessible by external means. */
    ArsdkFeatureUserStorageFsStateExternalAccessOk = 7,

};
#define ArsdkFeatureUserStorageFsStateCnt 8

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageAttribute) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageAttributeSdkCoreUnknown = -1,

    /** The removable media has low performance. */
    ArsdkFeatureUserStorageAttributeLowPerf = 0,

    /** The removable media is encrypted. */
    ArsdkFeatureUserStorageAttributeEncrypted = 1,

};
#define ArsdkFeatureUserStorageAttributeCnt 2

@interface ArsdkFeatureUserStorageAttributeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureUserStorageAttribute)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureUserStorageAttribute val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageFormattingResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageFormattingResultSdkCoreUnknown = -1,

    /** The last formatting command failed */
    ArsdkFeatureUserStorageFormattingResultError = 0,

    /** The last formatting command was denied */
    ArsdkFeatureUserStorageFormattingResultDenied = 1,

    /** The last formatting command succeeded */
    ArsdkFeatureUserStorageFormattingResultSuccess = 2,

};
#define ArsdkFeatureUserStorageFormattingResultCnt 3

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStoragePasswordResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStoragePasswordResultSdkCoreUnknown = -1,

    /** The transmitted password is wrong */
    ArsdkFeatureUserStoragePasswordResultWrongPassword = 0,

    /** The transmitted password is correct */
    ArsdkFeatureUserStoragePasswordResultSuccess = 1,

    /** The usage specified with the password does not match with the current drone context (RECORD or MASS STORAGE) */
    ArsdkFeatureUserStoragePasswordResultWrongUsage = 2,

};
#define ArsdkFeatureUserStoragePasswordResultCnt 3

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageFeature) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageFeatureSdkCoreUnknown = -1,

    /** Format is available when state is `ready` (and also, as usual when state is `format_needed`). */
    ArsdkFeatureUserStorageFeatureFormatWhenReadyAllowed = 0,

    /** The format result event is supported and will be sent after a format has been asked. */
    ArsdkFeatureUserStorageFeatureFormatResultEvtSupported = 1,

    /** The format progress event is supported and will be sent during format operation. */
    ArsdkFeatureUserStorageFeatureFormatProgressEvtSupported = 2,

    /** SD card encryption is supported. */
    ArsdkFeatureUserStorageFeatureEncryptionSupported = 3,

};
#define ArsdkFeatureUserStorageFeatureCnt 4

@interface ArsdkFeatureUserStorageFeatureBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureUserStorageFeature)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureUserStorageFeature val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageFormattingType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageFormattingTypeSdkCoreUnknown = -1,

    /** Formatting which includes deep format operation that is time consuming but optimizes performance. */
    ArsdkFeatureUserStorageFormattingTypeFull = 0,

    /** Formatting which removes content of the media. */
    ArsdkFeatureUserStorageFormattingTypeQuick = 1,

};
#define ArsdkFeatureUserStorageFormattingTypeCnt 2

@interface ArsdkFeatureUserStorageFormattingTypeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureUserStorageFormattingType)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureUserStorageFormattingType val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageFormattingStep) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageFormattingStepSdkCoreUnknown = -1,

    /** The drone is currently partitioning the media. */
    ArsdkFeatureUserStorageFormattingStepPartitioning = 0,

    /** The drone is currently wiping data on the media in order to optimize performance. */
    ArsdkFeatureUserStorageFormattingStepClearingData = 1,

    /** The drone is creating a file system on the media. */
    ArsdkFeatureUserStorageFormattingStepCreatingFs = 2,

};
#define ArsdkFeatureUserStorageFormattingStepCnt 3

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStoragePasswordUsage) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStoragePasswordUsageSdkCoreUnknown = -1,

    /** Send password for record requirement */
    ArsdkFeatureUserStoragePasswordUsageRecord = 0,

    /** Send password for usb mass storage requirement */
    ArsdkFeatureUserStoragePasswordUsageUsb = 1,

};
#define ArsdkFeatureUserStoragePasswordUsageCnt 2

@protocol ArsdkFeatureUserStorageCallback<NSObject>

@optional

/**
  

 - parameter name: The name of the media.
 - parameter capacity: The capacity of the media in Bytes.
*/
- (void)onInfo:(nonnull NSString *)name capacity:(uint64_t)capacity
NS_SWIFT_NAME(onInfo(name:capacity:));

/**
  

 - parameter available_bytes: The free space in Bytes on the media.
*/
- (void)onMonitor:(uint64_t)availableBytes
NS_SWIFT_NAME(onMonitor(availableBytes:));

/**
  

 - parameter physical_state: The state of the physical media.
 - parameter file_system_state: The state of the data stored on media.
 - parameter attribute: Details about removable storage.
 - parameter monitor_enabled: Boolean. 1 if monitoring is enabled, 0 if not.
 - parameter monitor_period: Current period of monitoring if monitoring is enabled, 0 if not enabled.
*/
- (void)onState:(ArsdkFeatureUserStoragePhyState)physicalState fileSystemState:(ArsdkFeatureUserStorageFsState)fileSystemState attributeBitField:(NSUInteger)attributeBitField monitorEnabled:(NSUInteger)monitorEnabled monitorPeriod:(NSUInteger)monitorPeriod
NS_SWIFT_NAME(onState(physicalState:fileSystemState:attributeBitField:monitorEnabled:monitorPeriod:));

/**
  

 - parameter result: Result of the last formatting command
*/
- (void)onFormatResult:(ArsdkFeatureUserStorageFormattingResult)result
NS_SWIFT_NAME(onFormatResult(result:));

/**
 Describes user storage supported capabilities. 

 - parameter supported_features: Supported features.
*/
- (void)onCapabilities:(NSUInteger)supportedFeaturesBitField
NS_SWIFT_NAME(onCapabilities(supportedFeaturesBitField:));

/**
 Describes user storage supported formatting types. When sent, it indicates that the `format_with_type` command is supported. If not sent, the `format_with_type` command is not supported. 

 - parameter supported_types: Supported formatting types.
*/
- (void)onSupportedFormattingTypes:(NSUInteger)supportedTypesBitField
NS_SWIFT_NAME(onSupportedFormattingTypes(supportedTypesBitField:));

/**
  

 - parameter step: The formatting step the format process is in.
 - parameter percentage: The progress of the current step expressed in percent.
*/
- (void)onFormatProgress:(ArsdkFeatureUserStorageFormattingStep)step percentage:(NSUInteger)percentage
NS_SWIFT_NAME(onFormatProgress(step:percentage:));

/**
  

 - parameter result: Result of the last transmitted password
*/
- (void)onDecryption:(ArsdkFeatureUserStoragePasswordResult)result
NS_SWIFT_NAME(onDecryption(result:));

/**
  

 - parameter uuid: SDCard UUID
*/
- (void)onSdcardUuid:(nonnull NSString *)uuid
NS_SWIFT_NAME(onSdcardUuid(uuid:));


@end

@interface ArsdkFeatureUserStorage : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureUserStorageCallback>)callback;

/**
 Start format operation on the removable media. This could imply its repartitioning if needed. Can be done in state `format_needed` or, if [capabilities](#145-8) contains `format_when_ready_allowed` also in state `ready`. 

 - parameter label: Label to set to the file system. If empty, label is set to the product name.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))formatEncoder:(nonnull NSString *)label
NS_SWIFT_NAME(formatEncoder(label:));

/**
 Start monitoring operation of the removable media. 

 - parameter period: Period in seconds to send monitor events. If set to 0, period is set to default value (one second).
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startMonitoringEncoder:(NSUInteger)period
NS_SWIFT_NAME(startMonitoringEncoder(period:));

/**
 Stop monitoring operation of the removable media. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))stopMonitoringEncoder
NS_SWIFT_NAME(stopMonitoringEncoder());

/**
 Start format operation on the removable media given a formatting type. This could imply its repartitioning if needed. Can be done in state `format_needed` or, if [capabilities](#145-8) contains `format_when_ready_allowed` also in state `ready`. 

 - parameter label: Label to set to the file system. If empty, label is set to the product name.
 - parameter type: Formatting type.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))formatWithTypeEncoder:(nonnull NSString *)label type:(ArsdkFeatureUserStorageFormattingType)type
NS_SWIFT_NAME(formatWithTypeEncoder(label:type:));

/**
 Transmit password when needed for unlocking encrypted file system 

 - parameter password: Password used for SD encryption
 - parameter type: Reason of password requirement
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))encryptionPasswordEncoder:(nonnull NSString *)password type:(ArsdkFeatureUserStoragePasswordUsage)type
NS_SWIFT_NAME(encryptionPasswordEncoder(password:type:));

/**
 Start format operation for encryption of the removable media with the given password 

 - parameter label: Label to set to the file system. If empty, label is set to the product name.
 - parameter password: Password used for SD card encryption
 - parameter type: Formatting type.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))formatWithEncryptionEncoder:(nonnull NSString *)label password:(nonnull NSString *)password type:(ArsdkFeatureUserStorageFormattingType)type
NS_SWIFT_NAME(formatWithEncryptionEncoder(label:password:type:));

@end

