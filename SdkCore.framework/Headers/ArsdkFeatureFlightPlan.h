/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureFlightPlanUid;

struct arsdk_cmd;

/** Indicators needed to start flight plan. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFlightPlanIndicator) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFlightPlanIndicatorSdkCoreUnknown = -1,

    /** Drone gps is not fixed. */
    ArsdkFeatureFlightPlanIndicatorDroneGps = 0,

    /** Drone magneto is not valid. */
    ArsdkFeatureFlightPlanIndicatorDroneMagneto = 1,

    /** Drone is out of geofence.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorDroneGeofence = 2,

    /** Drone is under min altitude.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorDroneMinAltitude = 3,

    /** Drone is above max altitude.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorDroneMaxAltitude = 4,

    /** Drone is not flying.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorDroneFlying = 5,

    /** Target position has a bad accuracy.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorTargetPositionAccuracy = 6,

    /** Target image detection is not working.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorTargetImageDetection = 7,

    /** Drone is too close to target.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorDroneTargetDistanceMin = 8,

    /** Drone is too far from target.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorDroneTargetDistanceMax = 9,

    /** Target horizontal speed is too high.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorTargetHorizSpeed = 10,

    /** Target vertical speed is too high.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorTargetVertSpeed = 11,

    /** Target altitude has a bad accuracy.
Not applicable to Flight plan. */
    ArsdkFeatureFlightPlanIndicatorTargetAltitudeAccuracy = 12,

    /** Drone battery is insufficient. */
    ArsdkFeatureFlightPlanIndicatorDroneBattery = 13,

    /** Drone is not in a valid state. */
    ArsdkFeatureFlightPlanIndicatorDroneState = 14,

};
#define ArsdkFeatureFlightPlanIndicatorCnt 15

@interface ArsdkFeatureFlightPlanIndicatorBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureFlightPlanIndicator)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureFlightPlanIndicator val))cb;

@end

/** Type of flight plan file. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFlightPlanMavlinkType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFlightPlanMavlinkTypeSdkCoreUnknown = -1,

    /** Mavlink file for FlightPlan */
    ArsdkFeatureFlightPlanMavlinkTypeFlightplan = 0,

    /** Mavlink file for MapMyHouse */
    ArsdkFeatureFlightPlanMavlinkTypeMapmyhouse = 1,

    /** Mavlink file for FlightPlan V2 (better follow the standard) */
    ArsdkFeatureFlightPlanMavlinkTypeFlightplanv2 = 2,

};
#define ArsdkFeatureFlightPlanMavlinkTypeCnt 3

/** Supported capabilities. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFlightPlanSupportedCapabilities) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFlightPlanSupportedCapabilitiesSdkCoreUnknown = -1,

    /** Support command to start a flight plan at a given item. */
    ArsdkFeatureFlightPlanSupportedCapabilitiesStartAt = 0,

    /** Support command to start a flight plan at a given item with disconnection behavior. */
    ArsdkFeatureFlightPlanSupportedCapabilitiesStartAtV2 = 1,

};
#define ArsdkFeatureFlightPlanSupportedCapabilitiesCnt 2

@interface ArsdkFeatureFlightPlanSupportedCapabilitiesBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureFlightPlanSupportedCapabilities)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureFlightPlanSupportedCapabilities val))cb;

@end

@protocol ArsdkFeatureFlightPlanCallback<NSObject>

@optional

/**
  

 - parameter missing_inputs: List of missing requirements to start flight plan.
If at least one input is missing, drone won't be able to start a flight plan.
*/
- (void)onInfo:(NSUInteger)missingInputsBitField
NS_SWIFT_NAME(onInfo(missingInputsBitField:));

/**
  

 - parameter item: Index of the mission item corresponding to the skipped waypoint.
*/
- (void)onWaypointSkipped:(NSUInteger)item
NS_SWIFT_NAME(onWaypointSkipped(item:));

/**
  

 - parameter supported_capabilities: Supported capabilities.
*/
- (void)onCapabilities:(NSUInteger)supportedCapabilitiesBitField
NS_SWIFT_NAME(onCapabilities(supportedCapabilitiesBitField:));

/**
  

 - parameter flightplan_id: Unique identifier of the flight plan to execute.
 - parameter custom_id: Custom identifier of the latest flight plan execution started before connection, or empty if none.
 - parameter item: Index of the latest mission item executed.
 - parameter running_time: Running time if the flightplan is currently being executed.
 - parameter resource_id: First resource id of the latest media capture requested by the flightplan.
*/
- (void)onRecoveryInfo:(nonnull NSString *)flightplanId customId:(nonnull NSString *)customId item:(NSUInteger)item runningTime:(NSUInteger)runningTime resourceId:(nonnull NSString *)resourceId
NS_SWIFT_NAME(onRecoveryInfo(flightplanId:customId:item:runningTime:resourceId:));


@end

@interface ArsdkFeatureFlightPlan : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureFlightPlanCallback>)callback;

/**
 Start a flight plan at a given mission item. 

 - parameter flightplan_id: Unique identifier of the flight plan to execute.
 - parameter custom_id: Replaces the flightplan id in all the events returned by the drone.
If empty, the original id is used.
 - parameter type: Mavlink file type
 - parameter item: Index of the mission item where the flight plan should start.
This is the place of the mission item in the mission's items list, starting from 0.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startAtEncoder:(nonnull NSString *)flightplanId customId:(nonnull NSString *)customId type:(ArsdkFeatureFlightPlanMavlinkType)type item:(NSUInteger)item
NS_SWIFT_NAME(startAtEncoder(flightplanId:customId:type:item:));

/**
 Clears information provided by event [recovery_info](#167-5). 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))clearRecoveryInfoEncoder
NS_SWIFT_NAME(clearRecoveryInfoEncoder());

/**
 Start a flight plan at a given mission item. 

 - parameter flightplan_id: Unique identifier of the flight plan to execute.
 - parameter custom_id: Replaces the flightplan id in all the events returned by the drone.
If empty, the original id is used.
 - parameter type: Mavlink file type
 - parameter item: Index of the mission item where the flight plan should start.
This is the index of the mission item in the mission's items list, starting from 0.
 - parameter continue_on_disconnect: Boolean : 0 : RTH on Disconnection / 1 : Continue on Disconnection
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startAtV2Encoder:(nonnull NSString *)flightplanId customId:(nonnull NSString *)customId type:(ArsdkFeatureFlightPlanMavlinkType)type item:(NSUInteger)item continueOnDisconnect:(NSUInteger)continueOnDisconnect
NS_SWIFT_NAME(startAtV2Encoder(flightplanId:customId:type:item:continueOnDisconnect:));

/**
 Start flightplan pre-configuration 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))preConfigEncoder
NS_SWIFT_NAME(preConfigEncoder());

@end

