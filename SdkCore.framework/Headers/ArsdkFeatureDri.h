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

};
#define ArsdkFeatureDriSupportedCapabilitiesCnt 1

@interface ArsdkFeatureDriSupportedCapabilitiesBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureDriSupportedCapabilities)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureDriSupportedCapabilities val))cb;

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
- (void)onDroneId:(ArsdkFeatureDriIdType)type value:(NSString*)value
NS_SWIFT_NAME(onDroneId(type:value:));


@end

@interface ArsdkFeatureDri : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureDriCallback>)callback;

/**
 Set DRI mode. 

 - parameter mode: Mode asked by user
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))driModeEncoder:(ArsdkFeatureDriMode)mode
NS_SWIFT_NAME(driModeEncoder(mode:));

@end

