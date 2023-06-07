/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureRcUid;

struct arsdk_cmd;

/** RC Receiver state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRcReceiverState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRcReceiverStateSdkCoreUnknown = -1,

    /** RC drone receiver connected to a RC. */
    ArsdkFeatureRcReceiverStateConnected = 0,

    /** RC drone receiver not connected to a RC. */
    ArsdkFeatureRcReceiverStateDisconnected = 1,

};
#define ArsdkFeatureRcReceiverStateCnt 2

/** Channel action. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRcChannelAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRcChannelActionSdkCoreUnknown = -1,

    /** Invalid/Unused channel. */
    ArsdkFeatureRcChannelActionInvalid = 0,

    /** Roll axis channel. */
    ArsdkFeatureRcChannelActionRoll = 1,

    /** Pitch axis channel. */
    ArsdkFeatureRcChannelActionPitch = 2,

    /** Yaw axis channel. */
    ArsdkFeatureRcChannelActionYaw = 3,

    /** Gaz / Throttle / Altitude axis channel. */
    ArsdkFeatureRcChannelActionGaz = 4,

    /** Takeoff / Land channel. */
    ArsdkFeatureRcChannelActionTakeoffLand = 5,

    /** Emergency channel. */
    ArsdkFeatureRcChannelActionEmergency = 6,

    /** Return Home channel. */
    ArsdkFeatureRcChannelActionReturnHome = 7,

    /** RC Piloting mode.
Auto mode: used for doing flightplans and for assisted flying
with a non-RC controller.
Easy manual mode: used for assisted flying with a RC controller.
Manual mode: used for non-assisted flying with a RC controller and
for directly controlling the servomotors. */
    ArsdkFeatureRcChannelActionPilotingMode = 8,

    /** RC take control.
When take control is activated the RC controller, if
available, becomes the main controller. */
    ArsdkFeatureRcChannelActionTakeControl = 9,

};
#define ArsdkFeatureRcChannelActionCnt 10

@interface ArsdkFeatureRcChannelActionBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureRcChannelAction)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureRcChannelAction val))cb;

@end

/** Calibration type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRcCalibrationType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRcCalibrationTypeSdkCoreUnknown = -1,

    /** No calibration. */
    ArsdkFeatureRcCalibrationTypeNone = 0,

    /** All neutral channels calibration. */
    ArsdkFeatureRcCalibrationTypeNeutral = 1,

    /** Min/Max specific channel calibration. */
    ArsdkFeatureRcCalibrationTypeMinMax = 2,

};
#define ArsdkFeatureRcCalibrationTypeCnt 3

/** Channel physical type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRcChannelType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRcChannelTypeSdkCoreUnknown = -1,

    /** Invalid channel physical type. */
    ArsdkFeatureRcChannelTypeInvalid = 0,

    /** Signed axis type. */
    ArsdkFeatureRcChannelTypeSignedAxis = 1,

    /** Unsigned axis type. */
    ArsdkFeatureRcChannelTypeUnsignedAxis = 2,

    /** Monostable button type. */
    ArsdkFeatureRcChannelTypeMonostableButton = 3,

    /** Bistable button type. */
    ArsdkFeatureRcChannelTypeBistableButton = 4,

    /** Tristate button type. */
    ArsdkFeatureRcChannelTypeTristateButton = 5,

    /** Rotary button type. */
    ArsdkFeatureRcChannelTypeRotaryButton = 6,

};
#define ArsdkFeatureRcChannelTypeCnt 7

@interface ArsdkFeatureRcChannelTypeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureRcChannelType)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureRcChannelType val))cb;

@end

@protocol ArsdkFeatureRcCallback<NSObject>

@optional

/**
 State of drone RC receiver 

 - parameter state: current state.
 - parameter protocol: Protocol used by RC.
 - parameter enabled: 1 if enabled, 0 otherwise.
If enabled, drone will apply values sent by RC receiver.
*/
- (void)onReceiverState:(ArsdkFeatureRcReceiverState)state protocol:(nonnull NSString *)protocol enabled:(NSUInteger)enabled
NS_SWIFT_NAME(onReceiverState(state:protocol:enabled:));

/**
 RC Channel monitor state sent by drone 

 - parameter state: 1 if enabled, 0 if disabled
*/
- (void)onChannelsMonitorState:(NSUInteger)state
NS_SWIFT_NAME(onChannelsMonitorState(state:));

/**
 RC Channel value sent by drone 

 - parameter id: RC channel id.
 - parameter action: RC channel action.
 - parameter value: RC channel value.
 - parameter list_flags: Item attribute Bitfield.
First: indicate it's the first element of the list.
Last: indicate it's the last element of the list.
*/
- (void)onChannelValue:(NSUInteger)id action:(ArsdkFeatureRcChannelAction)action value:(NSInteger)value listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onChannelValue(id:action:value:listFlagsBitField:));

/**
 RC Channels calibration state sent by drone. 

 - parameter calibration_type: Current calibration type
set to 'none' if no calibration in progress.
 - parameter channel_action: Current channel action calibration
Only used when calibration_type=min_max.
 - parameter required: bitfield of required channel actions.
Neutral channels calibration is always required.
 - parameter calibrated: bitfield of calibrated channel actions.
 - parameter neutral_calibrated: 1 if neutral channels are calibrated, 0 otherwise.
*/
- (void)onCalibrationState:(ArsdkFeatureRcCalibrationType)calibrationType channelAction:(ArsdkFeatureRcChannelAction)channelAction requiredBitField:(NSUInteger)requiredBitField calibratedBitField:(NSUInteger)calibratedBitField neutralCalibrated:(NSUInteger)neutralCalibrated
NS_SWIFT_NAME(onCalibrationState(calibrationType:channelAction:requiredBitField:calibratedBitField:neutralCalibrated:));

/**
 Channel action supported by drone. 

 - parameter action: Channel action.
 - parameter supported_type: Bitfield of supported channel types.
 - parameter calibrated_type: Calibrated action channel type (none if not calibrated).
 - parameter inverted: 1 if inverted, 0 otherwise.
*/
- (void)onChannelActionItem:(ArsdkFeatureRcChannelAction)action supportedTypeBitField:(NSUInteger)supportedTypeBitField calibratedType:(ArsdkFeatureRcChannelType)calibratedType inverted:(NSUInteger)inverted
NS_SWIFT_NAME(onChannelActionItem(action:supportedTypeBitField:calibratedType:inverted:));


@end

@interface ArsdkFeatureRc : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureRcCallback>)callback;

/**
 Enable or Disable RC channels monitoring.
If enable, drone will send periodically rc channel value
events. 

 - parameter enable: 1 for enable / 0 to disable
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))monitorChannelsEncoder:(NSUInteger)enable
NS_SWIFT_NAME(monitorChannelsEncoder(enable:));

/**
 Start a calibration. 

 - parameter calibration_type: Type of calibration.
 - parameter channel_action: Channel action.
only used when calibration_type=min_max.
 - parameter channel_type: Channel type.
only used when calibration_type=min_max.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startCalibrationEncoder:(ArsdkFeatureRcCalibrationType)calibrationType channelAction:(ArsdkFeatureRcChannelAction)channelAction channelType:(ArsdkFeatureRcChannelType)channelType
NS_SWIFT_NAME(startCalibrationEncoder(calibrationType:channelAction:channelType:));

/**
 Invert a RC channel values 

 - parameter action: Channel action.
 - parameter flag: 1 to invert channel 0 to restore channel.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))invertChannelEncoder:(ArsdkFeatureRcChannelAction)action flag:(NSUInteger)flag
NS_SWIFT_NAME(invertChannelEncoder(action:flag:));

/**
 Abort current calibration. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))abortCalibrationEncoder
NS_SWIFT_NAME(abortCalibrationEncoder());

/**
 Reset calibration to default values. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))resetCalibrationEncoder
NS_SWIFT_NAME(resetCalibrationEncoder());

/**
 Enable or disable RC receiver.
If enable, drone will apply values sent by RC receiver. 

 - parameter enable: 1 for enable / 0 to disable
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))enableReceiverEncoder:(NSUInteger)enable
NS_SWIFT_NAME(enableReceiverEncoder(enable:));

@end

