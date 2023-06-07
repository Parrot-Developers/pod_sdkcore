/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonFlightplanstateUid;

struct arsdk_cmd;

/** Drone FlightPlan component id (unique) */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentSdkCoreUnknown = -1,

    /** Drone GPS component.
State is 0 when the drone needs a GPS fix. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentGps = 0,

    /** Drone Calibration component.
State is 0 when the sensors of the drone needs to be calibrated. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentCalibration = 1,

    /** Mavlink file component.
State is 0 when the mavlink file is missing or contains error. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentMavlinkFile = 2,

    /** Drone Take off component.
State is 0 when the drone cannot take-off. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentTakeoff = 3,

    /** Component for waypoints beyond the geofence.
State is 0 when one or more waypoints are beyond the geofence. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentWaypointsbeyondgeofence = 4,

    /** Drone camera component.
State is 0 when the drone needs to wait camera availability. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentCameraavailable = 5,

    /** Mavlink state component.
State is 0 when the mavlink did not start because of drone bad state. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentMavlinkState = 6,

    /** Mavlink Media component.
State is 0 when the mavlink did not start because of a media action
which cannot be performed. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentMavlinkMedia = 7,

    /** Component for first waypoint too far away.
State is 0 when the first waypoint in the flight plan is too far
to be reached. */
    ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentFirstwaypointtoofar = 8,

};
#define ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponentCnt 9

@protocol ArsdkFeatureCommonFlightplanstateCallback<NSObject>

@optional

/**
 FlightPlan availability.
Availability is linked to GPS fix, magnetometer calibration, sensor states... 

 - parameter AvailabilityState: Running a flightPlan file is available (1 running a flightPlan file is available, otherwise 0)
*/
- (void)onAvailabilityStateChanged:(NSUInteger)availabilitystate
NS_SWIFT_NAME(onAvailabilityStateChanged(availabilitystate:));

/**
 FlightPlan components state list. 

 - parameter component: 
 - parameter State: State of the FlightPlan component (1 FlightPlan component OK, otherwise 0)
*/
- (void)onComponentStateListChanged:(ArsdkFeatureCommonFlightplanstateComponentstatelistchangedComponent)component state:(NSUInteger)state
NS_SWIFT_NAME(onComponentStateListChanged(component:state:));

/**
 FlightPlan lock state.
Represents the fact that the controller is able or not to stop or pause a playing FlightPlan 

 - parameter LockState: 1 if FlightPlan is locked: can't pause or stop FlightPlan.
0 if FlightPlan is unlocked: pause or stop available.
*/
- (void)onLockStateChanged:(NSUInteger)lockstate
NS_SWIFT_NAME(onLockStateChanged(lockstate:));


@end

@interface ArsdkFeatureCommonFlightplanstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonFlightplanstateCallback>)callback;

@end

