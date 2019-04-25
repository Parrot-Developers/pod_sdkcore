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

    /** The drone will return to the takeoff location */
    ArsdkFeatureRthHomeTypeTakeoff = 1,

    /** The drone will return to the followee position */
    ArsdkFeatureRthHomeTypeFollowee = 2,

    /** The drone will return to a custom location */
    ArsdkFeatureRthHomeTypeCustom = 3,

};
#define ArsdkFeatureRthHomeTypeCnt 4

@interface ArsdkFeatureRthHomeTypeBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureRthHomeType)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureRthHomeType val))cb;

@end

/** Altitude reference */
typedef NS_ENUM(NSInteger, ArsdkFeatureRthAltitudeReference) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRthAltitudeReferenceSdkCoreUnknown = -1,

    /** Altitude is not meaningful */
    ArsdkFeatureRthAltitudeReferenceNone = 0,

    /** Altitude is relative to sea level */
    ArsdkFeatureRthAltitudeReferenceAboveSeaLevel = 1,

    /** Altitude is relative to take off */
    ArsdkFeatureRthAltitudeReferenceAboveTakeOff = 2,

};
#define ArsdkFeatureRthAltitudeReferenceCnt 3

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

};
#define ArsdkFeatureRthStateReasonCnt 7

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

/** Home reachability */
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

@protocol ArsdkFeatureRthCallback<NSObject>

@optional

/**
  

 - parameter values: Bitfield of suported home types.
*/
- (void)onHomeTypeCapabilities:(NSUInteger)valuesBitField
NS_SWIFT_NAME(onHomeTypeCapabilities(valuesBitField:));

/**
  

 - parameter type: Home type.
*/
- (void)onHomeType:(ArsdkFeatureRthHomeType)type
NS_SWIFT_NAME(onHomeType(type:));

/**
  

 - parameter latitude: Latitude of the takeoff location
 - parameter longitude: Longitude of the takeoff location
 - parameter fixedBeforeTakeoff: 1 if the location was acquired before the takeoff. 0 if it was acquired during the flight (i.e. is it
the first fix location).
*/
- (void)onTakeoffLocation:(double)latitude longitude:(double)longitude fixedbeforetakeoff:(NSUInteger)fixedbeforetakeoff
NS_SWIFT_NAME(onTakeoffLocation(latitude:longitude:fixedbeforetakeoff:));

/**
  

 - parameter latitude: Latitude of the custom location
 - parameter longitude: Longitude of the custom location
 - parameter altitude_reference: Reference of the altitude, `none` if altitude is not given.
 - parameter altitude: Altitude of the custom location.
Only valid if `altitude_reference` is not `none`.
*/
- (void)onCustomLocation:(double)latitude longitude:(double)longitude altitudeReference:(ArsdkFeatureRthAltitudeReference)altitudeReference altitude:(double)altitude
NS_SWIFT_NAME(onCustomLocation(latitude:longitude:altitudeReference:altitude:));

/**
  

 - parameter latitude: Latitude of the takeoff location
 - parameter longitude: Longitude of the takeoff location
 - parameter altitude_reference: Reference of the altitude, `none` if altitude is not given.
 - parameter altitude: Altitude of the custom location.
Only valid if `altitude_reference` is not `none`.
*/
- (void)onFolloweeLocation:(double)latitude longitude:(double)longitude altitudeReference:(ArsdkFeatureRthAltitudeReference)altitudeReference altitude:(double)altitude
NS_SWIFT_NAME(onFolloweeLocation(latitude:longitude:altitudeReference:altitude:));

/**
 Return home trigger delay. This delay represents the time after which the return home is automatically triggered after a disconnection. 

 - parameter delay: Delay in second
 - parameter min: Min delay in second
 - parameter max: Max delay in second
*/
- (void)onReturnHomeDelay:(NSUInteger)delay min:(NSUInteger)min max:(NSUInteger)max
NS_SWIFT_NAME(onReturnHomeDelay(delay:min:max:));

/**
 Return home state.
Availability is related to gps fix, magnetometer calibration. 

 - parameter state: State of the return to home
 - parameter reason: Reason of the state change
*/
- (void)onState:(ArsdkFeatureRthState)state reason:(ArsdkFeatureRthStateReason)reason
NS_SWIFT_NAME(onState(state:reason:));

/**
 Home reachability status. 

 - parameter status: State of the return to home
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


@end

@interface ArsdkFeatureRth : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureRthCallback>)callback;

/**
 Set the home to the takeoff location. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setHomeToTakeoffLocationEncoder
NS_SWIFT_NAME(setHomeToTakeoffLocationEncoder());

/**
 Set the home to a custom location. 

 - parameter latitude: Latitude of the takeoff location
 - parameter longitude: Longitude of the takeoff location
 - parameter altitude_reference: Reference of the altitude, `none` if altitude is not given.
 - parameter altitude: Altitude of the custom location.
Only valid if `altitude_reference` is not `none`.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setHomeToCustomLocationEncoder:(double)latitude longitude:(double)longitude altitudeReference:(ArsdkFeatureRthAltitudeReference)altitudeReference altitude:(double)altitude
NS_SWIFT_NAME(setHomeToCustomLocationEncoder(latitude:longitude:altitudeReference:altitude:));

/**
 Set the home to the followee location. Followee means the target of a FollowMe or LookAt with gps coordinates sent. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setHomeToFolloweeLocationEncoder
NS_SWIFT_NAME(setHomeToFolloweeLocationEncoder());

/**
 Set the delay after which the drone will automatically try to return home after a disconnection. 

 - parameter delay: Delay in second
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setReturnHomeDelayEncoder:(NSUInteger)delay
NS_SWIFT_NAME(setReturnHomeDelayEncoder(delay:));

/**
 Return home.
Ask the drone to fly to its home position.
Please note that the drone will wait to be hovering to start its return home. This means that it will wait to have a [flag](#1-0-2) set at 0. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))returnToHomeEncoder
NS_SWIFT_NAME(returnToHomeEncoder());

/**
 Abort a currently executing return to home. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))abortEncoder
NS_SWIFT_NAME(abortEncoder());

/**
 Cancel any current return home auto trigger. This command has no effect if there is no auto trigger currently planned (i.e. reason of [RTH auto trigger](#146-15) is `none`). 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))cancelAutoTriggerEncoder
NS_SWIFT_NAME(cancelAutoTriggerEncoder());

@end

