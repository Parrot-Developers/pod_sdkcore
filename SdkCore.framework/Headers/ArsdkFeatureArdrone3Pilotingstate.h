/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3PilotingstateUid;

struct arsdk_cmd;

/** Drone flying state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateFlyingstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateSdkCoreUnknown = -1,

    /** Landed state */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateLanded = 0,

    /** Taking off state */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateTakingoff = 1,

    /** Hovering / Circling (for fixed wings) state */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateHovering = 2,

    /** Flying state */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateFlying = 3,

    /** Landing state */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateLanding = 4,

    /** Emergency state */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateEmergency = 5,

    /** User take off state. Waiting for user action to take off. */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateUsertakeoff = 6,

    /** Motor ramping state. */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateMotorRamping = 7,

    /** Emergency landing state.
Drone autopilot has detected defective sensor(s).
Only Yaw argument in PCMD is taken into account.
All others flying commands are ignored. */
    ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateEmergencyLanding = 8,

};
#define ArsdkFeatureArdrone3PilotingstateFlyingstatechangedStateCnt 9

/** Drone alert state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateAlertstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateSdkCoreUnknown = -1,

    /** No alert */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateNone = 0,

    /** User emergency alert */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateUser = 1,

    /** Cut out alert */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateCutOut = 2,

    /** Critical battery alert */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateCriticalBattery = 3,

    /** Low battery alert */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateLowBattery = 4,

    /** The angle of the drone is too high */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateTooMuchAngle = 5,

    /** Almost empty battery alert */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateAlmostEmptyBattery = 6,

    /** Magnetometer is disturbed by a magnetic element */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateMagnetoPertubation = 7,

    /** Local terrestrial magnetic field is too weak */
    ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateMagnetoLowEarthField = 8,

};
#define ArsdkFeatureArdrone3PilotingstateAlertstatechangedStateCnt 9

/** State of navigate home */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedStateSdkCoreUnknown = -1,

    /** Navigate home is available */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedStateAvailable = 0,

    /** Navigate home is in progress */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedStateInprogress = 1,

    /** Navigate home is not available */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedStateUnavailable = 2,

    /** Navigate home has been received, but its process is pending */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedStatePending = 3,

};
#define ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedStateCnt 4

/** Reason of the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonSdkCoreUnknown = -1,

    /** User requested a navigate home (available->inProgress) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonUserrequest = 0,

    /** Connection between controller and product lost (available->inProgress) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonConnectionlost = 1,

    /** Low battery occurred (available->inProgress) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonLowbattery = 2,

    /** Navigate home is finished (inProgress->available) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonFinished = 3,

    /** Navigate home has been stopped (inProgress->available) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonStopped = 4,

    /** Navigate home disabled by product (inProgress->unavailable or available->unavailable) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonDisabled = 5,

    /** Navigate home enabled by product (unavailable->available) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonEnabled = 6,

    /** Return to home during a flightplan (available->in_progress) */
    ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonFlightplan = 7,

};
#define ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReasonCnt 8

/** Drone landing state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateLandingstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateLandingstatechangedStateSdkCoreUnknown = -1,

    /** Linear landing */
    ArsdkFeatureArdrone3PilotingstateLandingstatechangedStateLinear = 0,

    /** Spiral landing */
    ArsdkFeatureArdrone3PilotingstateLandingstatechangedStateSpiral = 1,

};
#define ArsdkFeatureArdrone3PilotingstateLandingstatechangedStateCnt 2

/** Orientation mode of the move to */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationModeSdkCoreUnknown = -1,

    /** The drone won't change its orientation */
    ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationModeNone = 0,

    /** The drone will make a rotation to look in direction of the given location */
    ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationModeToTarget = 1,

    /** The drone will orientate itself to the given heading before moving to the location */
    ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationModeHeadingStart = 2,

    /** The drone will orientate itself to the given heading while moving to the location */
    ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationModeHeadingDuring = 3,

};
#define ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationModeCnt 4

/** Status of the move to */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateMovetochangedStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateMovetochangedStatusSdkCoreUnknown = -1,

    /** The drone is actually flying to the given position */
    ArsdkFeatureArdrone3PilotingstateMovetochangedStatusRunning = 0,

    /** The drone has reached the target */
    ArsdkFeatureArdrone3PilotingstateMovetochangedStatusDone = 1,

    /** The move to has been canceled, either by a CancelMoveTo command
or when a disconnection appears. */
    ArsdkFeatureArdrone3PilotingstateMovetochangedStatusCanceled = 2,

    /** The move to has not been finished or started because of an error. */
    ArsdkFeatureArdrone3PilotingstateMovetochangedStatusError = 3,

};
#define ArsdkFeatureArdrone3PilotingstateMovetochangedStatusCnt 4

/** Motion state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateMotionstateState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateMotionstateStateSdkCoreUnknown = -1,

    /** Drone is steady */
    ArsdkFeatureArdrone3PilotingstateMotionstateStateSteady = 0,

    /** Drone is moving */
    ArsdkFeatureArdrone3PilotingstateMotionstateStateMoving = 1,

};
#define ArsdkFeatureArdrone3PilotingstateMotionstateStateCnt 2

/** Status of the Piloted POI */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstatePilotedpoiStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiStatusSdkCoreUnknown = -1,

    /** The piloted POI is not available */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiStatusUnavailable = 0,

    /** The piloted POI is available */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiStatusAvailable = 1,

    /** Piloted POI has been requested. Waiting to be in state that allow the piloted POI to start */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiStatusPending = 2,

    /** Piloted POI is running */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiStatusRunning = 3,

};
#define ArsdkFeatureArdrone3PilotingstatePilotedpoiStatusCnt 4

/** POI mode.
This information is only valid when the state is pending or running. */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstatePilotedpoiv2Mode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2ModeSdkCoreUnknown = -1,

    /** Gimbal is locked on the POI */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2ModeLockedGimbal = 0,

    /** Gimbal is freely controllable */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2ModeFreeGimbal = 1,

};
#define ArsdkFeatureArdrone3PilotingstatePilotedpoiv2ModeCnt 2

/** Status of the Piloted POI */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstatePilotedpoiv2Status) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2StatusSdkCoreUnknown = -1,

    /** The piloted POI is not available */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2StatusUnavailable = 0,

    /** The piloted POI is available */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2StatusAvailable = 1,

    /** Piloted POI has been requested. Waiting to be in state that allows the piloted POI to start */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2StatusPending = 2,

    /** Piloted POI is running */
    ArsdkFeatureArdrone3PilotingstatePilotedpoiv2StatusRunning = 3,

};
#define ArsdkFeatureArdrone3PilotingstatePilotedpoiv2StatusCnt 4

/** Status of battery to return home */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatusSdkCoreUnknown = -1,

    /** The battery is full enough to do a return home */
    ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatusOk = 0,

    /** The battery is about to be too discharged to do a return home */
    ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatusWarning = 1,

    /** The battery level is too low to return to the home position */
    ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatusCritical = 2,

    /** Battery capacity to do a return home is unknown.
This can be either because the home is unknown or the position of the drone is unknown,
or the drone has not enough information to determine how long it takes to fly home. */
    ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatusUnknown = 3,

};
#define ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatusCnt 4

/** Status of the relative move */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateMovebychangedStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateMovebychangedStatusSdkCoreUnknown = -1,

    /** The drone is actually flying to the relative position */
    ArsdkFeatureArdrone3PilotingstateMovebychangedStatusRunning = 0,

    /** The drone has reached the target */
    ArsdkFeatureArdrone3PilotingstateMovebychangedStatusDone = 1,

    /** The relative move has been canceled, either by a CancelMoveBy command
or when a disconnection appears. */
    ArsdkFeatureArdrone3PilotingstateMovebychangedStatusCanceled = 2,

    /** The relative move has not been finished or started because of an error. */
    ArsdkFeatureArdrone3PilotingstateMovebychangedStatusError = 3,

};
#define ArsdkFeatureArdrone3PilotingstateMovebychangedStatusCnt 4

/** Reason of the forced landing. */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateForcedlandingautotriggerReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateForcedlandingautotriggerReasonSdkCoreUnknown = -1,

    /** There is no forced landing auto trigger planned. */
    ArsdkFeatureArdrone3PilotingstateForcedlandingautotriggerReasonNone = 0,

    /** Battery will soon be critical, so forced landing auto trigger is planned. */
    ArsdkFeatureArdrone3PilotingstateForcedlandingautotriggerReasonBatteryCriticalSoon = 1,

};
#define ArsdkFeatureArdrone3PilotingstateForcedlandingautotriggerReasonCnt 2

/** Drone wind state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateWindstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateWindstatechangedStateSdkCoreUnknown = -1,

    /** The wind strength can be handled properly by the drone. */
    ArsdkFeatureArdrone3PilotingstateWindstatechangedStateOk = 0,

    /** The wind strength begins to be too strong for the drone to fly correctly. */
    ArsdkFeatureArdrone3PilotingstateWindstatechangedStateWarning = 1,

    /** The wind strength is too strong for the drone to fly correctly. */
    ArsdkFeatureArdrone3PilotingstateWindstatechangedStateCritical = 2,

};
#define ArsdkFeatureArdrone3PilotingstateWindstatechangedStateCnt 3

/** Drone vibration level */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateVibrationlevelchangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateVibrationlevelchangedStateSdkCoreUnknown = -1,

    /** The level of vibration can be handled properly by the drone. */
    ArsdkFeatureArdrone3PilotingstateVibrationlevelchangedStateOk = 0,

    /** The level of vibration begins to be too strong for the drone to fly correctly. */
    ArsdkFeatureArdrone3PilotingstateVibrationlevelchangedStateWarning = 1,

    /** The level of vibration is too strong for the drone to fly correctly. */
    ArsdkFeatureArdrone3PilotingstateVibrationlevelchangedStateCritical = 2,

};
#define ArsdkFeatureArdrone3PilotingstateVibrationlevelchangedStateCnt 3

/** Magneto state */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingstateHeadinglockedstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingstateHeadinglockedstatechangedStateSdkCoreUnknown = -1,

    /** Magnetometer state allows heading lock */
    ArsdkFeatureArdrone3PilotingstateHeadinglockedstatechangedStateOk = 0,

    /** Magnetometer detects a weak magnetic field (close to Earth pole), or a
pertubated local magnetic field. Magnetometer has not lost heading lock yet. */
    ArsdkFeatureArdrone3PilotingstateHeadinglockedstatechangedStateWarning = 1,

    /** Magnetometer lost heading lock. */
    ArsdkFeatureArdrone3PilotingstateHeadinglockedstatechangedStateCritical = 2,

};
#define ArsdkFeatureArdrone3PilotingstateHeadinglockedstatechangedStateCnt 3

@protocol ArsdkFeatureArdrone3PilotingstateCallback<NSObject>

@optional

/**
 Flying state. 

 - parameter state: 
*/
- (void)onFlyingStateChanged:(ArsdkFeatureArdrone3PilotingstateFlyingstatechangedState)state
NS_SWIFT_NAME(onFlyingStateChanged(state:));

/**
 Alert state. 

 - parameter state: 
*/
- (void)onAlertStateChanged:(ArsdkFeatureArdrone3PilotingstateAlertstatechangedState)state
NS_SWIFT_NAME(onAlertStateChanged(state:));

/**
 Return home state.
Availability is related to gps fix, magnetometer calibration. 

 - parameter state: 
 - parameter reason: 
*/
- (void)onNavigateHomeStateChanged:(ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedState)state reason:(ArsdkFeatureArdrone3PilotingstateNavigatehomestatechangedReason)reason
NS_SWIFT_NAME(onNavigateHomeStateChanged(state:reason:));

/**
 Drone's position changed. 

 - parameter latitude: Latitude position in decimal degrees (500.0 if not available)
 - parameter longitude: Longitude position in decimal degrees (500.0 if not available)
 - parameter altitude: Altitude in meters (from GPS)
*/
- (void)onPositionChanged:(double)latitude longitude:(double)longitude altitude:(double)altitude
NS_SWIFT_NAME(onPositionChanged(latitude:longitude:altitude:));

/**
 Drone's speed changed.
Expressed in the NED referential (North-East-Down). 

 - parameter speedX: Speed relative to the North (when drone moves to the north, speed is > 0) (in m/s)
 - parameter speedY: Speed relative to the East (when drone moves to the east, speed is > 0) (in m/s)
 - parameter speedZ: Speed on the z axis (when drone moves down, speed is > 0) (in m/s)
*/
- (void)onSpeedChanged:(float)speedx speedy:(float)speedy speedz:(float)speedz
NS_SWIFT_NAME(onSpeedChanged(speedx:speedy:speedz:));

/**
 Drone's attitude changed. 

 - parameter roll: roll value (in radian)
 - parameter pitch: Pitch value (in radian)
 - parameter yaw: Yaw value (in radian)
*/
- (void)onAttitudeChanged:(float)roll pitch:(float)pitch yaw:(float)yaw
NS_SWIFT_NAME(onAttitudeChanged(roll:pitch:yaw:));

/**
 Drone's altitude changed.
The altitude reported is the altitude above the take off point.
To get the altitude above sea level, see [PositionChanged](#1-4-4). 

 - parameter altitude: Altitude in meters
*/
- (void)onAltitudeChanged:(double)altitude
NS_SWIFT_NAME(onAltitudeChanged(altitude:));

/**
 Drone's location changed.
This event is meant to replace [PositionChanged](#1-4-4). 

 - parameter latitude: Latitude location in decimal degrees (500.0 if not available)
 - parameter longitude: Longitude location in decimal degrees (500.0 if not available)
 - parameter altitude: Altitude location in meters.
 - parameter latitude_accuracy: Latitude location error in meters (1 sigma/standard deviation)
-1 if not available.
 - parameter longitude_accuracy: Longitude location error in meters (1 sigma/standard deviation)
-1 if not available.
 - parameter altitude_accuracy: Altitude location error in meters (1 sigma/standard deviation)
-1 if not available.
*/
- (void)onGpsLocationChanged:(double)latitude longitude:(double)longitude altitude:(double)altitude latitudeAccuracy:(NSInteger)latitudeAccuracy longitudeAccuracy:(NSInteger)longitudeAccuracy altitudeAccuracy:(NSInteger)altitudeAccuracy
NS_SWIFT_NAME(onGpsLocationChanged(latitude:longitude:altitude:latitudeAccuracy:longitudeAccuracy:altitudeAccuracy:));

/**
 Landing state.
Only available for fixed wings (which have two landing modes). 

 - parameter state: 
*/
- (void)onLandingStateChanged:(ArsdkFeatureArdrone3PilotingstateLandingstatechangedState)state
NS_SWIFT_NAME(onLandingStateChanged(state:));

/**
 Drone's air speed changed
Expressed in the drone's referential. 

 - parameter airSpeed: Speed relative to air on x axis
(speed is always > 0) (in m/s)
*/
- (void)onAirSpeedChanged:(float)airspeed
NS_SWIFT_NAME(onAirSpeedChanged(airspeed:));

/**
 The drone moves or moved to a given location. 

 - parameter latitude: Latitude of the location (in degrees) to reach
 - parameter longitude: Longitude of the location (in degrees) to reach
 - parameter altitude: Altitude above take off point (in m) to reach
 - parameter orientation_mode: 
 - parameter heading: Heading (relative to the North in degrees).
This value is only used if the orientation mode is HEADING_START or HEADING_DURING
 - parameter status: 
*/
- (void)onMoveToChanged:(double)latitude longitude:(double)longitude altitude:(double)altitude orientationMode:(ArsdkFeatureArdrone3PilotingstateMovetochangedOrientationMode)orientationMode heading:(float)heading status:(ArsdkFeatureArdrone3PilotingstateMovetochangedStatus)status
NS_SWIFT_NAME(onMoveToChanged(latitude:longitude:altitude:orientationMode:heading:status:));

/**
 Motion state.
If [MotionDetection](#1-6-16) is disabled, motion is steady.
This information is only valid when the drone is not flying. 

 - parameter state: 
*/
- (void)onMotionState:(ArsdkFeatureArdrone3PilotingstateMotionstateState)state
NS_SWIFT_NAME(onMotionState(state:));

/**
 Piloted POI state. 

 - parameter latitude: Latitude of the location (in degrees) to look at.
This information is only valid when the state is pending or running.
 - parameter longitude: Longitude of the location (in degrees) to look at.
This information is only valid when the state is pending or running.
 - parameter altitude: Altitude above take off point (in m) to look at.
This information is only valid when the state is pending or running.
 - parameter status: 
*/
- (void)onPilotedPOI:(double)latitude longitude:(double)longitude altitude:(double)altitude status:(ArsdkFeatureArdrone3PilotingstatePilotedpoiStatus)status
NS_SWIFT_NAME(onPilotedPOI(latitude:longitude:altitude:status:));

/**
 Battery capacity status to return home. 

 - parameter status: 
*/
- (void)onReturnHomeBatteryCapacity:(ArsdkFeatureArdrone3PilotingstateReturnhomebatterycapacityStatus)status
NS_SWIFT_NAME(onReturnHomeBatteryCapacity(status:));

/**
 Relative move changed. 

 - parameter dXAsked: Distance asked to be traveled along the front axis [m]
 - parameter dYAsked: Distance asked to be traveled along the right axis [m]
 - parameter dZAsked: Distance asked to be traveled along the down axis [m]
 - parameter dPsiAsked: Relative angle asked to be applied on heading [rad]
 - parameter dX: Actual distance traveled along the front axis [m].
This information is only valid when the state is DONE or CANCELED.
 - parameter dY: Actual distance traveled along the right axis [m].
This information is only valid when the state is DONE or CANCELED.
 - parameter dZ: Actual distance traveled along the down axis [m].
This information is only valid when the state is DONE or CANCELED.
 - parameter dPsi: Actual applied angle on heading [rad].
This information is only valid when the state is DONE or CANCELED.
 - parameter status: 
*/
- (void)onMoveByChanged:(float)dxasked dyasked:(float)dyasked dzasked:(float)dzasked dpsiasked:(float)dpsiasked dx:(float)dx dy:(float)dy dz:(float)dz dpsi:(float)dpsi status:(ArsdkFeatureArdrone3PilotingstateMovebychangedStatus)status
NS_SWIFT_NAME(onMoveByChanged(dxasked:dyasked:dzasked:dpsiasked:dx:dy:dz:dpsi:status:));

/**
 Indicate that the drone may have difficulties to maintain a fix position when hovering. 

 - parameter no_gps_too_dark: 1 if the drone doesn't have a GPS fix and there is not enough light.
 - parameter no_gps_too_high: 1 if the drone doesn't have a GPS fix and is flying too high.
*/
- (void)onHoveringWarning:(NSUInteger)noGpsTooDark noGpsTooHigh:(NSUInteger)noGpsTooHigh
NS_SWIFT_NAME(onHoveringWarning(noGpsTooDark:noGpsTooHigh:));

/**
 Forced landing auto trigger information. 

 - parameter reason: 
 - parameter delay: Delay until the landing is automatically triggered by the drone, in seconds.
If reason is `none` this information has no meaning.
*/
- (void)onForcedLandingAutoTrigger:(ArsdkFeatureArdrone3PilotingstateForcedlandingautotriggerReason)reason delay:(NSUInteger)delay
NS_SWIFT_NAME(onForcedLandingAutoTrigger(reason:delay:));

/**
 Wind state. 

 - parameter state: 
*/
- (void)onWindStateChanged:(ArsdkFeatureArdrone3PilotingstateWindstatechangedState)state
NS_SWIFT_NAME(onWindStateChanged(state:));

/**
 Vibration level. 

 - parameter state: 
*/
- (void)onVibrationLevelChanged:(ArsdkFeatureArdrone3PilotingstateVibrationlevelchangedState)state
NS_SWIFT_NAME(onVibrationLevelChanged(state:));

/**
 Drone's altitude above ground changed. 

 - parameter altitude: Altitude in meters
*/
- (void)onAltitudeAboveGroundChanged:(float)altitude
NS_SWIFT_NAME(onAltitudeAboveGroundChanged(altitude:));

/**
 Piloted POI state. 

 - parameter latitude: Latitude of the location (in degrees) to look at.
This information is only valid when the state is pending or running.
 - parameter longitude: Longitude of the location (in degrees) to look at.
This information is only valid when the state is pending or running.
 - parameter altitude: Altitude above take off point (in m) to look at.
This information is only valid when the state is pending or running.
 - parameter mode: 
 - parameter status: 
*/
- (void)onPilotedPOIV2:(double)latitude longitude:(double)longitude altitude:(double)altitude mode:(ArsdkFeatureArdrone3PilotingstatePilotedpoiv2Mode)mode status:(ArsdkFeatureArdrone3PilotingstatePilotedpoiv2Status)status
NS_SWIFT_NAME(onPilotedPOIV2(latitude:longitude:altitude:mode:status:));

/**
 Drone's heading locked state. 

 - parameter state: 
*/
- (void)onHeadingLockedStateChanged:(ArsdkFeatureArdrone3PilotingstateHeadinglockedstatechangedState)state
NS_SWIFT_NAME(onHeadingLockedStateChanged(state:));


@end

@interface ArsdkFeatureArdrone3Pilotingstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3PilotingstateCallback>)callback;

@end

