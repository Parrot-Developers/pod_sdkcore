/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureAnimationUid;

struct arsdk_cmd;

/** Animation type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationTypeSdkCoreUnknown = -1,

    /** No animation */
    ArsdkFeatureAnimationTypeNone = 0,

    /** The drone makes a flip */
    ArsdkFeatureAnimationTypeFlip = 1,

    /** The drone horizontaly rotates on itself */
    ArsdkFeatureAnimationTypeHorizontalPanorama = 2,

    /** The drone flies away on a given distance with a computed angle */
    ArsdkFeatureAnimationTypeDronie = 3,

    /** The drone starts looking down, then moves forward while slowly looking at the horizon */
    ArsdkFeatureAnimationTypeHorizontalReveal = 4,

    /** The drone starts looking down, then moves up while slowly looking at the horizon.
When it reaches its target altitude, it rotates on itself to do a panorama. */
    ArsdkFeatureAnimationTypeVerticalReveal = 5,

    /** The drone circles around its target. */
    ArsdkFeatureAnimationTypeSpiral = 6,

    /** The drone makes a parabola on top of its target and ends on the other side of it. */
    ArsdkFeatureAnimationTypeParabola = 7,

    /** The drone flies horizontally in direction of the target then flies up. */
    ArsdkFeatureAnimationTypeCandle = 8,

    /** The drone slides horizontally. */
    ArsdkFeatureAnimationTypeDollySlide = 9,

    /** Zoom in on the subject, while the drone moves away from it. */
    ArsdkFeatureAnimationTypeVertigo = 10,

    /** The drone moves up while rotating slowly on itself. */
    ArsdkFeatureAnimationTypeTwistUp = 11,

    /** The drone place itself above the target, then moves up while rotating slowly on itself. */
    ArsdkFeatureAnimationTypePositionTwistUp = 12,

    /** The drone performs a 180 degrees rotation on the yaw axis while taking photos at various angles.
The resulting set of photos can then be retrieved as a single media that may be post-processed to make
panoramic images. */
    ArsdkFeatureAnimationTypeHorizontal180PhotoPanorama = 13,

    /** The drone camera performs a 180 degrees rotation on the tilt axis while taking photos at various angles.
The resulting set of photos can then be retrieved as a single media that may be post-processed to make
panoramic images. */
    ArsdkFeatureAnimationTypeVertical180PhotoPanorama = 14,

    /** The drone performs a 360 degrees rotation on the yaw axis. At various angles, rotation pauses, drone camera
performs a 180 degrees rotation on the tilt axis while taking photos at various angles, then drone yaw rotation
resumes.
The resulting set of photos can then be retrieved as a single media that may be post-processed to make
panoramic images. */
    ArsdkFeatureAnimationTypeSphericalPhotoPanorama = 15,

};
#define ArsdkFeatureAnimationTypeCnt 16

@interface ArsdkFeatureAnimationTypeBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationType)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationType val))cb;

@end

/** Animation state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationStateSdkCoreUnknown = -1,

    /** The animation is not running. */
    ArsdkFeatureAnimationStateIdle = 0,

    /** The animation is running. */
    ArsdkFeatureAnimationStateRunning = 1,

    /** The current animation is canceling. */
    ArsdkFeatureAnimationStateCanceling = 2,

};
#define ArsdkFeatureAnimationStateCnt 3

/** Animation play mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationPlayMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationPlayModeSdkCoreUnknown = -1,

    /** Animation is played once, normally. */
    ArsdkFeatureAnimationPlayModeNormal = 0,

    /** Animation is played once and then the animation is played mirrored. */
    ArsdkFeatureAnimationPlayModeOnceThenMirrored = 1,

};
#define ArsdkFeatureAnimationPlayModeCnt 2

/** Animation flip type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationFlipType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationFlipTypeSdkCoreUnknown = -1,

    /** The drone makes a front flip */
    ArsdkFeatureAnimationFlipTypeFront = 0,

    /** The drone makes a back flip */
    ArsdkFeatureAnimationFlipTypeBack = 1,

    /** The drone makes a left flip (its left side goes up) */
    ArsdkFeatureAnimationFlipTypeLeft = 2,

    /** The drone makes a right flip (its right side goes up) */
    ArsdkFeatureAnimationFlipTypeRight = 3,

};
#define ArsdkFeatureAnimationFlipTypeCnt 4

/** Horizontal panorama configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationHorizontalPanoramaConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationHorizontalPanoramaConfigParamSdkCoreUnknown = -1,

    /** Rotation angle parameter. */
    ArsdkFeatureAnimationHorizontalPanoramaConfigParamRotationAngle = 0,

    /** Rotation speed parameter. */
    ArsdkFeatureAnimationHorizontalPanoramaConfigParamRotationSpeed = 1,

};
#define ArsdkFeatureAnimationHorizontalPanoramaConfigParamCnt 2

@interface ArsdkFeatureAnimationHorizontalPanoramaConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationHorizontalPanoramaConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationHorizontalPanoramaConfigParam val))cb;

@end

/** Dronie animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationDronieConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationDronieConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationDronieConfigParamSpeed = 0,

    /** Distance parameter. */
    ArsdkFeatureAnimationDronieConfigParamDistance = 1,

    /** Play mode parameter. */
    ArsdkFeatureAnimationDronieConfigParamPlayMode = 2,

};
#define ArsdkFeatureAnimationDronieConfigParamCnt 3

@interface ArsdkFeatureAnimationDronieConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationDronieConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationDronieConfigParam val))cb;

@end

/** Horizontal reveal animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationHorizontalRevealConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationHorizontalRevealConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationHorizontalRevealConfigParamSpeed = 0,

    /** Distance parameter. */
    ArsdkFeatureAnimationHorizontalRevealConfigParamDistance = 1,

    /** Play mode parameter. */
    ArsdkFeatureAnimationHorizontalRevealConfigParamPlayMode = 2,

};
#define ArsdkFeatureAnimationHorizontalRevealConfigParamCnt 3

@interface ArsdkFeatureAnimationHorizontalRevealConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationHorizontalRevealConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationHorizontalRevealConfigParam val))cb;

@end

/** Vertical reveal animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationVerticalRevealConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationVerticalRevealConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationVerticalRevealConfigParamSpeed = 0,

    /** Vertical distance parameter. */
    ArsdkFeatureAnimationVerticalRevealConfigParamVerticalDistance = 1,

    /** Rotation angle parameter. */
    ArsdkFeatureAnimationVerticalRevealConfigParamRotationAngle = 2,

    /** Rotation speed parameter. */
    ArsdkFeatureAnimationVerticalRevealConfigParamRotationSpeed = 3,

    /** Play mode parameter. */
    ArsdkFeatureAnimationVerticalRevealConfigParamPlayMode = 4,

};
#define ArsdkFeatureAnimationVerticalRevealConfigParamCnt 5

@interface ArsdkFeatureAnimationVerticalRevealConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationVerticalRevealConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationVerticalRevealConfigParam val))cb;

@end

/** Spiral animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationSpiralConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationSpiralConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationSpiralConfigParamSpeed = 0,

    /** Radius variation parameter. */
    ArsdkFeatureAnimationSpiralConfigParamRadiusVariation = 1,

    /** Vertical distance parameter. */
    ArsdkFeatureAnimationSpiralConfigParamVerticalDistance = 2,

    /** Revolution number parameter. */
    ArsdkFeatureAnimationSpiralConfigParamRevolutionNb = 3,

    /** Play mode parameter. */
    ArsdkFeatureAnimationSpiralConfigParamPlayMode = 4,

};
#define ArsdkFeatureAnimationSpiralConfigParamCnt 5

@interface ArsdkFeatureAnimationSpiralConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationSpiralConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationSpiralConfigParam val))cb;

@end

/** Parabola animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationParabolaConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationParabolaConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationParabolaConfigParamSpeed = 0,

    /** Vertical distance parameter. */
    ArsdkFeatureAnimationParabolaConfigParamVerticalDistance = 1,

    /** Play mode parameter. */
    ArsdkFeatureAnimationParabolaConfigParamPlayMode = 2,

};
#define ArsdkFeatureAnimationParabolaConfigParamCnt 3

@interface ArsdkFeatureAnimationParabolaConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationParabolaConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationParabolaConfigParam val))cb;

@end

/** Candle animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationCandleConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationCandleConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationCandleConfigParamSpeed = 0,

    /** Vertical distance parameter. */
    ArsdkFeatureAnimationCandleConfigParamVerticalDistance = 1,

    /** Play mode parameter. */
    ArsdkFeatureAnimationCandleConfigParamPlayMode = 2,

};
#define ArsdkFeatureAnimationCandleConfigParamCnt 3

@interface ArsdkFeatureAnimationCandleConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationCandleConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationCandleConfigParam val))cb;

@end

/** Dolly slide animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationDollySlideConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationDollySlideConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationDollySlideConfigParamSpeed = 0,

    /** Angle parameter. */
    ArsdkFeatureAnimationDollySlideConfigParamAngle = 1,

    /** Horizontal distance parameter. */
    ArsdkFeatureAnimationDollySlideConfigParamHorizontalDistance = 2,

    /** Play mode parameter. */
    ArsdkFeatureAnimationDollySlideConfigParamPlayMode = 3,

};
#define ArsdkFeatureAnimationDollySlideConfigParamCnt 4

@interface ArsdkFeatureAnimationDollySlideConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationDollySlideConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationDollySlideConfigParam val))cb;

@end

/** Vertigo animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationVertigoConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationVertigoConfigParamSdkCoreUnknown = -1,

    /** Duration parameter. */
    ArsdkFeatureAnimationVertigoConfigParamDuration = 0,

    /** Maximum zoom level parameter. */
    ArsdkFeatureAnimationVertigoConfigParamMaxZoomLevel = 1,

    /** Finish action parameter. */
    ArsdkFeatureAnimationVertigoConfigParamFinishAction = 2,

    /** Play mode parameter. */
    ArsdkFeatureAnimationVertigoConfigParamPlayMode = 3,

};
#define ArsdkFeatureAnimationVertigoConfigParamCnt 4

@interface ArsdkFeatureAnimationVertigoConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationVertigoConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationVertigoConfigParam val))cb;

@end

/** Twist-up animation configuration parameter. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationTwistUpConfigParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationTwistUpConfigParamSdkCoreUnknown = -1,

    /** Speed parameter. */
    ArsdkFeatureAnimationTwistUpConfigParamSpeed = 0,

    /** Vertical distance parameter. */
    ArsdkFeatureAnimationTwistUpConfigParamVerticalDistance = 1,

    /** Rotation angle parameter. */
    ArsdkFeatureAnimationTwistUpConfigParamRotationAngle = 2,

    /** Rotation speed parameter. */
    ArsdkFeatureAnimationTwistUpConfigParamRotationSpeed = 3,

    /** Play mode parameter. */
    ArsdkFeatureAnimationTwistUpConfigParamPlayMode = 4,

};
#define ArsdkFeatureAnimationTwistUpConfigParamCnt 5

@interface ArsdkFeatureAnimationTwistUpConfigParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureAnimationTwistUpConfigParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureAnimationTwistUpConfigParam val))cb;

@end

/** Action to execute at the end of a Vertigo. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAnimationVertigoFinishAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAnimationVertigoFinishActionSdkCoreUnknown = -1,

    /** Do nothing special. */
    ArsdkFeatureAnimationVertigoFinishActionNone = 0,

    /** Move zoom level back to x1. */
    ArsdkFeatureAnimationVertigoFinishActionUnzoom = 1,

};
#define ArsdkFeatureAnimationVertigoFinishActionCnt 2

@protocol ArsdkFeatureAnimationCallback<NSObject>

@optional

/**
  

 - parameter values: Bitfield of available animation types
*/
- (void)onAvailability:(NSUInteger)valuesBitField
NS_SWIFT_NAME(onAvailability(valuesBitField:));

/**
  

 - parameter type: Type of the animation. None if no animation is currently running or canceling.
 - parameter percent: Percentage of the animation (only accurate if type is not none) (from 0 to 100).
*/
- (void)onState:(ArsdkFeatureAnimationType)type percent:(NSUInteger)percent
NS_SWIFT_NAME(onState(type:percent:));

/**
  

 - parameter state: State of the animation
 - parameter type: Type of the flip (only accurate if state is not idle)
*/
- (void)onFlipState:(ArsdkFeatureAnimationState)state type:(ArsdkFeatureAnimationFlipType)type
NS_SWIFT_NAME(onFlipState(state:type:));

/**
  

 - parameter state: State of the animation
 - parameter rotation_angle: Rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
(only accurate if state is not idle)
 - parameter rotation_speed: The rotation speed of the anim in rad/s
(only accurate if state is not idle)
*/
- (void)onHorizontalPanoramaState:(ArsdkFeatureAnimationState)state rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed
NS_SWIFT_NAME(onHorizontalPanoramaState(state:rotationAngle:rotationSpeed:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter distance: Dronie distance in m.
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onDronieState:(ArsdkFeatureAnimationState)state speed:(float)speed distance:(float)distance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onDronieState(state:speed:distance:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter distance: Distance in m.
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onHorizontalRevealState:(ArsdkFeatureAnimationState)state speed:(float)speed distance:(float)distance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onHorizontalRevealState(state:speed:distance:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter vertical_distance: Vertical distance in m.
(only accurate if state is not idle)
 - parameter rotation_angle: Rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
(only accurate if state is not idle)
 - parameter rotation_speed: The rotation speed of the anim in rad/s
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onVerticalRevealState:(ArsdkFeatureAnimationState)state speed:(float)speed verticalDistance:(float)verticalDistance rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onVerticalRevealState(state:speed:verticalDistance:rotationAngle:rotationSpeed:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter radius_variation: Relative radius variation in m.
(only accurate if state is not idle)
 - parameter vertical_distance: Vertical distance in m. Negative value means the animation is directed toward the ground.
(only accurate if state is not idle)
 - parameter revolution_nb: The number of revolution (in turn).
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onSpiralState:(ArsdkFeatureAnimationState)state speed:(float)speed radiusVariation:(float)radiusVariation verticalDistance:(float)verticalDistance revolutionNb:(float)revolutionNb playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onSpiralState(state:speed:radiusVariation:verticalDistance:revolutionNb:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter vertical_distance: Vertical distance in m.
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onParabolaState:(ArsdkFeatureAnimationState)state speed:(float)speed verticalDistance:(float)verticalDistance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onParabolaState(state:speed:verticalDistance:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter vertical_distance: Vertical distance in m.
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onCandleState:(ArsdkFeatureAnimationState)state speed:(float)speed verticalDistance:(float)verticalDistance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onCandleState(state:speed:verticalDistance:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter angle: Drone-target-destination angle in rad.
(only accurate if state is not idle)
 - parameter horizontal_distance: Horizontal distance in m.
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onDollySlideState:(ArsdkFeatureAnimationState)state speed:(float)speed angle:(float)angle horizontalDistance:(float)horizontalDistance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onDollySlideState(state:speed:angle:horizontalDistance:playMode:));

/**
  

 - parameter state: State of the animation.
 - parameter duration: Duration in seconds.
(only accurate if state is not idle)
 - parameter max_zoom_level: Maximum zoom level.
(only accurate if state is not idle)
 - parameter finish_action: Action that will be executed at the end of the animation.
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onVertigoState:(ArsdkFeatureAnimationState)state duration:(float)duration maxZoomLevel:(float)maxZoomLevel finishAction:(ArsdkFeatureAnimationVertigoFinishAction)finishAction playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onVertigoState(state:duration:maxZoomLevel:finishAction:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter vertical_distance: Vertical distance in m.
(only accurate if state is not idle)
 - parameter rotation_angle: Rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
(only accurate if state is not idle)
 - parameter rotation_speed: The rotation speed of the anim in rad/s
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onTwistUpState:(ArsdkFeatureAnimationState)state speed:(float)speed verticalDistance:(float)verticalDistance rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onTwistUpState(state:speed:verticalDistance:rotationAngle:rotationSpeed:playMode:));

/**
  

 - parameter state: State of the animation
 - parameter speed: Speed in m/s.
(only accurate if state is not idle)
 - parameter vertical_distance: Vertical distance in m.
(only accurate if state is not idle)
 - parameter rotation_angle: Rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
(only accurate if state is not idle)
 - parameter rotation_speed: The rotation speed of the anim in rad/s
(only accurate if state is not idle)
 - parameter play_mode: Play mode.
(only accurate if state is not idle)
*/
- (void)onPositionTwistUpState:(ArsdkFeatureAnimationState)state speed:(float)speed verticalDistance:(float)verticalDistance rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(onPositionTwistUpState(state:speed:verticalDistance:rotationAngle:rotationSpeed:playMode:));

/**
  

 - parameter state: State of the animation
*/
- (void)onHorizontal180PhotoPanoramaState:(ArsdkFeatureAnimationState)state
NS_SWIFT_NAME(onHorizontal180PhotoPanoramaState(state:));

/**
  

 - parameter state: State of the animation
*/
- (void)onVertical180PhotoPanoramaState:(ArsdkFeatureAnimationState)state
NS_SWIFT_NAME(onVertical180PhotoPanoramaState(state:));

/**
  

 - parameter state: State of the animation
*/
- (void)onSphericalPhotoPanoramaState:(ArsdkFeatureAnimationState)state
NS_SWIFT_NAME(onSphericalPhotoPanoramaState(state:));


@end

@interface ArsdkFeatureAnimation : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureAnimationCallback>)callback;

/**
 Cancel current animation. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))cancelEncoder
NS_SWIFT_NAME(cancelEncoder());

/**
 Start a flip animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one. 

 - parameter type: Type of the flip
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startFlipEncoder:(ArsdkFeatureAnimationFlipType)type
NS_SWIFT_NAME(startFlipEncoder(type:));

/**
 Start an horizontal panorama animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone horizontaly rotates on itself. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter rotation_angle: Desired rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
Not used when rotation angle of provided_params param is 0.
 - parameter rotation_speed: The desired rotation speed of the anim in rad/s
Not used when rotation speed of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startHorizontalPanoramaEncoder:(NSUInteger)providedParamsBitField rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed
NS_SWIFT_NAME(startHorizontalPanoramaEncoder(providedParamsBitField:rotationAngle:rotationSpeed:));

/**
 Start a dronie animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone flies away on a given distance with a computed angle. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter distance: Desired dronie distance in m (length of the hypotenuse).
Not used when distance of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startDronieEncoder:(NSUInteger)providedParamsBitField speed:(float)speed distance:(float)distance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startDronieEncoder(providedParamsBitField:speed:distance:playMode:));

/**
 Start an horizontal reveal animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone starts looking down, then moves forward while slowly looking at the horizon. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter distance: Desired distance in m.
Not used when distance of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startHorizontalRevealEncoder:(NSUInteger)providedParamsBitField speed:(float)speed distance:(float)distance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startHorizontalRevealEncoder(providedParamsBitField:speed:distance:playMode:));

/**
 Start a vertical reveal animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone starts looking down, then moves up while slowly looking at the horizon. When it reaches its target altitude, it rotates on itself to do a panorama. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter vertical_distance: Desired vertical distance in m.
Not used when vertical distance of provided_params param is 0.
 - parameter rotation_angle: Desired rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
Not used when rotation angle of provided_params param is 0.
 - parameter rotation_speed: The desired rotation speed of the anim in rad/s
Not used when rotation speed of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startVerticalRevealEncoder:(NSUInteger)providedParamsBitField speed:(float)speed verticalDistance:(float)verticalDistance rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startVerticalRevealEncoder(providedParamsBitField:speed:verticalDistance:rotationAngle:rotationSpeed:playMode:));

/**
 Start a spiral animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone circles around its target. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter radius_variation: Desired relative radius variation.
A value of 2 means that the ending radius will be twice as big as the starting radius.
A value of -2 means that the ending radius will half of the size of the starting radius.
A value of 1 means that the radius will not change during the animation.
Not used when radius variation of provided_params param is 0.
 - parameter vertical_distance: Desired vertical distance in m.
If negative, the spiral will be directed to the ground.
Not used when vertical distance of provided_params param is 0.
 - parameter revolution_nb: The number of revolution (in turn).
Positive value makes a clockwise spiral, negative is anti-clockwise.
Example: 1.5 makes an entire turn plus half of a turn
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startSpiralEncoder:(NSUInteger)providedParamsBitField speed:(float)speed radiusVariation:(float)radiusVariation verticalDistance:(float)verticalDistance revolutionNb:(float)revolutionNb playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startSpiralEncoder(providedParamsBitField:speed:radiusVariation:verticalDistance:revolutionNb:playMode:));

/**
 Start a parabola animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone makes a parabola on top of its target and ends on the other side of it. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter vertical_distance: Desired vertical distance in m.
Not used when vertical distance of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startParabolaEncoder:(NSUInteger)providedParamsBitField speed:(float)speed verticalDistance:(float)verticalDistance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startParabolaEncoder(providedParamsBitField:speed:verticalDistance:playMode:));

/**
 Start a candle animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone flies horizontally in direction of the target then flies up. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter vertical_distance: Desired vertical distance in m.
Not used when vertical distance of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startCandleEncoder:(NSUInteger)providedParamsBitField speed:(float)speed verticalDistance:(float)verticalDistance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startCandleEncoder(providedParamsBitField:speed:verticalDistance:playMode:));

/**
 Start a dolly slide animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone slides horizontally. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter angle: Desired drone-target-destination angle in rad.
Not used when angle of provided_params param is 0.
 - parameter horizontal_distance: Desired horizontal distance in m..
Not used when angle of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startDollySlideEncoder:(NSUInteger)providedParamsBitField speed:(float)speed angle:(float)angle horizontalDistance:(float)horizontalDistance playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startDollySlideEncoder(providedParamsBitField:speed:angle:horizontalDistance:playMode:));

/**
 Start a vertigo animation.
Starting this animation when another animation is started (or canceling) will cancel the current one to start this one.
This animation will make the drone slides horizontally. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter duration: Desired duration in seconds.
Not used when duration of provided_params param is 0.
 - parameter max_zoom_level: Desired maximum zoom level.
Not used when max_zoom_level of provided_params param is 0.
 - parameter finish_action: Desired action to execute at the end of the animation.
Not used when finish_action of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startVertigoEncoder:(NSUInteger)providedParamsBitField duration:(float)duration maxZoomLevel:(float)maxZoomLevel finishAction:(ArsdkFeatureAnimationVertigoFinishAction)finishAction playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startVertigoEncoder(providedParamsBitField:duration:maxZoomLevel:finishAction:playMode:));

/**
 Starts a twist-up animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation will make the drone move up and rotate slowly on itself until the end of the animation, first with the camera looking down and when it reaches its target altitude, slowly looking up to the horizon. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter vertical_distance: Desired vertical distance in m.
Not used when vertical distance of provided_params param is 0.
 - parameter rotation_angle: Desired rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
Not used when rotation angle of provided_params param is 0.
 - parameter rotation_speed: The desired rotation speed of the anim in rad/s
Not used when rotation speed of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startTwistUpEncoder:(NSUInteger)providedParamsBitField speed:(float)speed verticalDistance:(float)verticalDistance rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startTwistUpEncoder(providedParamsBitField:speed:verticalDistance:rotationAngle:rotationSpeed:playMode:));

/**
 Starts a positionned twist-up animation.
Starting this animation when another animation is started (or canceling), will cancel the current one to start this one.
This animation needs a target.
This animation will make the drone move above the target then up and rotate slowly on itself until the end of the animation. 

 - parameter provided_params: Bitfield of the config parameters on which given values should be used.
Setting a bit to 1 means that the corresponding parameter should be used,
otherwise default value should be used.
 - parameter speed: Desired speed in m/s.
Not used when speed of provided_params param is 0.
 - parameter vertical_distance: Desired vertical distance in m.
Not used when vertical distance of provided_params param is 0.
 - parameter rotation_angle: Desired rotation angle in rad. Positive value makes a clockwise panorama, negative is anti-clockwise.
Not used when rotation angle of provided_params param is 0.
 - parameter rotation_speed: The desired rotation speed of the anim in rad/s
Not used when rotation speed of provided_params param is 0.
 - parameter play_mode: Desired play mode.
Not used when play mode of provided_params param is 0.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startPositionTwistUpEncoder:(NSUInteger)providedParamsBitField speed:(float)speed verticalDistance:(float)verticalDistance rotationAngle:(float)rotationAngle rotationSpeed:(float)rotationSpeed playMode:(ArsdkFeatureAnimationPlayMode)playMode
NS_SWIFT_NAME(startPositionTwistUpEncoder(providedParamsBitField:speed:verticalDistance:rotationAngle:rotationSpeed:playMode:));

/**
 Starts an horizontal 180 degrees photo panorama animation.
Starting this animation when another animation is started (or canceling) will cancel the current one to start this one.
This animation will make the drone perform a 180 degrees rotation on the yaw axis while take photos at various angles 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startHorizontal180PhotoPanoramaEncoder
NS_SWIFT_NAME(startHorizontal180PhotoPanoramaEncoder());

/**
 Starts a vertical 180 degrees photo panorama animation.
Starting this animation when another animation is started (or canceling) will cancel the current one to start this one.
This animation will make the the drone camera perform a 180 degrees rotation on the tilt axis while taking photos at various angles. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startVertical180PhotoPanoramaEncoder
NS_SWIFT_NAME(startVertical180PhotoPanoramaEncoder());

/**
 Starts a spherical photo panorama animation.
Starting this animation when another animation is started (or canceling) will cancel the current one to start this one.
This animation will make the drone perform a 360 degrees rotation on the yaw axis. At various angles, rotation pauses, drone camera performs a 180 degrees rotation on the tilt axis while taking photos at various angles, then drone yaw rotation resumes. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startSphericalPhotoPanoramaEncoder
NS_SWIFT_NAME(startSphericalPhotoPanoramaEncoder());

@end

