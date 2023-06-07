/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3PilotingsettingsUid;

struct arsdk_cmd;

/** The circling direction */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingsettingsCirclingdirectionValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingsettingsCirclingdirectionValueSdkCoreUnknown = -1,

    /** Circling ClockWise */
    ArsdkFeatureArdrone3PilotingsettingsCirclingdirectionValueCw = 0,

    /** Circling Counter ClockWise */
    ArsdkFeatureArdrone3PilotingsettingsCirclingdirectionValueCcw = 1,

};
#define ArsdkFeatureArdrone3PilotingsettingsCirclingdirectionValueCnt 2

/** The Pitch mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingsettingsPitchmodeValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingsettingsPitchmodeValueSdkCoreUnknown = -1,

    /** Positive pitch values will make the drone lower its nose.
Negative pitch values will make the drone raise its nose. */
    ArsdkFeatureArdrone3PilotingsettingsPitchmodeValueNormal = 0,

    /** Pitch commands are inverted.
Positive pitch values will make the drone raise its nose.
Negative pitch values will make the drone lower its nose. */
    ArsdkFeatureArdrone3PilotingsettingsPitchmodeValueInverted = 1,

};
#define ArsdkFeatureArdrone3PilotingsettingsPitchmodeValueCnt 2

@interface ArsdkFeatureArdrone3Pilotingsettings : NSObject

/**
 Set max altitude.
The drone will not fly over this max altitude when it is in manual piloting.
Please note that if you set a max altitude which is below the current drone altitude, the drone will not go to given max altitude.
You can get the bounds in the event [MaxAltitude](#1-6-0). 

 - parameter current: Current altitude max in m
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))maxAltitudeEncoder:(float)current
NS_SWIFT_NAME(maxAltitudeEncoder(current:));

/**
 Set max pitch/roll.
This represent the max inclination allowed by the drone.
You can get the bounds with the commands [MaxPitchRoll](#1-6-1). 

 - parameter current: Current tilt max in degree
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))maxTiltEncoder:(float)current
NS_SWIFT_NAME(maxTiltEncoder(current:));

/**
 Set absolut control. 

 - parameter on: 1 to enable, 0 to disable
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))absolutControlEncoder:(NSUInteger)on
NS_SWIFT_NAME(absolutControlEncoder(on:));

/**
 Set max distance.
You can get the bounds from the event [MaxDistance](#1-6-3).

If [Geofence](#1-6-4) is activated, the drone won't fly over the given max distance. 

 - parameter value: Current max distance in meter
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))maxDistanceEncoder:(float)value
NS_SWIFT_NAME(maxDistanceEncoder(value:));

/**
 Enable geofence.
If geofence is enabled, the drone won't fly over the given max distance.
You can get the max distance from the event [MaxDistance](#1-6-3).
For copters: the distance is computed from the controller position, if this position is not known, it will use the take off.
For fixed wings: the distance is computed from the take off position. 

 - parameter shouldNotFlyOver: 1 if the drone can't fly further than max distance, 0 if no limitation on the drone should be done
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))noFlyOverMaxDistanceEncoder:(NSUInteger)shouldnotflyover
NS_SWIFT_NAME(noFlyOverMaxDistanceEncoder(shouldnotflyover:));

/**
 Set banked turn mode.
When banked turn mode is enabled, the drone will use yaw values from the piloting command to infer with roll and pitch on the drone when its horizontal speed is not null. 

 - parameter value: 1 to enable, 0 to disable
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))bankedTurnEncoder:(NSUInteger)value
NS_SWIFT_NAME(bankedTurnEncoder(value:));

/**
 Set minimum altitude.
Only available for fixed wings. 

 - parameter current: Current altitude min in m
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))minAltitudeEncoder:(float)current
NS_SWIFT_NAME(minAltitudeEncoder(current:));

/**
 Set default circling direction. This direction will be used when the drone use an automatic circling or when [CIRCLE](#1-0-9) is sent with direction *default*.
Only available for fixed wings. 

 - parameter value: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))circlingDirectionEncoder:(ArsdkFeatureArdrone3PilotingsettingsCirclingdirectionValue)value
NS_SWIFT_NAME(circlingDirectionEncoder(value:));

/**
 Set circling radius.
Only available for fixed wings. 

 - parameter value: The circling radius in meter
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))circlingRadiusEncoder:(NSUInteger)value
NS_SWIFT_NAME(circlingRadiusEncoder(value:));

/**
 Set min circling altitude (not used during take off).
Only available for fixed wings. 

 - parameter value: The circling altitude in meter
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))circlingAltitudeEncoder:(NSUInteger)value
NS_SWIFT_NAME(circlingAltitudeEncoder(value:));

/**
 Set pitch mode.
Only available for fixed wings. 

 - parameter value: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))pitchModeEncoder:(ArsdkFeatureArdrone3PilotingsettingsPitchmodeValue)value
NS_SWIFT_NAME(pitchModeEncoder(value:));

/**
 Enable/disable the motion detection.
If the motion detection is enabled, the drone will send its [MotionState](#1-4-13) when its [FlyingState](#1-4-1) is landed. If the motion detection is disabled, [MotionState](#1-4-13) is steady. 

 - parameter enable: 1 to enable the motion detection, 0 to disable it.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setMotionDetectionModeEncoder:(NSUInteger)enable
NS_SWIFT_NAME(setMotionDetectionModeEncoder(enable:));

@end

