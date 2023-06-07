/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonAnimationsstateUid;

struct arsdk_cmd;

/** Animation type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAnimationsstateListAnim) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAnimationsstateListAnimSdkCoreUnknown = -1,

    /** Flash headlights. */
    ArsdkFeatureCommonAnimationsstateListAnimHeadlightsFlash = 0,

    /** Blink headlights. */
    ArsdkFeatureCommonAnimationsstateListAnimHeadlightsBlink = 1,

    /** Oscillating headlights. */
    ArsdkFeatureCommonAnimationsstateListAnimHeadlightsOscillation = 2,

    /** Spin animation. */
    ArsdkFeatureCommonAnimationsstateListAnimSpin = 3,

    /** Tap animation. */
    ArsdkFeatureCommonAnimationsstateListAnimTap = 4,

    /** Slow shake animation. */
    ArsdkFeatureCommonAnimationsstateListAnimSlowShake = 5,

    /** Metronome animation. */
    ArsdkFeatureCommonAnimationsstateListAnimMetronome = 6,

    /** Standing dance animation. */
    ArsdkFeatureCommonAnimationsstateListAnimOndulation = 7,

    /** Spin jump animation. */
    ArsdkFeatureCommonAnimationsstateListAnimSpinJump = 8,

    /** Spin that end in standing posture, or in jumper if it was standing animation. */
    ArsdkFeatureCommonAnimationsstateListAnimSpinToPosture = 9,

    /** Spiral animation. */
    ArsdkFeatureCommonAnimationsstateListAnimSpiral = 10,

    /** Slalom animation. */
    ArsdkFeatureCommonAnimationsstateListAnimSlalom = 11,

    /** Boost animation. */
    ArsdkFeatureCommonAnimationsstateListAnimBoost = 12,

    /** Make a looping. (Only for WingX) */
    ArsdkFeatureCommonAnimationsstateListAnimLooping = 13,

    /** Make a barrel roll of 180 degree turning on right. (Only for WingX) */
    ArsdkFeatureCommonAnimationsstateListAnimBarrelRoll180Right = 14,

    /** Make a barrel roll of 180 degree turning on left. (Only for WingX) */
    ArsdkFeatureCommonAnimationsstateListAnimBarrelRoll180Left = 15,

    /** Put the drone upside down. (Only for WingX) */
    ArsdkFeatureCommonAnimationsstateListAnimBackswap = 16,

};
#define ArsdkFeatureCommonAnimationsstateListAnimCnt 17

/** State of the animation */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAnimationsstateListState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAnimationsstateListStateSdkCoreUnknown = -1,

    /** animation is stopped */
    ArsdkFeatureCommonAnimationsstateListStateStopped = 0,

    /** animation is started */
    ArsdkFeatureCommonAnimationsstateListStateStarted = 1,

    /** The animation is not available */
    ArsdkFeatureCommonAnimationsstateListStateNotavailable = 2,

};
#define ArsdkFeatureCommonAnimationsstateListStateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonAnimationsstateListError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonAnimationsstateListErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureCommonAnimationsstateListErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeatureCommonAnimationsstateListErrorUnknown = 1,

};
#define ArsdkFeatureCommonAnimationsstateListErrorCnt 2

@protocol ArsdkFeatureCommonAnimationsstateCallback<NSObject>

@optional

/**
 Paramaterless animations state list. 

 - parameter anim: 
 - parameter state: 
 - parameter error: 
*/
- (void)onList:(ArsdkFeatureCommonAnimationsstateListAnim)anim state:(ArsdkFeatureCommonAnimationsstateListState)state error:(ArsdkFeatureCommonAnimationsstateListError)error
NS_SWIFT_NAME(onList(anim:state:error:));


@end

@interface ArsdkFeatureCommonAnimationsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonAnimationsstateCallback>)callback;

@end

