/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonAnimationsUid;

struct arsdk_cmd;

/** Animation to start. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAnimationsStartanimationAnim) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAnimationsStartanimationAnimSdkCoreUnknown = -1,

    /** Flash headlights. */
    ArsdkFeatureCommonAnimationsStartanimationAnimHeadlightsFlash = 0,

    /** Blink headlights. */
    ArsdkFeatureCommonAnimationsStartanimationAnimHeadlightsBlink = 1,

    /** Oscillating headlights. */
    ArsdkFeatureCommonAnimationsStartanimationAnimHeadlightsOscillation = 2,

    /** Spin animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimSpin = 3,

    /** Tap animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimTap = 4,

    /** Slow shake animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimSlowShake = 5,

    /** Metronome animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimMetronome = 6,

    /** Standing dance animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimOndulation = 7,

    /** Spin jump animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimSpinJump = 8,

    /** Spin that end in standing posture, or in jumper if it was standing animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimSpinToPosture = 9,

    /** Spiral animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimSpiral = 10,

    /** Slalom animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimSlalom = 11,

    /** Boost animation. */
    ArsdkFeatureCommonAnimationsStartanimationAnimBoost = 12,

    /** Make a looping. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStartanimationAnimLooping = 13,

    /** Make a barrel roll of 180 degree turning on right. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStartanimationAnimBarrelRoll180Right = 14,

    /** Make a barrel roll of 180 degree turning on left. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStartanimationAnimBarrelRoll180Left = 15,

    /** Put the drone upside down. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStartanimationAnimBackswap = 16,

};
#define ArsdkFeatureCommonAnimationsStartanimationAnimCnt 17

/** Animation to stop. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAnimationsStopanimationAnim) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAnimationsStopanimationAnimSdkCoreUnknown = -1,

    /** Flash headlights. */
    ArsdkFeatureCommonAnimationsStopanimationAnimHeadlightsFlash = 0,

    /** Blink headlights. */
    ArsdkFeatureCommonAnimationsStopanimationAnimHeadlightsBlink = 1,

    /** Oscillating headlights. */
    ArsdkFeatureCommonAnimationsStopanimationAnimHeadlightsOscillation = 2,

    /** Spin animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimSpin = 3,

    /** Tap animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimTap = 4,

    /** Slow shake animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimSlowShake = 5,

    /** Metronome animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimMetronome = 6,

    /** Standing dance animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimOndulation = 7,

    /** Spin jump animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimSpinJump = 8,

    /** Spin that end in standing posture, or in jumper if it was standing animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimSpinToPosture = 9,

    /** Spiral animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimSpiral = 10,

    /** Slalom animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimSlalom = 11,

    /** Boost animation. */
    ArsdkFeatureCommonAnimationsStopanimationAnimBoost = 12,

    /** Make a looping. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStopanimationAnimLooping = 13,

    /** Make a barrel roll of 180 degree turning on right. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStopanimationAnimBarrelRoll180Right = 14,

    /** Make a barrel roll of 180 degree turning on left. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStopanimationAnimBarrelRoll180Left = 15,

    /** Put the drone upside down. (Only for WingX) */
    ArsdkFeatureCommonAnimationsStopanimationAnimBackswap = 16,

};
#define ArsdkFeatureCommonAnimationsStopanimationAnimCnt 17

@interface ArsdkFeatureCommonAnimations : NSObject

/**
 Start a paramaterless animation.
List of available animations can be retrieved from [AnimationsStateList](#0-25-0). 

 - parameter anim: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startAnimationEncoder:(ArsdkFeatureCommonAnimationsStartanimationAnim)anim
NS_SWIFT_NAME(startAnimationEncoder(anim:));

/**
 Stop a paramaterless animation.
List of running animations can be retrieved from [AnimationsStateList](#0-25-0). 

 - parameter anim: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopAnimationEncoder:(ArsdkFeatureCommonAnimationsStopanimationAnim)anim
NS_SWIFT_NAME(stopAnimationEncoder(anim:));

/**
 Stop all running paramaterless animations.
List of running animations can be retrieved from [AnimationsStateList](#0-25-0). 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopAllAnimationsEncoder
NS_SWIFT_NAME(stopAllAnimationsEncoder());

@end

