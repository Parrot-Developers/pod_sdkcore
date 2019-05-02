/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3GpssettingsstateUid;

struct arsdk_cmd;

/** The state of the gps update */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3GpssettingsstateGpsupdatestatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3GpssettingsstateGpsupdatestatechangedStateSdkCoreUnknown = -1,

    /** Drone GPS update succeed */
    ArsdkFeatureArdrone3GpssettingsstateGpsupdatestatechangedStateUpdated = 0,

    /** Drone GPS update In progress */
    ArsdkFeatureArdrone3GpssettingsstateGpsupdatestatechangedStateInprogress = 1,

    /** Drone GPS update failed */
    ArsdkFeatureArdrone3GpssettingsstateGpsupdatestatechangedStateFailed = 2,

};
#define ArsdkFeatureArdrone3GpssettingsstateGpsupdatestatechangedStateCnt 3

/** The type of the home position */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3GpssettingsstateHometypechangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3GpssettingsstateHometypechangedTypeSdkCoreUnknown = -1,

    /** The drone will try to return to the take off position */
    ArsdkFeatureArdrone3GpssettingsstateHometypechangedTypeTakeoff = 0,

    /** The drone will try to return to the pilot position */
    ArsdkFeatureArdrone3GpssettingsstateHometypechangedTypePilot = 1,

    /** The drone will try to return to the target of the current (or last) follow me */
    ArsdkFeatureArdrone3GpssettingsstateHometypechangedTypeFollowee = 2,

};
#define ArsdkFeatureArdrone3GpssettingsstateHometypechangedTypeCnt 3

@protocol ArsdkFeatureArdrone3GpssettingsstateCallback<NSObject>

@optional

/**
 Home location. 

 - parameter latitude: Home latitude in decimal degrees
 - parameter longitude: Home longitude in decimal degrees
 - parameter altitude: Home altitude in meters
*/
- (void)onHomeChanged:(double)latitude longitude:(double)longitude altitude:(double)altitude
NS_SWIFT_NAME(onHomeChanged(latitude:longitude:altitude:));

/**
 Home location has been reset. 

 - parameter latitude: Home latitude in decimal degrees
 - parameter longitude: Home longitude in decimal degrees
 - parameter altitude: Home altitude in meters
*/
- (void)onResetHomeChanged:(double)latitude longitude:(double)longitude altitude:(double)altitude
NS_SWIFT_NAME(onResetHomeChanged(latitude:longitude:altitude:));

/**
 Gps fix info. 

 - parameter fixed: 1 if gps on drone is fixed, 0 otherwise
*/
- (void)onGPSFixStateChanged:(NSUInteger)fixed
NS_SWIFT_NAME(onGPSFixStateChanged(fixed:));

/**
 Gps update state. 

 - parameter state: 
*/
- (void)onGPSUpdateStateChanged:(ArsdkFeatureArdrone3GpssettingsstateGpsupdatestatechangedState)state
NS_SWIFT_NAME(onGPSUpdateStateChanged(state:));

/**
 User preference for the home type.
See [HomeType](#1-31-2) to get the drone actual home type. 

 - parameter type: 
*/
- (void)onHomeTypeChanged:(ArsdkFeatureArdrone3GpssettingsstateHometypechangedType)type
NS_SWIFT_NAME(onHomeTypeChanged(type:));

/**
 Return home trigger delay. This delay represents the time after which the return home is automatically triggered after a disconnection. 

 - parameter delay: Delay in second
*/
- (void)onReturnHomeDelayChanged:(NSUInteger)delay
NS_SWIFT_NAME(onReturnHomeDelayChanged(delay:));

/**
 Geofence center location. This location represents the center of the geofence zone. This is updated at a maximum frequency of 1 Hz. 

 - parameter latitude: GPS latitude in decimal degrees
 - parameter longitude: GPS longitude in decimal degrees
*/
- (void)onGeofenceCenterChanged:(double)latitude longitude:(double)longitude
NS_SWIFT_NAME(onGeofenceCenterChanged(latitude:longitude:));

/**
 Minumum altitude for return home changed. 

 - parameter value: Current value in meters, relative to take off altitude.
 - parameter min: Lower bound in meters, relative to take off altitude.
 - parameter max: Upper bound in meters, relative to take off altitude.
*/
- (void)onReturnHomeMinAltitudeChanged:(float)value min:(float)min max:(float)max
NS_SWIFT_NAME(onReturnHomeMinAltitudeChanged(value:min:max:));


@end

@interface ArsdkFeatureArdrone3Gpssettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3GpssettingsstateCallback>)callback;

@end

