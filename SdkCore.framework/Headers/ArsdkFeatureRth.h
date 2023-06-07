/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureRthUid;

struct arsdk_cmd;

/** Home type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthHomeType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthHomeTypeSdkCoreUnknown = -1,

    /** No home type. This might be because the drone does not have a gps fix */
    ArsdkFeatureRthHomeTypeNone = 0,

    /** The drone will return to the last manual takeoff location */
    ArsdkFeatureRthHomeTypeTakeoff = 1,

    /** The drone will return to the followee position */
    ArsdkFeatureRthHomeTypeFollowee = 2,

    /** The drone will return to a user-set custom location */
    ArsdkFeatureRthHomeTypeCustom = 3,

    /** The drone will return to the pilot position */
    ArsdkFeatureRthHomeTypePilot = 4,

};
#define ArsdkFeatureRthHomeTypeCnt 5

@interface ArsdkFeatureRthHomeTypeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureRthHomeType)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureRthHomeType val))cb;

@end

/** State of return to home */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthStateSdkCoreUnknown = -1,

    /** Return to home is available */
    ArsdkFeatureRthStateAvailable = 0,

    /** Return to home is in progress */
    ArsdkFeatureRthStateInProgress = 1,

    /** Return to home is not available */
    ArsdkFeatureRthStateUnavailable = 2,

    /** Return to home has been received, but its process is pending */
    ArsdkFeatureRthStatePending = 3,

};
#define ArsdkFeatureRthStateCnt 4

/** Reason of the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthStateReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthStateReasonSdkCoreUnknown = -1,

    /** User requested a return to home (available->in_progress) */
    ArsdkFeatureRthStateReasonUserRequest = 0,

    /** Connection between controller and product lost (available->in_progress) */
    ArsdkFeatureRthStateReasonConnectionLost = 1,

    /** Low battery occurred (available->in_progress) */
    ArsdkFeatureRthStateReasonLowBattery = 2,

    /** Return to home is finished (in_progress->available) */
    ArsdkFeatureRthStateReasonFinished = 3,

    /** Return to home has been stopped (in_progress->available) */
    ArsdkFeatureRthStateReasonStopped = 4,

    /** Return to home disabled by product (in_progress->unavailable or available->unavailable) */
    ArsdkFeatureRthStateReasonDisabled = 5,

    /** Return to home enabled by product (unavailable->available) */
    ArsdkFeatureRthStateReasonEnabled = 6,

    /** Return to home during a flightplan (available->in_progress) */
    ArsdkFeatureRthStateReasonFlightplan = 7,

    /** Return to home could not find a path to home (in_progress->available) */
    ArsdkFeatureRthStateReasonBlocked = 8,

    /** Return to home triggered by propeller icing event (available->in_progress) */
    ArsdkFeatureRthStateReasonIcing = 9,

    /** Return to home triggered by battery lost comm event (available->in_progress) */
    ArsdkFeatureRthStateReasonBatteryLostComm = 10,

};
#define ArsdkFeatureRthStateReasonCnt 11

/** Home reachability */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthHomeReachability) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthHomeReachabilitySdkCoreUnknown = -1,

    /** Home reachability is unknown */
    ArsdkFeatureRthHomeReachabilityUnknown = 0,

    /** Home is reachable */
    ArsdkFeatureRthHomeReachabilityReachable = 1,

    /** Home is still reachable but won't be if rth is not triggered now.
If rth is running, cancelling it will probably make the home not reachable. */
    ArsdkFeatureRthHomeReachabilityCritical = 2,

    /** Home is not reachable */
    ArsdkFeatureRthHomeReachabilityNotReachable = 3,

};
#define ArsdkFeatureRthHomeReachabilityCnt 4

/** RTH auto-trigger reason */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthAutoTriggerReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthAutoTriggerReasonSdkCoreUnknown = -1,

    /** There is no return home auto trigger planned. */
    ArsdkFeatureRthAutoTriggerReasonNone = 0,

    /** Battery will soon be critical. */
    ArsdkFeatureRthAutoTriggerReasonBatteryCriticalSoon = 1,

};
#define ArsdkFeatureRthAutoTriggerReasonCnt 2

/** RTH auto-trigger mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthAutoTriggerMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthAutoTriggerModeSdkCoreUnknown = -1,

    /** Auto trigger is off. RTH auto trigger will never occur. */
    ArsdkFeatureRthAutoTriggerModeOff = 0,

    /** Auto trigger is on. */
    ArsdkFeatureRthAutoTriggerModeOn = 1,

};
#define ArsdkFeatureRthAutoTriggerModeCnt 2

/** RTH ending behavior action. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthEndingBehavior) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthEndingBehaviorSdkCoreUnknown = -1,

    /** The RTH end behavior is landing */
    ArsdkFeatureRthEndingBehaviorLanding = 0,

    /** The RTH end behavior is hovering */
    ArsdkFeatureRthEndingBehaviorHovering = 1,

};
#define ArsdkFeatureRthEndingBehaviorCnt 2

/** Indicators needed to start return home. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthIndicator) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthIndicatorSdkCoreUnknown = -1,

    /** Drone gps is not fixed. */
    ArsdkFeatureRthIndicatorDroneGps = 0,

    /** Drone magneto is not valid. */
    ArsdkFeatureRthIndicatorDroneMagneto = 1,

    /** Drone is out of geofence.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorDroneGeofence = 2,

    /** Drone is under min altitude.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorDroneMinAltitude = 3,

    /** Drone is above max altitude.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorDroneMaxAltitude = 4,

    /** Drone is not flying. */
    ArsdkFeatureRthIndicatorDroneFlying = 5,

    /** Target position has a bad accuracy.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorTargetPositionAccuracy = 6,

    /** Target image detection is not working.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorTargetImageDetection = 7,

    /** Drone is too close to target.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorDroneTargetDistanceMin = 8,

    /** Drone is too far from target.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorDroneTargetDistanceMax = 9,

    /** Target horizontal speed is too high.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorTargetHorizSpeed = 10,

    /** Target vertical speed is too high.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorTargetVertSpeed = 11,

    /** Target altitude has a bad accuracy.
Not applicable to Return home. */
    ArsdkFeatureRthIndicatorTargetAltitudeAccuracy = 12,

    /** Drone battery is insufficient. */
    ArsdkFeatureRthIndicatorDroneBattery = 13,

    /** Drone is not in a valid state. */
    ArsdkFeatureRthIndicatorDroneState = 14,

};
#define ArsdkFeatureRthIndicatorCnt 15

@interface ArsdkFeatureRthIndicatorBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureRthIndicator)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureRthIndicator val))cb;

@end

@protocol ArsdkFeatureRthCallback<NSObject>

@optional

/**
  

 - parameter values: Bitfield of supported home types.
*/
- (void)onHomeTypeCapabilities:(NSUInteger)valuesBitField
NS_SWIFT_NAME(onHomeTypeCapabilities(valuesBitField:));

/**
  

 - parameter type: Home type.
*/
- (void)onHomeType:(ArsdkFeatureRthHomeType)type
NS_SWIFT_NAME(onHomeType(type:));

/**
 Preferred home type. Please note that this is only a user preference. The actual type chosen is given by the event [home_type](#146-2). 

 - parameter type: Preferred Home type.
*/
- (void)onPreferredHomeType:(ArsdkFeatureRthHomeType)type
NS_SWIFT_NAME(onPreferredHomeType(type:));

/**
  

 - parameter latitude: Latitude of the takeoff location
 - parameter longitude: Longitude of the takeoff location
 - parameter altitude: Altitude of the takeoff home location above takeoff (ATO).
 - parameter fixed_before_takeoff: 1 if the location was acquired before the takeoff. 0 if it was acquired during the flight (i.e. is it
the first fix location).
*/
- (void)onTakeoffLocation:(double)latitude longitude:(double)longitude altitude:(float)altitude fixedBeforeTakeoff:(NSUInteger)fixedBeforeTakeoff
NS_SWIFT_NAME(onTakeoffLocation(latitude:longitude:altitude:fixedBeforeTakeoff:));

/**
  

 - parameter latitude: Latitude of the custom location
 - parameter longitude: Longitude of the custom location
 - parameter altitude: Altitude of the custom location above takeoff (ATO).
*/
- (void)onCustomLocation:(double)latitude longitude:(double)longitude altitude:(float)altitude
NS_SWIFT_NAME(onCustomLocation(latitude:longitude:altitude:));

/**
  

 - parameter latitude: Latitude of the followee location
 - parameter longitude: Longitude of the followee location
 - parameter altitude: Altitude of the followee location above takeoff (ATO).
*/
- (void)onFolloweeLocation:(double)latitude longitude:(double)longitude altitude:(float)altitude
NS_SWIFT_NAME(onFolloweeLocation(latitude:longitude:altitude:));

/**
 Return home trigger delay. This delay represents the time after which the return home is automatically triggered after a disconnection. 

 - parameter delay: Delay in second
 - parameter min: Min delay in second
 - parameter max: Max delay in second
*/
- (void)onDelay:(NSUInteger)delay min:(NSUInteger)min max:(NSUInteger)max
NS_SWIFT_NAME(onDelay(delay:min:max:));

/**
 Return home state. Availability is related to gps fix, magnetometer calibration. 

 - parameter state: State of the return to home
 - parameter reason: Reason of the state change
*/
- (void)onState:(ArsdkFeatureRthState)state reason:(ArsdkFeatureRthStateReason)reason
NS_SWIFT_NAME(onState(state:reason:));

/**
 Home reachability status. 

 - parameter status: Status of the home reachability
*/
- (void)onHomeReachability:(ArsdkFeatureRthHomeReachability)status
NS_SWIFT_NAME(onHomeReachability(status:));

/**
 Return Home auto trigger information. 

 - parameter reason: Reason of the auto trigger.
 - parameter delay: Delay until the return home is automatically triggered by the drone, in seconds.
If reason is `none` this information has no meaning.
*/
- (void)onRthAutoTrigger:(ArsdkFeatureRthAutoTriggerReason)reason delay:(NSUInteger)delay
NS_SWIFT_NAME(onRthAutoTrigger(reason:delay:));

/**
 This altitude represents the minimum altitude used by the drone during the return home. 

 - parameter current: Minimum altitude used by the drone during RTH. This value is above takeoff (ATO)
 - parameter min: Range min of altitude
 - parameter max: Range max of altitude
*/
- (void)onMinAltitude:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMinAltitude(current:min:max:));

/**
  

 - parameter mode: RTH auto trigger mode.
*/
- (void)onAutoTriggerMode:(ArsdkFeatureRthAutoTriggerMode)mode
NS_SWIFT_NAME(onAutoTriggerMode(mode:));

/**
  

 - parameter ending_behavior: Ending behavior action
*/
- (void)onEndingBehavior:(ArsdkFeatureRthEndingBehavior)endingBehavior
NS_SWIFT_NAME(onEndingBehavior(endingBehavior:));

/**
 This altitude represents the altitude for the hovering at the end of rth. It is only used when ending_behavior is set to hovering. 

 - parameter current: Altitude used by the drone when hovering at the end of return home.
This end altitude is AGL (above ground level).
 - parameter min: Range min of altitude
 - parameter max: Range max of altitude
*/
- (void)onEndingHoveringAltitude:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onEndingHoveringAltitude(current:min:max:));

/**
 Describes the missing requirements to start a return home. 

 - parameter missing_inputs: List of missing requirements to activate return home.
If at least one input is missing, drone won't be able to return home.
*/
- (void)onInfo:(NSUInteger)missingInputsBitField
NS_SWIFT_NAME(onInfo(missingInputsBitField:));


@end

@interface ArsdkFeatureRth : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureRthCallback>)callback;

/**
 Set the preferred home location type. The drone will always choose this home type when available. 

 - parameter type: Preferred home type.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setPreferredHomeTypeEncoder:(ArsdkFeatureRthHomeType)type
NS_SWIFT_NAME(setPreferredHomeTypeEncoder(type:));

/**
 Set the custom location. 

 - parameter latitude: Latitude of the custom location
 - parameter longitude: Longitude of the custom location
 - parameter altitude: Altitude of the custom location above takeoff (ATO).
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setCustomLocationEncoder:(double)latitude longitude:(double)longitude altitude:(float)altitude
NS_SWIFT_NAME(setCustomLocationEncoder(latitude:longitude:altitude:));

/**
 Set the delay after which the drone will automatically try to return home after a disconnection. 

 - parameter delay: Delay in second
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setDelayEncoder:(NSUInteger)delay
NS_SWIFT_NAME(setDelayEncoder(delay:));

/**
 Return home. Ask the drone to fly to its home position. Please note that the drone will wait to be hovering to start its return home. This means that it will wait to have a [flag](#1-0-2) set at 0. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))returnToHomeEncoder
NS_SWIFT_NAME(returnToHomeEncoder());

/**
 Abort a currently executing return to home. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))abortEncoder
NS_SWIFT_NAME(abortEncoder());

/**
 Cancel any current return home auto trigger. This command has no effect if there is no auto trigger currently planned (i.e. reason of [rth_auto_trigger](#146-15) is `none`). 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))cancelAutoTriggerEncoder
NS_SWIFT_NAME(cancelAutoTriggerEncoder());

/**
 Set the return home minimum altitude. If the drone is below this altitude when starting its return home, it will first reach the minimum altitude. If it is higher than this minimum altitude, it will operate its return home at its current altitude. 

 - parameter altitude: Return home min altitude above takeoff (ATO).
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setMinAltitudeEncoder:(float)altitude
NS_SWIFT_NAME(setMinAltitudeEncoder(altitude:));

/**
 Set mode for auto trigger return home 

 - parameter mode: Mode asked by user
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setAutoTriggerModeEncoder:(ArsdkFeatureRthAutoTriggerMode)mode
NS_SWIFT_NAME(setAutoTriggerModeEncoder(mode:));

/**
 Choose ending behavior action for RTH. 

 - parameter ending_behavior: Ending behavior action
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setEndingBehaviorEncoder:(ArsdkFeatureRthEndingBehavior)endingBehavior
NS_SWIFT_NAME(setEndingBehaviorEncoder(endingBehavior:));

/**
 Set the return home ending hovering altitude. If the ending behavior action is set to `hovering`, Use this altitude. 

 - parameter altitude: Altitude used by the drone when hovering at the end of return home.
This end altitude is AGL (above ground level).
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setEndingHoveringAltitudeEncoder:(float)altitude
NS_SWIFT_NAME(setEndingHoveringAltitudeEncoder(altitude:));

@end

