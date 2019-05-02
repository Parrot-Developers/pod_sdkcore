/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureGenericUid;

struct arsdk_cmd;

/** Flags use by maps and lists */
typedef NS_ENUM(NSInteger, ArsdkFeatureGenericListFlags) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGenericListFlagsSdkCoreUnknown = -1,

    /** indicate it's the first element of the list. */
    ArsdkFeatureGenericListFlagsFirst = 0,

    /** indicate it's the last element of the list. */
    ArsdkFeatureGenericListFlagsLast = 1,

    /** indicate the list is empty (implies First/Last). All other arguments should be ignored. */
    ArsdkFeatureGenericListFlagsEmpty = 2,

    /** This value should be removed from the existing list. */
    ArsdkFeatureGenericListFlagsRemove = 3,

};
#define ArsdkFeatureGenericListFlagsCnt 4

@interface ArsdkFeatureGenericListFlagsBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureGenericListFlags)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureGenericListFlags val))cb;

@end

/** Drone settings */
@interface ArsdkFeatureGenericDronesettings : NSObject

- (struct arsdk_generic_dronesettings *) getNativeSettings;

- (void) setArdrone3PilotingSettingsMaxAltitude:(float)current;

- (int) getArdrone3PilotingSettingsMaxAltitude:(float *)current;

- (void) setArdrone3PilotingSettingsMaxTilt:(float)current;

- (int) getArdrone3PilotingSettingsMaxTilt:(float *)current;

- (void) setArdrone3PilotingSettingsMaxDistance:(float)value;

- (int) getArdrone3PilotingSettingsMaxDistance:(float *)value;

- (void) setArdrone3PilotingSettingsNoFlyOverMaxDistance:(NSUInteger)shouldnotflyover;

- (int) getArdrone3PilotingSettingsNoFlyOverMaxDistance:(NSUInteger *)shouldnotflyover;

- (void) setArdrone3SpeedSettingsMaxVerticalSpeed:(float)current;

- (int) getArdrone3SpeedSettingsMaxVerticalSpeed:(float *)current;

- (void) setArdrone3SpeedSettingsMaxRotationSpeed:(float)current;

- (int) getArdrone3SpeedSettingsMaxRotationSpeed:(float *)current;

- (void) setArdrone3SpeedSettingsMaxPitchRollRotationSpeed:(float)current;

- (int) getArdrone3SpeedSettingsMaxPitchRollRotationSpeed:(float *)current;

- (void) setArdrone3GPSSettingsReturnHomeDelay:(NSUInteger)delay;

- (int) getArdrone3GPSSettingsReturnHomeDelay:(NSUInteger *)delay;

- (void) setArdrone3GPSSettingsHomeType:(ArsdkFeatureArdrone3GpssettingsHometypeType)type;

- (int) getArdrone3GPSSettingsHomeType:(ArsdkFeatureArdrone3GpssettingsHometypeType *)type;

- (void) setArdrone3PictureSettingsVideoStabilizationMode:(ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeMode)mode;

- (int) getArdrone3PictureSettingsVideoStabilizationMode:(ArsdkFeatureArdrone3PicturesettingsVideostabilizationmodeMode *)mode;

- (void) setArdrone3PilotingSettingsBankedTurn:(NSUInteger)value;

- (int) getArdrone3PilotingSettingsBankedTurn:(NSUInteger *)value;

@end

/** Drone settings changed */
@interface ArsdkFeatureGenericDronesettingschanged : NSObject

- (struct arsdk_generic_dronesettingschanged *) getNativeSettings;

- (void) setArdrone3PilotingSettingsStateMaxAltitudeChanged:(float)current min:(float)min max:(float)max;

- (int) getArdrone3PilotingSettingsStateMaxAltitudeChanged:(float *)current min:(float *)min max:(float *)max;

- (void) setArdrone3PilotingSettingsStateMaxTiltChanged:(float)current min:(float)min max:(float)max;

- (int) getArdrone3PilotingSettingsStateMaxTiltChanged:(float *)current min:(float *)min max:(float *)max;

- (void) setArdrone3PilotingSettingsStateMaxDistanceChanged:(float)current min:(float)min max:(float)max;

- (int) getArdrone3PilotingSettingsStateMaxDistanceChanged:(float *)current min:(float *)min max:(float *)max;

- (void) setArdrone3PilotingSettingsStateNoFlyOverMaxDistanceChanged:(NSUInteger)shouldnotflyover;

- (int) getArdrone3PilotingSettingsStateNoFlyOverMaxDistanceChanged:(NSUInteger *)shouldnotflyover;

- (void) setArdrone3SpeedSettingsStateMaxVerticalSpeedChanged:(float)current min:(float)min max:(float)max;

- (int) getArdrone3SpeedSettingsStateMaxVerticalSpeedChanged:(float *)current min:(float *)min max:(float *)max;

- (void) setArdrone3SpeedSettingsStateMaxRotationSpeedChanged:(float)current min:(float)min max:(float)max;

- (int) getArdrone3SpeedSettingsStateMaxRotationSpeedChanged:(float *)current min:(float *)min max:(float *)max;

- (void) setArdrone3SpeedSettingsStateMaxPitchRollRotationSpeedChanged:(float)current min:(float)min max:(float)max;

- (int) getArdrone3SpeedSettingsStateMaxPitchRollRotationSpeedChanged:(float *)current min:(float *)min max:(float *)max;

- (void) setArdrone3GPSSettingsStateReturnHomeDelayChanged:(NSUInteger)delay;

- (int) getArdrone3GPSSettingsStateReturnHomeDelayChanged:(NSUInteger *)delay;

- (void) setArdrone3GPSSettingsStateHomeTypeChanged:(ArsdkFeatureArdrone3GpssettingsstateHometypechangedType)type;

- (int) getArdrone3GPSSettingsStateHomeTypeChanged:(ArsdkFeatureArdrone3GpssettingsstateHometypechangedType *)type;

- (void) setArdrone3PictureSettingsStateVideoStabilizationModeChanged:(ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedMode)mode;

- (int) getArdrone3PictureSettingsStateVideoStabilizationModeChanged:(ArsdkFeatureArdrone3PicturesettingsstateVideostabilizationmodechangedMode *)mode;

- (void) setArdrone3PilotingSettingsStateBankedTurnChanged:(NSUInteger)state;

- (int) getArdrone3PilotingSettingsStateBankedTurnChanged:(NSUInteger *)state;

@end

@protocol ArsdkFeatureGenericCallback<NSObject>

@optional

/**
 Informs that several drones settings changed. 

 - parameter settings: 
*/
- (void)onDroneSettingsChanged:(ArsdkFeatureGenericDronesettingschanged *)settings
NS_SWIFT_NAME(onDroneSettingsChanged(settings:));


@end

@interface ArsdkFeatureGeneric : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureGenericCallback>)callback;

/**
 default 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))defaultEncoder
NS_SWIFT_NAME(defaultEncoder());

/**
 Set several drone settings in only one command. 

 - parameter settings: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setDroneSettingsEncoder:(ArsdkFeatureGenericDronesettings *)settings
NS_SWIFT_NAME(setDroneSettingsEncoder(settings:));

@end

