/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureFollowMeUid;

struct arsdk_cmd;

/** FollowMe mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeModeSdkCoreUnknown = -1,

    /** No follow me */
    ArsdkFeatureFollowMeModeNone = 0,

    /** Look at the target without moving automatically */
    ArsdkFeatureFollowMeModeLookAt = 1,

    /** Follow the target keeping the same vector */
    ArsdkFeatureFollowMeModeGeographic = 2,

    /** Follow the target keeping the same orientation to its direction */
    ArsdkFeatureFollowMeModeRelative = 3,

    /** Follow the target as it was held by a leash */
    ArsdkFeatureFollowMeModeLeash = 4,

};
#define ArsdkFeatureFollowMeModeCnt 5

/** FollowMe behavior */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeBehavior) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeBehaviorSdkCoreUnknown = -1,

    /** Drone is not moving according to the target
This means that at least one required input is missing */
    ArsdkFeatureFollowMeBehaviorIdle = 0,

    /** Follow the target */
    ArsdkFeatureFollowMeBehaviorFollow = 1,

    /** Look at the target without moving */
    ArsdkFeatureFollowMeBehaviorLookAt = 2,

};
#define ArsdkFeatureFollowMeBehaviorCnt 3

/** Input values used by the FollowMe */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeInput) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeInputSdkCoreUnknown = -1,

    /** Drone is calibrated */
    ArsdkFeatureFollowMeInputDroneCalibrated = 0,

    /** Drone gps has fixed and has a good accuracy */
    ArsdkFeatureFollowMeInputDroneGpsGoodAccuracy = 1,

    /** Target gps data is known and has a good accuracy */
    ArsdkFeatureFollowMeInputTargetGpsGoodAccuracy = 2,

    /** Target barometer data is available */
    ArsdkFeatureFollowMeInputTargetBarometerOk = 3,

    /** Drone is far enough from the target */
    ArsdkFeatureFollowMeInputDroneFarEnough = 4,

    /** Drone is high enough from the ground */
    ArsdkFeatureFollowMeInputDroneHighEnough = 5,

    /** Target detection is done by image detection among other things */
    ArsdkFeatureFollowMeInputImageDetection = 6,

    /** Target is at a good speed */
    ArsdkFeatureFollowMeInputTargetGoodSpeed = 7,

    /** Drone is close enough to the target */
    ArsdkFeatureFollowMeInputDroneCloseEnough = 8,

};
#define ArsdkFeatureFollowMeInputCnt 9

@interface ArsdkFeatureFollowMeInputBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeInput)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeInput val))cb;

@end

/** Geographic and Relative follow me configuration parameters */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeGeoRelConfigureParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeGeoRelConfigureParamSdkCoreUnknown = -1,

    /** Distance configuration */
    ArsdkFeatureFollowMeGeoRelConfigureParamDistance = 0,

    /** Elevation configuration */
    ArsdkFeatureFollowMeGeoRelConfigureParamElevation = 1,

    /** Azimuth configuration */
    ArsdkFeatureFollowMeGeoRelConfigureParamAzimuth = 2,

};
#define ArsdkFeatureFollowMeGeoRelConfigureParamCnt 3

@interface ArsdkFeatureFollowMeGeoRelConfigureParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeGeoRelConfigureParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeGeoRelConfigureParam val))cb;

@end

/** FollowMe animation type */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeAnimation) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeAnimationSdkCoreUnknown = -1,

    /** No animation */
    ArsdkFeatureFollowMeAnimationNone = 0,

    /** Turn around the target */
    ArsdkFeatureFollowMeAnimationHelicoid = 1,

    /** Pass by the zenith and change of side */
    ArsdkFeatureFollowMeAnimationSwing = 2,

    /** Fly far from the target and fly back */
    ArsdkFeatureFollowMeAnimationBoomerang = 3,

    /** Move to the target and go high when it is near */
    ArsdkFeatureFollowMeAnimationCandle = 4,

    /** Fly in line */
    ArsdkFeatureFollowMeAnimationDollySlide = 5,

};
#define ArsdkFeatureFollowMeAnimationCnt 6

@interface ArsdkFeatureFollowMeAnimationBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeAnimation)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeAnimation val))cb;

@end

/** Helicoid animation configuration parameters. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeHelicoidConfigureParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeHelicoidConfigureParamSdkCoreUnknown = -1,

    /** Speed parameter */
    ArsdkFeatureFollowMeHelicoidConfigureParamSpeed = 0,

    /** Number of turn */
    ArsdkFeatureFollowMeHelicoidConfigureParamRevolutionNb = 1,

    /** Vertical distance */
    ArsdkFeatureFollowMeHelicoidConfigureParamVerticalDistance = 2,

};
#define ArsdkFeatureFollowMeHelicoidConfigureParamCnt 3

@interface ArsdkFeatureFollowMeHelicoidConfigureParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeHelicoidConfigureParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeHelicoidConfigureParam val))cb;

@end

/** Swing configure parameters. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeSwingConfigureParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeSwingConfigureParamSdkCoreUnknown = -1,

    /** Speed parameter */
    ArsdkFeatureFollowMeSwingConfigureParamSpeed = 0,

    /** Vertical distance */
    ArsdkFeatureFollowMeSwingConfigureParamVerticalDistance = 1,

};
#define ArsdkFeatureFollowMeSwingConfigureParamCnt 2

@interface ArsdkFeatureFollowMeSwingConfigureParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeSwingConfigureParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeSwingConfigureParam val))cb;

@end

/** Boomerang animation configure parameters. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeBoomerangConfigureParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeBoomerangConfigureParamSdkCoreUnknown = -1,

    /** Speed parameter */
    ArsdkFeatureFollowMeBoomerangConfigureParamSpeed = 0,

    /** Distance */
    ArsdkFeatureFollowMeBoomerangConfigureParamDistance = 1,

};
#define ArsdkFeatureFollowMeBoomerangConfigureParamCnt 2

@interface ArsdkFeatureFollowMeBoomerangConfigureParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeBoomerangConfigureParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeBoomerangConfigureParam val))cb;

@end

/** Candle animation configure parameters. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeCandleConfigureParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeCandleConfigureParamSdkCoreUnknown = -1,

    /** Speed parameter */
    ArsdkFeatureFollowMeCandleConfigureParamSpeed = 0,

    /** Follow the target keeping the same vector */
    ArsdkFeatureFollowMeCandleConfigureParamVerticalDistance = 1,

};
#define ArsdkFeatureFollowMeCandleConfigureParamCnt 2

@interface ArsdkFeatureFollowMeCandleConfigureParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeCandleConfigureParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeCandleConfigureParam val))cb;

@end

/** Dolly slide animation configure parameters. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeDollySlideConfigureParam) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeDollySlideConfigureParamSdkCoreUnknown = -1,

    /** Speed parameter */
    ArsdkFeatureFollowMeDollySlideConfigureParamSpeed = 0,

    /** Angle */
    ArsdkFeatureFollowMeDollySlideConfigureParamAngle = 1,

    /** Horizontal distance */
    ArsdkFeatureFollowMeDollySlideConfigureParamHorizontalDistance = 2,

};
#define ArsdkFeatureFollowMeDollySlideConfigureParamCnt 3

@interface ArsdkFeatureFollowMeDollySlideConfigureParamBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFollowMeDollySlideConfigureParam)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFollowMeDollySlideConfigureParam val))cb;

@end

/** State of the image detection */
typedef NS_ENUM(NSInteger, ArsdkFeatureFollowMeImageDetectionStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFollowMeImageDetectionStatusSdkCoreUnknown = -1,

    /** No image detection */
    ArsdkFeatureFollowMeImageDetectionStatusNone = 0,

    /** Image detection is considered ok by the drone */
    ArsdkFeatureFollowMeImageDetectionStatusOk = 1,

    /** Image detection is considered lost or
in contradiction with gps value.
This state will remain until a new selection of the target is done */
    ArsdkFeatureFollowMeImageDetectionStatusLost = 2,

};
#define ArsdkFeatureFollowMeImageDetectionStatusCnt 3

@protocol ArsdkFeatureFollowMeCallback<NSObject>

@optional

/**
  

 - parameter mode: Mode asked by user
 - parameter behavior: Behavior of the drone according to the asked mode
 - parameter animation: Current animation.
This parameter has been deprecated. Please use the animation feature.
 - parameter animation_available: List of available animations
This parameter has been deprecated. Please use the animation feature.
*/
- (void)onState:(ArsdkFeatureFollowMeMode)mode behavior:(ArsdkFeatureFollowMeBehavior)behavior animation:(ArsdkFeatureFollowMeAnimation)animation animationAvailableBitField:(NSUInteger)animationAvailableBitField
NS_SWIFT_NAME(onState(mode:behavior:animation:animationAvailableBitField:));

/**
  

 - parameter mode: 
 - parameter missing_requirements: List of missing requirements to enter this mode on start.
Bit is 0 if the input is missing, 1 if the input is ok.
For example, if the first bit is equal to 0, it means that the mode is not
available because the drone is not calibrated.
If at least one input is missing, drone won't able to follow the target.
It won't use any fallback either
 - parameter improvements: List of inputs that can improve the mode.
Bit is 0 if the input is missing, i.e.: the mode can be improved if this
input would be fulfilled, 1 if the input is ok.
For example, if the first bit is equal to 0, it means that the mode would be improved
if the drone would be calibrated.
If at least one input is missing, a downgraded mode will be used. See behavior
*/
- (void)onModeInfo:(ArsdkFeatureFollowMeMode)mode missingRequirementsBitField:(NSUInteger)missingRequirementsBitField improvementsBitField:(NSUInteger)improvementsBitField
NS_SWIFT_NAME(onModeInfo(mode:missingRequirementsBitField:improvementsBitField:));

/**
 Geographic configuration changed.
This event is only valid when arg behavior in [state](#134-3) is equal to Follow. 

 - parameter use_default: 
 - parameter distance: The distance leader-follower in meter
If distance is default, this value is the current drone distance
 - parameter elevation: The elevation leader-follower in rad
If elevation is default, this value is the current leader to drone elevation
 - parameter azimuth: The azimuth north-leader-follower in rad
If azimuth is default, this value is the current leader to drone azimuth
*/
- (void)onGeographicConfig:(NSUInteger)useDefaultBitField distance:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(onGeographicConfig(useDefaultBitField:distance:elevation:azimuth:));

/**
 Relative configuration changed.
This event is only valid when arg behavior in [state](#134-3) is equal to Follow. 

 - parameter use_default: 
 - parameter distance: The distance leader-follower in meter
If distance is default, this value is the current drone distance
 - parameter elevation: The elevation leader-follower in rad
If elevation is default, this value is the current leader to drone elevation
 - parameter azimuth: The azimuth course-leader-follower in rad
If azimuth is default, this value is the current leader to drone azimuth
*/
- (void)onRelativeConfig:(NSUInteger)useDefaultBitField distance:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(onRelativeConfig(useDefaultBitField:distance:elevation:azimuth:));

/**
  

 - parameter latitude: Target latitude (in degrees)
 - parameter longitude: Target longitude (in degrees)
 - parameter altitude: Target altitude (in meters, relative to sea level)
 - parameter north_speed: Target north speed (in m/s)
 - parameter east_speed: Target east speed (in m/s)
 - parameter down_speed: Target down speed (in m/s)
*/
- (void)onTargetTrajectory:(double)latitude longitude:(double)longitude altitude:(float)altitude northSpeed:(float)northSpeed eastSpeed:(float)eastSpeed downSpeed:(float)downSpeed
NS_SWIFT_NAME(onTargetTrajectory(latitude:longitude:altitude:northSpeed:eastSpeed:downSpeed:));

/**
 Helicoid animation configuration.
This should only be taken in account if arg animation in [state](#134-3) is equal to helicoid.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The speed of the anim in m/s
 - parameter revolution_nb: The number of revolution (in turn)
Negative value is infinite
 - parameter vertical_distance: Distance that will be made by the product to reach the top of the helicoid in m
*/
- (void)onHelicoidAnimConfig:(NSUInteger)useDefaultBitField speed:(float)speed revolutionNb:(float)revolutionNb verticalDistance:(float)verticalDistance
NS_SWIFT_NAME(onHelicoidAnimConfig(useDefaultBitField:speed:revolutionNb:verticalDistance:));

/**
 Swing animation configuration changed.
This should only be taken in account if arg animation in [state](#134-3) is equal to swing.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The speed of the anim in m/s
 - parameter vertical_distance: Distance that will be made by the product to reach the top of the swing in m
*/
- (void)onSwingAnimConfig:(NSUInteger)useDefaultBitField speed:(float)speed verticalDistance:(float)verticalDistance
NS_SWIFT_NAME(onSwingAnimConfig(useDefaultBitField:speed:verticalDistance:));

/**
 Boomerang animation configuration changed.
This should only be taken in account if arg animation in [state](#134-3) is equal to boomerang.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The speed of the anim in m/s
 - parameter distance: Distance that will be made by the product to reach its return point in m
*/
- (void)onBoomerangAnimConfig:(NSUInteger)useDefaultBitField speed:(float)speed distance:(float)distance
NS_SWIFT_NAME(onBoomerangAnimConfig(useDefaultBitField:speed:distance:));

/**
 Candle animation configuration changed.
This should only be taken in account if arg animation in [state](#134-3) is equal to candle.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The speed of the anim in m/s
 - parameter vertical_distance: Distance that will be made by the product to reach the top of the vertical zoom-out in m
*/
- (void)onCandleAnimConfig:(NSUInteger)useDefaultBitField speed:(float)speed verticalDistance:(float)verticalDistance
NS_SWIFT_NAME(onCandleAnimConfig(useDefaultBitField:speed:verticalDistance:));

/**
 DollySlide animation configuration changed.
This should only be taken in account if arg animation in [state](#134-3) is equal to dolly_slide.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The speed of the anim in m/s
 - parameter angle: Angle Product-User-Target in rad
 - parameter horizontal_distance: Distance that will be made by the product to reach its target in m
*/
- (void)onDollySlideAnimConfig:(NSUInteger)useDefaultBitField speed:(float)speed angle:(float)angle horizontalDistance:(float)horizontalDistance
NS_SWIFT_NAME(onDollySlideAnimConfig(useDefaultBitField:speed:angle:horizontalDistance:));

/**
  

 - parameter horizontal: Horizontal position in the video (in %, from left to right)
 - parameter vertical: Vertical position in the video (in %, from bottom to top)
*/
- (void)onTargetFramingPositionChanged:(NSInteger)horizontal vertical:(NSInteger)vertical
NS_SWIFT_NAME(onTargetFramingPositionChanged(horizontal:vertical:));

/**
  

 - parameter state: 
*/
- (void)onTargetImageDetectionState:(ArsdkFeatureFollowMeImageDetectionStatus)state
NS_SWIFT_NAME(onTargetImageDetectionState(state:));

/**
  

 - parameter state: Boolean. 1 if the target is the controller, 0 otherwise
*/
- (void)onTargetIsController:(NSUInteger)state
NS_SWIFT_NAME(onTargetIsController(state:));

/**
 Leash mode configuration changed.
This event is only valid when arg behavior in [state](#134-3) is equal to Follow. 

 - parameter use_default: 
 - parameter distance: The distance leader-follower in meter
If distance is default, this value is the current drone distance
 - parameter elevation: The elevation leader-follower in rad
If elevation is default, this value is the current leader to drone elevation
 - parameter azimuth: The azimuth course-leader-follower in rad
If azimuth is default, this value is the current leader to drone azimuth
*/
- (void)onLeashConfig:(NSUInteger)useDefaultBitField distance:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(onLeashConfig(useDefaultBitField:distance:elevation:azimuth:));


@end

@interface ArsdkFeatureFollowMe : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureFollowMeCallback>)callback;

/**
 Start a FollowMe with all its params set to the default params.
Sending this command will stop other running followMe. 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startEncoder:(ArsdkFeatureFollowMeMode)mode
NS_SWIFT_NAME(startEncoder(mode:));

/**
 Stop current followMe. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopEncoder
NS_SWIFT_NAME(stopEncoder());

/**
 Configure the geographic FollowMe.
This should only be taken in account if arg behavior in [state](#134-3) is equal to Follow. 

 - parameter use_default: 
 - parameter distance: The distance leader-follower in meter
Not used when arg start is at 0
 - parameter elevation: The elevation leader-follower in rad (not used when arg start is at 0)
 - parameter azimuth: The azimuth north-leader-follower in rad (not used when arg start is at 0)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))configureGeographicEncoder:(NSUInteger)useDefaultBitField distance:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(configureGeographicEncoder(useDefaultBitField:distance:elevation:azimuth:));

/**
 Configure the relative FollowMe.
This should only be taken in account if arg behavior in [state](#134-3) is equal to Follow 

 - parameter use_default: 
 - parameter distance: The distance leader-follower in meter
 - parameter elevation: The elevation leader-follower in rad
 - parameter azimuth: The azimuth north-leader-follower in rad
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))configureRelativeEncoder:(NSUInteger)useDefaultBitField distance:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(configureRelativeEncoder(useDefaultBitField:distance:elevation:azimuth:));

/**
 Stop current followMe animation.
This message has been deprecated. Please use the animation feature. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopAnimationEncoder
NS_SWIFT_NAME(stopAnimationEncoder());

/**
 Start a helicoid animation.
The helicoid animation allows the drone to revolve around the target while going up, with a fixed radius.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The desired speed of the anim in m/s
Not used when speed_is_default is 1
 - parameter revolution_number: The number of revolution (in turn)
Negative value is infinite
Example: 1.5 makes an entire turn plus half of a turn
Not used when revolutionNb_is_default is 1
 - parameter vertical_distance: Distance that should be made by the product to reach the top of the helicoid in m
Not used when verticalDistance_is_default is 1
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startHelicoidAnimEncoder:(NSUInteger)useDefaultBitField speed:(float)speed revolutionNumber:(float)revolutionNumber verticalDistance:(float)verticalDistance
NS_SWIFT_NAME(startHelicoidAnimEncoder(useDefaultBitField:speed:revolutionNumber:verticalDistance:));

/**
 Start a swing animation.
The swing animation enables a vertical point of view while the drone passes over the target.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The desired speed of the anim in m/s
Not used when speed_is_default is 1
Not used when start is 0
 - parameter vertical_distance: Distance that should be made by the product to reach the top of the swing in m
Not used when verticalDistance_is_default is 1
Not used when start is 0
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startSwingAnimEncoder:(NSUInteger)useDefaultBitField speed:(float)speed verticalDistance:(float)verticalDistance
NS_SWIFT_NAME(startSwingAnimEncoder(useDefaultBitField:speed:verticalDistance:));

/**
 Start a boomerang animation.
The boomerang animation enables a zoom-out/zoom-in trajectory while preserving the framing chosen by the user.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The desired speed of the anim in m/s
Not used when speed_is_default is 1
Not used when start is 0
 - parameter distance: Distance that should be made by the product to reach its return point in m
Not used when distance_is_default is 1
Not used when start is 0
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startBoomerangAnimEncoder:(NSUInteger)useDefaultBitField speed:(float)speed distance:(float)distance
NS_SWIFT_NAME(startBoomerangAnimEncoder(useDefaultBitField:speed:distance:));

/**
 Start a candle animation.
The candle animation enables a zoom-in directly on the target followed by a vertical zoom-out.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The desired speed of the anim in m/s
Not used when speed_is_default is 1
Not used when start is 0
 - parameter vertical_distance: Distance that should be made by the product to reach the top of the vertical zoom-out in m
Not used when verticalDistance_is_default is 1
Not used when start is 0
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startCandleAnimEncoder:(NSUInteger)useDefaultBitField speed:(float)speed verticalDistance:(float)verticalDistance
NS_SWIFT_NAME(startCandleAnimEncoder(useDefaultBitField:speed:verticalDistance:));

/**
 Start a dolly slide animation.
Allows the drone to catch up to the target before flying past it, creating a zoom-in/zoom_out effect without a curved path.
This message has been deprecated. Please use the animation feature. 

 - parameter use_default: 
 - parameter speed: The desired speed of the anim in m/s
Not used when speed_is_default is 1
Not used when start is 0
 - parameter angle: Desired angle Product-User-Target in rad
Not used when angle_is_default is 1
Not used when start is 0
 - parameter horizontal_distance: Distance that should be made by the product to reach its target in m
Not used when horizontalDistance_is_default is 1
Not used when start is 0
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startDollySlideAnimEncoder:(NSUInteger)useDefaultBitField speed:(float)speed angle:(float)angle horizontalDistance:(float)horizontalDistance
NS_SWIFT_NAME(startDollySlideAnimEncoder(useDefaultBitField:speed:angle:horizontalDistance:));

/**
 Set the desired target framing in the video. 

 - parameter horizontal: Horizontal position in the video (in %, from left to right)
 - parameter vertical: Vertical position in the video (in %, from bottom to top)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))targetFramingPositionEncoder:(NSInteger)horizontal vertical:(NSInteger)vertical
NS_SWIFT_NAME(targetFramingPositionEncoder(horizontal:vertical:));

/**
 Send vision detection results. 

 - parameter target_azimuth: Horizontal north-drone-target angle in radian
 - parameter target_elevation: Vertical angle horizon-drone-target in radian
 - parameter change_of_scale: Normalized relative radial speed in 1/second
 - parameter confidence_index: Confidence index of the detection (from 0 to 255, the highest is the best)
 - parameter is_new_selection: Boolean. 1 if the selection is new, 0 otherwise
 - parameter timestamp: Acquisition time of processed picture in millisecond
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))targetImageDetectionEncoder:(float)targetAzimuth targetElevation:(float)targetElevation changeOfScale:(float)changeOfScale confidenceIndex:(NSUInteger)confidenceIndex isNewSelection:(NSUInteger)isNewSelection timestamp:(uint64_t)timestamp
NS_SWIFT_NAME(targetImageDetectionEncoder(targetAzimuth:targetElevation:changeOfScale:confidenceIndex:isNewSelection:timestamp:));

/**
 Tells that the target to follow is the controller and drone can use controller gps sent by [controller_info gps](#140-1) and barometer data sent by [controller_info barometer](#140-2) as valid to locate the target. 

 - parameter target_is_controller: Boolean. 1 if the target is the controller, 0 otherwise
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setTargetIsControllerEncoder:(NSUInteger)targetIsController
NS_SWIFT_NAME(setTargetIsControllerEncoder(targetIsController:));

/**
 Configure the leash mode of FollowMe.
This should only be taken in account if arg behavior in [state](#134-3) is equal to Follow 

 - parameter use_default: 
 - parameter distance: The distance leader-follower in meter
 - parameter elevation: The elevation leader-follower in rad
 - parameter azimuth: The azimuth north-leader-follower in rad
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))configureLeashEncoder:(NSUInteger)useDefaultBitField distance:(float)distance elevation:(float)elevation azimuth:(float)azimuth
NS_SWIFT_NAME(configureLeashEncoder(useDefaultBitField:distance:elevation:azimuth:));

@end

