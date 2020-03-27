/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3PilotingsettingsstateUid;

struct arsdk_cmd;

/** The circling direction */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingsettingsstateCirclingdirectionchangedValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingsettingsstateCirclingdirectionchangedValueSdkCoreUnknown = -1,

    /** Circling ClockWise */
    ArsdkFeatureArdrone3PilotingsettingsstateCirclingdirectionchangedValueCw = 0,

    /** Circling Counter ClockWise */
    ArsdkFeatureArdrone3PilotingsettingsstateCirclingdirectionchangedValueCcw = 1,

};
#define ArsdkFeatureArdrone3PilotingsettingsstateCirclingdirectionchangedValueCnt 2

/** The Pitch mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingsettingsstatePitchmodechangedValue) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingsettingsstatePitchmodechangedValueSdkCoreUnknown = -1,

    /** Positive pitch values will make the drone lower its nose.
Negative pitch values will make the drone raise its nose. */
    ArsdkFeatureArdrone3PilotingsettingsstatePitchmodechangedValueNormal = 0,

    /** Pitch commands are inverted.
Positive pitch values will make the drone raise its nose.
Negative pitch values will make the drone lower its nose. */
    ArsdkFeatureArdrone3PilotingsettingsstatePitchmodechangedValueInverted = 1,

};
#define ArsdkFeatureArdrone3PilotingsettingsstatePitchmodechangedValueCnt 2

@protocol ArsdkFeatureArdrone3PilotingsettingsstateCallback<NSObject>

@optional

/**
 Max altitude.
The drone will not fly higher than this altitude (above take off point). 

 - parameter current: Current altitude max
 - parameter min: Range min of altitude
 - parameter max: Range max of altitude
*/
- (void)onMaxAltitudeChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxAltitudeChanged(current:min:max:));

/**
 Max pitch/roll.
The drone will not fly higher than this altitude (above take off point). 

 - parameter current: Current max tilt
 - parameter min: Range min of tilt
 - parameter max: Range max of tilt
*/
- (void)onMaxTiltChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxTiltChanged(current:min:max:));

/**
 Absolut control. 

 - parameter on: 1 if enabled, 0 if disabled
*/
- (void)onAbsolutControlChanged:(NSUInteger)on
NS_SWIFT_NAME(onAbsolutControlChanged(on:));

/**
 Max distance. 

 - parameter current: Current max distance in meter
 - parameter min: Minimal possible max distance
 - parameter max: Maximal possible max distance
*/
- (void)onMaxDistanceChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxDistanceChanged(current:min:max:));

/**
 Geofencing.
If set, the drone won't fly over the [MaxDistance](#1-6-3). 

 - parameter shouldNotFlyOver: 1 if the drone won't fly further than max distance, 0 if no limitation on the drone will be done
*/
- (void)onNoFlyOverMaxDistanceChanged:(NSUInteger)shouldnotflyover
NS_SWIFT_NAME(onNoFlyOverMaxDistanceChanged(shouldnotflyover:));

/**
 Banked Turn mode.
If banked turn mode is enabled, the drone will use yaw values from the piloting command to infer with roll and pitch on the drone when its horizontal speed is not null. 

 - parameter state: 1 if enabled, 0 if disabled
*/
- (void)onBankedTurnChanged:(NSUInteger)state
NS_SWIFT_NAME(onBankedTurnChanged(state:));

/**
 Min altitude.
Only sent by fixed wings. 

 - parameter current: Current altitude min
 - parameter min: Range min of altitude min
 - parameter max: Range max of altitude min
*/
- (void)onMinAltitudeChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMinAltitudeChanged(current:min:max:));

/**
 Circling direction.
Only sent by fixed wings. 

 - parameter value: 
*/
- (void)onCirclingDirectionChanged:(ArsdkFeatureArdrone3PilotingsettingsstateCirclingdirectionchangedValue)value
NS_SWIFT_NAME(onCirclingDirectionChanged(value:));

/**
 Circling radius.
Only sent by fixed wings. 

 - parameter current: The current circling radius in meter
 - parameter min: Range min of circling radius in meter
 - parameter max: Range max of circling radius in meter
*/
- (void)onCirclingRadiusChanged:(NSUInteger)current min:(NSUInteger)min max:(NSUInteger)max
NS_SWIFT_NAME(onCirclingRadiusChanged(current:min:max:));

/**
 Circling altitude.
Bounds will be automatically adjusted according to the [MaxAltitude](#1-6-0).
Only sent by fixed wings. 

 - parameter current: The current circling altitude in meter
 - parameter min: Range min of circling altitude in meter
 - parameter max: Range max of circling altitude in meter
*/
- (void)onCirclingAltitudeChanged:(NSUInteger)current min:(NSUInteger)min max:(NSUInteger)max
NS_SWIFT_NAME(onCirclingAltitudeChanged(current:min:max:));

/**
 Pitch mode. 

 - parameter value: 
*/
- (void)onPitchModeChanged:(ArsdkFeatureArdrone3PilotingsettingsstatePitchmodechangedValue)value
NS_SWIFT_NAME(onPitchModeChanged(value:));

/**
 State of the motion detection. 

 - parameter enabled: 1 if motion detection is enabled, 0 otherwise.
*/
- (void)onMotionDetection:(NSUInteger)enabled
NS_SWIFT_NAME(onMotionDetection(enabled:));


@end

@interface ArsdkFeatureArdrone3Pilotingsettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3PilotingsettingsstateCallback>)callback;

@end

