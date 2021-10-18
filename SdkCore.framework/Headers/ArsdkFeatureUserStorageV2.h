/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureUserStorageV2Uid;

struct arsdk_cmd;

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2StorageType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2StorageTypeSdkCoreUnknown = -1,

    /** The internal storage. */
    ArsdkFeatureUserStorageV2StorageTypeInternalStorage = 0,

    /** The SDcard. */
    ArsdkFeatureUserStorageV2StorageTypeRemovableStorage = 1,

};
#define ArsdkFeatureUserStorageV2StorageTypeCnt 2

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2PhyState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2PhyStateSdkCoreUnknown = -1,

    /** The media is not detected. */
    ArsdkFeatureUserStorageV2PhyStateUndetected = 0,

    /** The media is too small for operation. */
    ArsdkFeatureUserStorageV2PhyStateTooSmall = 1,

    /** The media is too slow for operation. */
    ArsdkFeatureUserStorageV2PhyStateTooSlow = 2,

    /** The media is detected. */
    ArsdkFeatureUserStorageV2PhyStateAvailable = 3,

    /** The media is used by mass-storage gadget. */
    ArsdkFeatureUserStorageV2PhyStateUsbMassStorage = 4,

};
#define ArsdkFeatureUserStorageV2PhyStateCnt 5

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2FsState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2FsStateSdkCoreUnknown = -1,

    /** The media file system state is not known (yet) */
    ArsdkFeatureUserStorageV2FsStateUnknown = 0,

    /** The media file system is not supported, unformatted, has check errors or capacity is too low. */
    ArsdkFeatureUserStorageV2FsStateFormatNeeded = 1,

    /** The media file system is getting formatted. */
    ArsdkFeatureUserStorageV2FsStateFormatting = 2,

    /** The media file system is ready to be used. */
    ArsdkFeatureUserStorageV2FsStateReady = 3,

    /** The media file system is not available. */
    ArsdkFeatureUserStorageV2FsStateError = 4,

    /** The media file system needs a password for decryption. */
    ArsdkFeatureUserStorageV2FsStatePasswordNeeded = 5,

    /** The media file system is being checked */
    ArsdkFeatureUserStorageV2FsStateChecking = 6,

    /** The media file system is not managed by the drone itself but accessible by external means. */
    ArsdkFeatureUserStorageV2FsStateExternalAccessOk = 7,

};
#define ArsdkFeatureUserStorageV2FsStateCnt 8

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2Attribute) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2AttributeSdkCoreUnknown = -1,

    /** The media has low performance. */
    ArsdkFeatureUserStorageV2AttributeLowPerf = 0,

    /** The media is encrypted. */
    ArsdkFeatureUserStorageV2AttributeEncrypted = 1,

    /** There were errors during file system checking. */
    ArsdkFeatureUserStorageV2AttributeCheckError = 2,

};
#define ArsdkFeatureUserStorageV2AttributeCnt 3

@interface ArsdkFeatureUserStorageV2AttributeBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureUserStorageV2Attribute)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureUserStorageV2Attribute val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2FormattingResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2FormattingResultSdkCoreUnknown = -1,

    /** The last formatting command failed */
    ArsdkFeatureUserStorageV2FormattingResultError = 0,

    /** The last formatting command was denied */
    ArsdkFeatureUserStorageV2FormattingResultDenied = 1,

    /** The last formatting command succeeded */
    ArsdkFeatureUserStorageV2FormattingResultSuccess = 2,

};
#define ArsdkFeatureUserStorageV2FormattingResultCnt 3

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2PasswordResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2PasswordResultSdkCoreUnknown = -1,

    /** The transmitted password is wrong */
    ArsdkFeatureUserStorageV2PasswordResultWrongPassword = 0,

    /** The transmitted password is correct */
    ArsdkFeatureUserStorageV2PasswordResultSuccess = 1,

    /** The usage specified with the password does not match with the current drone context (RECORD or MASS STORAGE) */
    ArsdkFeatureUserStorageV2PasswordResultWrongUsage = 2,

};
#define ArsdkFeatureUserStorageV2PasswordResultCnt 3

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2Feature) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2FeatureSdkCoreUnknown = -1,

    /** Format is available when state is `ready` (and also, as usual when state is `format_needed`). */
    ArsdkFeatureUserStorageV2FeatureFormatWhenReadyAllowed = 0,

    /** The format result event is supported and will be sent after a format has been asked. */
    ArsdkFeatureUserStorageV2FeatureFormatResultEvtSupported = 1,

    /** The format progress event is supported and will be sent during format operation. */
    ArsdkFeatureUserStorageV2FeatureFormatProgressEvtSupported = 2,

    /** SD card encryption is supported. */
    ArsdkFeatureUserStorageV2FeatureEncryptionSupported = 3,

};
#define ArsdkFeatureUserStorageV2FeatureCnt 4

@interface ArsdkFeatureUserStorageV2FeatureBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureUserStorageV2Feature)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureUserStorageV2Feature val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2FormattingType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2FormattingTypeSdkCoreUnknown = -1,

    /** Formatting which includes deep format operation that is time consuming but optimizes performance. */
    ArsdkFeatureUserStorageV2FormattingTypeFull = 0,

    /** Formatting which removes content of the media. */
    ArsdkFeatureUserStorageV2FormattingTypeQuick = 1,

};
#define ArsdkFeatureUserStorageV2FormattingTypeCnt 2

@interface ArsdkFeatureUserStorageV2FormattingTypeBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureUserStorageV2FormattingType)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureUserStorageV2FormattingType val))cb;

@end

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2FormattingStep) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2FormattingStepSdkCoreUnknown = -1,

    /** The drone is currently partitioning the media. */
    ArsdkFeatureUserStorageV2FormattingStepPartitioning = 0,

    /** The drone is currently wiping data on the media in order to optimize performance. */
    ArsdkFeatureUserStorageV2FormattingStepClearingData = 1,

    /** The drone is creating a file system on the media. */
    ArsdkFeatureUserStorageV2FormattingStepCreatingFs = 2,

};
#define ArsdkFeatureUserStorageV2FormattingStepCnt 3

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureUserStorageV2PasswordUsage) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureUserStorageV2PasswordUsageSdkCoreUnknown = -1,

    /** Send password for record requirement */
    ArsdkFeatureUserStorageV2PasswordUsageRecord = 0,

    /** Send password for usb mass storage requirement */
    ArsdkFeatureUserStorageV2PasswordUsageUsb = 1,

};
#define ArsdkFeatureUserStorageV2PasswordUsageCnt 2

@protocol ArsdkFeatureUserStorageV2Callback<NSObject>

@optional

/**
  

 - parameter storage_id: Id of the storage.
 - parameter name: The name of the media.
 - parameter capacity: The capacity of the media in Bytes.
 - parameter list_flags: 
*/
- (void)onInfo:(NSUInteger)storageId name:(NSString*)name capacity:(uint64_t)capacity listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onInfo(storageId:name:capacity:listFlagsBitField:));

/**
  

 - parameter storage_id: Id of the storage.
 - parameter available_bytes: The free space in Bytes on the media.
 - parameter list_flags: 
*/
- (void)onMonitor:(NSUInteger)storageId availableBytes:(uint64_t)availableBytes listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onMonitor(storageId:availableBytes:listFlagsBitField:));

/**
  

 - parameter storage_id: Id of the storage.
 - parameter physical_state: The state of the physical media.
 - parameter file_system_state: The state of the data stored on media.
 - parameter attribute: Details about storage.
 - parameter monitor_enabled: Boolean. 1 if monitoring is enabled, 0 if not.
 - parameter monitor_period: Current period of monitoring if monitoring is enabled, 0 if not enabled.
 - parameter fstype: Details about filesystem type.
 - parameter list_flags: 
*/
- (void)onState:(NSUInteger)storageId physicalState:(ArsdkFeatureUserStorageV2PhyState)physicalState fileSystemState:(ArsdkFeatureUserStorageV2FsState)fileSystemState attributeBitField:(NSUInteger)attributeBitField monitorEnabled:(NSUInteger)monitorEnabled monitorPeriod:(NSUInteger)monitorPeriod fstype:(NSString*)fstype listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onState(storageId:physicalState:fileSystemState:attributeBitField:monitorEnabled:monitorPeriod:fstype:listFlagsBitField:));

/**
  

 - parameter storage_id: Id of the storage.
 - parameter result: Result of the last formatting command
 - parameter list_flags: 
*/
- (void)onFormatResult:(NSUInteger)storageId result:(ArsdkFeatureUserStorageV2FormattingResult)result listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onFormatResult(storageId:result:listFlagsBitField:));

/**
 Describes user storage supported capabilities. 

 - parameter storage_id: Id of the storage.
 - parameter supported_features: Supported features.
 - parameter storage_type: Storage type.
 - parameter list_flags: 
*/
- (void)onCapabilities:(NSUInteger)storageId supportedFeaturesBitField:(NSUInteger)supportedFeaturesBitField storageType:(ArsdkFeatureUserStorageV2StorageType)storageType listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onCapabilities(storageId:supportedFeaturesBitField:storageType:listFlagsBitField:));

/**
 Describes user storage supported formatting types. When sent, it indicates that the `format_with_type` command is supported. If not sent, the `format_with_type` command is not supported. 

 - parameter storage_id: Id of the storage.
 - parameter supported_types: Supported formatting types.
 - parameter list_flags: 
*/
- (void)onSupportedFormattingTypes:(NSUInteger)storageId supportedTypesBitField:(NSUInteger)supportedTypesBitField listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onSupportedFormattingTypes(storageId:supportedTypesBitField:listFlagsBitField:));

/**
  

 - parameter storage_id: Id of the storage.
 - parameter step: The formatting step the format process is in.
 - parameter percentage: The progress of the current step expressed in percent.
 - parameter list_flags: 
*/
- (void)onFormatProgress:(NSUInteger)storageId step:(ArsdkFeatureUserStorageV2FormattingStep)step percentage:(NSUInteger)percentage listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onFormatProgress(storageId:step:percentage:listFlagsBitField:));

/**
  

 - parameter storage_id: Id of the storage.
 - parameter result: Result of the last transmitted password
 - parameter list_flags: 
*/
- (void)onDecryption:(NSUInteger)storageId result:(ArsdkFeatureUserStorageV2PasswordResult)result listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onDecryption(storageId:result:listFlagsBitField:));

/**
  

 - parameter storage_id: Id of the storage.
 - parameter uuid: Storage UUID
 - parameter list_flags: 
*/
- (void)onStorageUuid:(NSUInteger)storageId uuid:(NSString*)uuid listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onStorageUuid(storageId:uuid:listFlagsBitField:));


@end

@interface ArsdkFeatureUserStorageV2 : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureUserStorageV2Callback>)callback;

/**
 Start format operation on the media. This could imply its repartitioning if needed. Can be done in state `format_needed` or, if [capabilities](#166-8) contains `format_when_ready_allowed` also in state `ready`. 

 - parameter storage_id: Id of the storage.
 - parameter label: Label to set to the file system. If empty, label is set to the product name.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))formatEncoder:(NSUInteger)storageId label:(NSString*)label
NS_SWIFT_NAME(formatEncoder(storageId:label:));

/**
 Start monitoring operation of the media. 

 - parameter storage_id: Id of the storage.
 - parameter period: Period in seconds to send monitor events. If set to 0, period is set to default value (one second).
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startMonitoringEncoder:(NSUInteger)storageId period:(NSUInteger)period
NS_SWIFT_NAME(startMonitoringEncoder(storageId:period:));

/**
 Stop monitoring operation of the media. 

 - parameter storage_id: Id of the storage.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopMonitoringEncoder:(NSUInteger)storageId
NS_SWIFT_NAME(stopMonitoringEncoder(storageId:));

/**
 Start format operation on the media given a formatting type. This could imply its repartitioning if needed. Can be done in state `format_needed` or, if [capabilities](#166-8) contains `format_when_ready_allowed` also in state `ready`. 

 - parameter storage_id: Id of the storage.
 - parameter label: Label to set to the file system. If empty, label is set to the product name.
 - parameter type: Formatting type.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))formatWithTypeEncoder:(NSUInteger)storageId label:(NSString*)label type:(ArsdkFeatureUserStorageV2FormattingType)type
NS_SWIFT_NAME(formatWithTypeEncoder(storageId:label:type:));

/**
 Transmit password when needed for unlocking encrypted file system 

 - parameter storage_id: Id of the storage.
 - parameter password: Password used for SD encryption
 - parameter type: Reason of password requirement
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))encryptionPasswordEncoder:(NSUInteger)storageId password:(NSString*)password type:(ArsdkFeatureUserStorageV2PasswordUsage)type
NS_SWIFT_NAME(encryptionPasswordEncoder(storageId:password:type:));

/**
 Start format operation for encryption of the media with the given password 

 - parameter storage_id: Id of the storage.
 - parameter label: Label to set to the file system. If empty, label is set to the product name.
 - parameter password: Password used for SD card encryption
 - parameter type: Formatting type.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))formatWithEncryptionEncoder:(NSUInteger)storageId label:(NSString*)label password:(NSString*)password type:(ArsdkFeatureUserStorageV2FormattingType)type
NS_SWIFT_NAME(formatWithEncryptionEncoder(storageId:label:password:type:));

@end

