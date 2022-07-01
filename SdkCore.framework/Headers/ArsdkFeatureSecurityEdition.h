/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSecurityEditionUid;

struct arsdk_cmd;

/** Log storage state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureSecurityEditionLogStorageState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSecurityEditionLogStorageStateSdkCoreUnknown = -1,

    /** Log storage is disabled */
    ArsdkFeatureSecurityEditionLogStorageStateDisabled = 0,

    /** Log storage is enabled */
    ArsdkFeatureSecurityEditionLogStorageStateEnabled = 1,

};
#define ArsdkFeatureSecurityEditionLogStorageStateCnt 2

/** Supported capabilities */
typedef NS_ENUM(NSInteger, ArsdkFeatureSecurityEditionSupportedCapabilities) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSecurityEditionSupportedCapabilitiesSdkCoreUnknown = -1,

    /** Possibility to deactivate the logs */
    ArsdkFeatureSecurityEditionSupportedCapabilitiesDeactivateLogs = 0,

};
#define ArsdkFeatureSecurityEditionSupportedCapabilitiesCnt 1

@interface ArsdkFeatureSecurityEditionSupportedCapabilitiesBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureSecurityEditionSupportedCapabilities)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^)(ArsdkFeatureSecurityEditionSupportedCapabilities val))cb;

@end

@protocol ArsdkFeatureSecurityEditionCallback<NSObject>

@optional

/**
  

 - parameter supported_capabilities: Supported capabilities.
*/
- (void)onCapabilities:(NSUInteger)supportedCapabilitiesBitField
NS_SWIFT_NAME(onCapabilities(supportedCapabilitiesBitField:));

/**
  

 - parameter log_storage_state: Logs state.
*/
- (void)onLogStorageState:(ArsdkFeatureSecurityEditionLogStorageState)logStorageState
NS_SWIFT_NAME(onLogStorageState(logStorageState:));


@end

@interface ArsdkFeatureSecurityEdition : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSecurityEditionCallback>)callback;

/**
 Deactivate logs. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))deactivateLogsEncoder
NS_SWIFT_NAME(deactivateLogsEncoder());

@end

