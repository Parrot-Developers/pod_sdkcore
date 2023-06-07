/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureLedsUid;

struct arsdk_cmd;

/** Switch state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureLedsSwitchState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureLedsSwitchStateSdkCoreUnknown = -1,

    /** Switch is off. */
    ArsdkFeatureLedsSwitchStateOff = 0,

    /** Switch is on. */
    ArsdkFeatureLedsSwitchStateOn = 1,

};
#define ArsdkFeatureLedsSwitchStateCnt 2

/** Supported capabilites */
typedef NS_ENUM(NSInteger, ArsdkFeatureLedsSupportedCapabilities) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureLedsSupportedCapabilitiesSdkCoreUnknown = -1,

    /** Possibility to activate or deactivate the switch */
    ArsdkFeatureLedsSupportedCapabilitiesOnOff = 0,

};
#define ArsdkFeatureLedsSupportedCapabilitiesCnt 1

@interface ArsdkFeatureLedsSupportedCapabilitiesBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureLedsSupportedCapabilities)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureLedsSupportedCapabilities val))cb;

@end

@protocol ArsdkFeatureLedsCallback<NSObject>

@optional

/**
  

 - parameter supported_capabilities: Supported capabilities.
*/
- (void)onCapabilities:(NSUInteger)supportedCapabilitiesBitField
NS_SWIFT_NAME(onCapabilities(supportedCapabilitiesBitField:));

/**
  

 - parameter switch_state: Switch state.
*/
- (void)onSwitchState:(ArsdkFeatureLedsSwitchState)switchState
NS_SWIFT_NAME(onSwitchState(switchState:));


@end

@interface ArsdkFeatureLeds : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureLedsCallback>)callback;

/**
 Activate switch 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))activateEncoder
NS_SWIFT_NAME(activateEncoder());

/**
 Deactivate switch 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))deactivateEncoder
NS_SWIFT_NAME(deactivateEncoder());

@end

