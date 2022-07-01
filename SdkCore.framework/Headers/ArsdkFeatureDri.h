/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureDriUid;

struct arsdk_cmd;

/** The DRI mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureDriMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDriModeSdkCoreUnknown = -1,

    /** DRI mode is disabled */
    ArsdkFeatureDriModeDisabled = 0,

    /** DRI mode is enabled */
    ArsdkFeatureDriModeEnabled = 1,

};
#define ArsdkFeatureDriModeCnt 2

/** Supported capabilities */
typedef NS_ENUM(NSInteger, ArsdkFeatureDriSupportedCapabilities) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDriSupportedCapabilitiesSdkCoreUnknown = -1,

    /** Possibility to enable or disable the DRI Mode */
    ArsdkFeatureDriSupportedCapabilitiesOnOff = 0,

    /** French DRI regulation is supported */
    ArsdkFeatureDriSupportedCapabilitiesFrenchRegulation = 1,

    /** EN 4709-002 DRI regulation is supported */
    ArsdkFeatureDriSupportedCapabilitiesEn4709_002Regulation = 2,

};
#define ArsdkFeatureDriSupportedCapabilitiesCnt 3

@interface ArsdkFeatureDriSupportedCapabilitiesBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureDriSupportedCapabilities)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^)(ArsdkFeatureDriSupportedCapabilities val))cb;

@end

/** drone ID type */
typedef NS_ENUM(NSInteger, ArsdkFeatureDriIdType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDriIdTypeSdkCoreUnknown = -1,

    /** French 30 bytes format */
    ArsdkFeatureDriIdTypeFr30Octets = 0,

    /** ANSI CTA 2063 format on 40 bytes */
    ArsdkFeatureDriIdTypeAnsiCta2063 = 1,

};
#define ArsdkFeatureDriIdTypeCnt 2

/** DRI Type */
typedef NS_ENUM(NSInteger, ArsdkFeatureDriDriType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDriDriTypeSdkCoreUnknown = -1,

    /** DRI wifi beacon respects the french regulation */
    ArsdkFeatureDriDriTypeFrench = 0,

    /** DRI wifi beacon respects the EN4709-002 european regulation */
    ArsdkFeatureDriDriTypeEn4709_002 = 1,

};
#define ArsdkFeatureDriDriTypeCnt 2

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureDriStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDriStatusSdkCoreUnknown = -1,

    /** A failure happened during the command execution */
    ArsdkFeatureDriStatusFailure = 0,

    /** The related command successfully completed */
    ArsdkFeatureDriStatusSuccess = 1,

    /** DRI id is missing or was malformed */
    ArsdkFeatureDriStatusInvalidId = 2,

};
#define ArsdkFeatureDriStatusCnt 3

@protocol ArsdkFeatureDriCallback<NSObject>

@optional

/**
  

 - parameter supported_capabilities: Supported capabilities.
*/
- (void)onCapabilities:(NSUInteger)supportedCapabilitiesBitField
NS_SWIFT_NAME(onCapabilities(supportedCapabilitiesBitField:));

/**
  

 - parameter mode: 
*/
- (void)onDriState:(ArsdkFeatureDriMode)mode
NS_SWIFT_NAME(onDriState(mode:));

/**
  

 - parameter type: 
 - parameter value: 
*/
- (void)onDroneId:(ArsdkFeatureDriIdType)type value:(NSString *)value
NS_SWIFT_NAME(onDroneId(type:value:));

/**
  

 - parameter id: The ID related to the DRI type as stored by the drone.
For EN4709-002 type, it will not include the hyphen and
the 3 secure characters which are only used to verify the ID consistency.
 - parameter type: The DRI type the DRI system is configured with.
 - parameter status: The current status of the DRI configuration.
*/
- (void)onDriType:(NSString *)id type:(ArsdkFeatureDriDriType)type status:(ArsdkFeatureDriStatus)status
NS_SWIFT_NAME(onDriType(id:type:status:));


@end

@interface ArsdkFeatureDri : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureDriCallback>)callback;

/**
 Set DRI mode. 

 - parameter mode: Mode asked by user
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))driModeEncoder:(ArsdkFeatureDriMode)mode
NS_SWIFT_NAME(driModeEncoder(mode:));

/**
 Set DRI type 

 - parameter type: DRI type.
 - parameter id: Complete ID related to the DRI type. It can be empty if not required.
For EN4709 type, it should include the 3 secure characters (and the hyphen).
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setDriTypeEncoder:(ArsdkFeatureDriDriType)type id:(NSString *)id
NS_SWIFT_NAME(setDriTypeEncoder(type:id:));

@end

