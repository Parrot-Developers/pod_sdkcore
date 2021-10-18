/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMoveUid;

struct arsdk_cmd;

/** Orientation mode of the move to */
typedef NS_ENUM(NSInteger, ArsdkFeatureMoveOrientationMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMoveOrientationModeSdkCoreUnknown = -1,

    /** The drone won't change its orientation */
    ArsdkFeatureMoveOrientationModeNone = 0,

    /** The drone will make a rotation to look in direction of the given location */
    ArsdkFeatureMoveOrientationModeToTarget = 1,

    /** The drone will orientate itself to the given heading before moving to the location */
    ArsdkFeatureMoveOrientationModeHeadingStart = 2,

    /** The drone will orientate itself to the given heading while moving to the location */
    ArsdkFeatureMoveOrientationModeHeadingDuring = 3,

};
#define ArsdkFeatureMoveOrientationModeCnt 4

/** Indicators needed to start a move. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMoveIndicator) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMoveIndicatorSdkCoreUnknown = -1,

    /** Drone gps is not fixed. */
    ArsdkFeatureMoveIndicatorDroneGps = 0,

    /** Drone magneto is not valid. */
    ArsdkFeatureMoveIndicatorDroneMagneto = 1,

    /** Drone is out of geofence. */
    ArsdkFeatureMoveIndicatorDroneGeofence = 2,

    /** Drone is under min altitude. */
    ArsdkFeatureMoveIndicatorDroneMinAltitude = 3,

    /** Drone is above max altitude. */
    ArsdkFeatureMoveIndicatorDroneMaxAltitude = 4,

    /** Drone is not flying. */
    ArsdkFeatureMoveIndicatorDroneFlying = 5,

    /** Target position has a bad accuracy.
Not applicable to Move. */
    ArsdkFeatureMoveIndicatorTargetPositionAccuracy = 6,

    /** Target image detection is not working.
Not applicable to Move. */
    ArsdkFeatureMoveIndicatorTargetImageDetection = 7,

    /** Drone is too close to target.
Not applicable to Move. */
    ArsdkFeatureMoveIndicatorDroneTargetDistanceMin = 8,

    /** Drone is too far from target.
Not applicable to Move. */
    ArsdkFeatureMoveIndicatorDroneTargetDistanceMax = 9,

    /** Target horizontal speed is too high.
Not applicable to Move. */
    ArsdkFeatureMoveIndicatorTargetHorizSpeed = 10,

    /** Target vertical speed is too high.
Not applicable to Move. */
    ArsdkFeatureMoveIndicatorTargetVertSpeed = 11,

    /** Target altitude has a bad accuracy.
Not applicable to Move. */
    ArsdkFeatureMoveIndicatorTargetAltitudeAccuracy = 12,

};
#define ArsdkFeatureMoveIndicatorCnt 13

@interface ArsdkFeatureMoveIndicatorBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureMoveIndicator)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureMoveIndicator val))cb;

@end

@protocol ArsdkFeatureMoveCallback<NSObject>

@optional

/**
 Describes the missing requirements to start a move. 

 - parameter missing_inputs: List of missing requirements to start a move.
If at least one input is missing, drone won't be able to start a move.
*/
- (void)onInfo:(NSUInteger)missingInputsBitField
NS_SWIFT_NAME(onInfo(missingInputsBitField:));


@end

@interface ArsdkFeatureMove : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMoveCallback>)callback;

/**
 Move the drone to a specified location with speeds limited by the value given.
If a new command moveTo/ExtendedMoveTo is sent, the drone will immediatly run it (no cancel will be issued).
If a [CancelMoveTo](#1-0-11) command is sent, the ExtendedMoveTo is stopped.
During the ExtendedMoveTo, all pitch, roll and gaz values of the piloting command will be ignored by the drone.
However, the yaw value can be used. If all speeds are zero the command will result in event [MoveToChanged](#1-4-12) status ERROR 

 - parameter latitude: Latitude of the location (in degrees) to reach
 - parameter longitude: Longitude of the location (in degrees) to reach
 - parameter altitude: Altitude above take off point (in m) to reach
 - parameter orientation_mode: Orientation mode of the move to
 - parameter heading: Heading (relative to the North in degrees).
This value is only used if the orientation mode is 'heading_start' or 'heading_during'
 - parameter max_horizontal_speed: Maximum horizontal speed in m/s.
 - parameter max_vertical_speed: Maximum vertical speed in m/s.
 - parameter max_yaw_rotation_speed: Maximum yaw rotation speed in degrees/s.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))extendedMoveToEncoder:(double)latitude longitude:(double)longitude altitude:(double)altitude orientationMode:(ArsdkFeatureMoveOrientationMode)orientationMode heading:(float)heading maxHorizontalSpeed:(float)maxHorizontalSpeed maxVerticalSpeed:(float)maxVerticalSpeed maxYawRotationSpeed:(float)maxYawRotationSpeed
NS_SWIFT_NAME(extendedMoveToEncoder(latitude:longitude:altitude:orientationMode:heading:maxHorizontalSpeed:maxVerticalSpeed:maxYawRotationSpeed:));

/**
 Move the drone to a relative position and rotate heading by a given angle, with maximum associated speed settings.
Moves are relative to the current drone orientation, (drone's reference).
Also note that the given rotation will not modify the move (i.e. moves are always rectilinear). If all speeds are zero or are incoherent with asked d_x/d_y/d_z/d_psi the command will result with event [RelativeMoveEnded](#1-34-0) status ERROR 

 - parameter d_x: Wanted displacement along the front axis [m]
 - parameter d_y: Wanted displacement along the right axis [m]
 - parameter d_z: Wanted displacement along the down axis [m]
 - parameter d_psi: Wanted rotation of heading [rad]
 - parameter max_horizontal_speed: Maximum horizontal speed in m/s.
 - parameter max_vertical_speed: Maximum vertical speed in m/s.
 - parameter max_yaw_rotation_speed: Maximum yaw rotation speed in degrees/s.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))extendedMoveByEncoder:(float)dX dY:(float)dY dZ:(float)dZ dPsi:(float)dPsi maxHorizontalSpeed:(float)maxHorizontalSpeed maxVerticalSpeed:(float)maxVerticalSpeed maxYawRotationSpeed:(float)maxYawRotationSpeed
NS_SWIFT_NAME(extendedMoveByEncoder(dX:dY:dZ:dPsi:maxHorizontalSpeed:maxVerticalSpeed:maxYawRotationSpeed:));

@end

