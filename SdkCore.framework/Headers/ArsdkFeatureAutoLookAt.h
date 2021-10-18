/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureAutoLookAtUid;

struct arsdk_cmd;

/** Mode of look at. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAutoLookAtMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAutoLookAtModeSdkCoreUnknown = -1,

    /** No look at. */
    ArsdkFeatureAutoLookAtModeNone = 0,

    /** Look at the target without moving automatically. */
    ArsdkFeatureAutoLookAtModeTarget = 1,

    /** Look at the pilot without moving automatically.
Animations are available. */
    ArsdkFeatureAutoLookAtModePilot = 2,

};
#define ArsdkFeatureAutoLookAtModeCnt 3

/** Indicators needed to start or improve the look at. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAutoLookAtIndicator) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAutoLookAtIndicatorSdkCoreUnknown = -1,

    /** Drone gps is not fixed. */
    ArsdkFeatureAutoLookAtIndicatorDroneGps = 0,

    /** Drone magneto is not valid. */
    ArsdkFeatureAutoLookAtIndicatorDroneMagneto = 1,

    /** Drone is out of geofence. */
    ArsdkFeatureAutoLookAtIndicatorDroneGeofence = 2,

    /** Drone is under min altitude. */
    ArsdkFeatureAutoLookAtIndicatorDroneMinAltitude = 3,

    /** Drone is above max altitude. */
    ArsdkFeatureAutoLookAtIndicatorDroneMaxAltitude = 4,

    /** Drone is not flying. */
    ArsdkFeatureAutoLookAtIndicatorDroneFlying = 5,

    /** Target position has a bad accuracy. */
    ArsdkFeatureAutoLookAtIndicatorTargetPositionAccuracy = 6,

    /** Target image detection is not working. */
    ArsdkFeatureAutoLookAtIndicatorTargetImageDetection = 7,

    /** Drone is too close to target. */
    ArsdkFeatureAutoLookAtIndicatorDroneTargetDistanceMin = 8,

    /** Drone is too far from target. */
    ArsdkFeatureAutoLookAtIndicatorDroneTargetDistanceMax = 9,

    /** Target horizontal speed is too high. */
    ArsdkFeatureAutoLookAtIndicatorTargetHorizSpeed = 10,

    /** Target vertical speed is too high. */
    ArsdkFeatureAutoLookAtIndicatorTargetVertSpeed = 11,

    /** Target altitude has a bad accuracy. */
    ArsdkFeatureAutoLookAtIndicatorTargetAltitudeAccuracy = 12,

};
#define ArsdkFeatureAutoLookAtIndicatorCnt 13

@interface ArsdkFeatureAutoLookAtIndicatorBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAutoLookAtIndicator)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAutoLookAtIndicator val))cb;

@end

/** Behavior. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAutoLookAtBehavior) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAutoLookAtBehaviorSdkCoreUnknown = -1,

    /** Drone is not looking at the target. */
    ArsdkFeatureAutoLookAtBehaviorIdle = 0,

    /** Look at the target. */
    ArsdkFeatureAutoLookAtBehaviorLookAt = 1,

};
#define ArsdkFeatureAutoLookAtBehaviorCnt 2

@protocol ArsdkFeatureAutoLookAtCallback<NSObject>

@optional

/**
 Describes the missing inputs which prevent from starting a look at mode, and improvements 

 - parameter mode: Mode of look at.
 - parameter missing_inputs: List of missing requirements to enter this mode.
If at least one input is missing, drone won't be able to look at the target.
It won't use any fallback either.
 - parameter improvements: List of inputs that can improve the mode.
 - parameter list_flags: 
*/
- (void)onInfo:(ArsdkFeatureAutoLookAtMode)mode missingInputsBitField:(NSUInteger)missingInputsBitField improvementsBitField:(NSUInteger)improvementsBitField listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onInfo(mode:missingInputsBitField:improvementsBitField:listFlagsBitField:));

/**
 State of the look at. 

 - parameter mode: Current mode.
 - parameter behavior: Current behavior.
*/
- (void)onState:(ArsdkFeatureAutoLookAtMode)mode behavior:(ArsdkFeatureAutoLookAtBehavior)behavior
NS_SWIFT_NAME(onState(mode:behavior:));


@end

@interface ArsdkFeatureAutoLookAt : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureAutoLookAtCallback>)callback;

/**
 Start a look at. Sending this command will stop other running look at. 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startEncoder:(ArsdkFeatureAutoLookAtMode)mode
NS_SWIFT_NAME(startEncoder(mode:));

/**
 Stop current look at. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopEncoder
NS_SWIFT_NAME(stopEncoder());

@end

