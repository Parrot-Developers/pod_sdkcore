/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoAnimationsstateUid;

struct arsdk_cmd;

/** State of jump load */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoAnimationsstateJumploadchangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateSdkCoreUnknown = -1,

    /** Unknown state (obsolete). */
    ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateUnknown = 0,

    /** Unloaded state. */
    ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateUnloaded = 1,

    /** Loaded state. */
    ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateLoaded = 2,

    /** Unknown state (obsolete). */
    ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateBusy = 3,

    /** Unloaded state and low battery. */
    ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateLowBatteryUnloaded = 4,

    /** Loaded state and low battery. */
    ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateLowBatteryLoaded = 5,

};
#define ArsdkFeatureJpsumoAnimationsstateJumploadchangedStateCnt 6

/** State of jump type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoAnimationsstateJumptypechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoAnimationsstateJumptypechangedStateSdkCoreUnknown = -1,

    /** None. */
    ArsdkFeatureJpsumoAnimationsstateJumptypechangedStateNone = 0,

    /** Long jump type. */
    ArsdkFeatureJpsumoAnimationsstateJumptypechangedStateLong = 1,

    /** High jump type. */
    ArsdkFeatureJpsumoAnimationsstateJumptypechangedStateHigh = 2,

};
#define ArsdkFeatureJpsumoAnimationsstateJumptypechangedStateCnt 3

/** Enum describing the problem of the motor */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoAnimationsstateJumpmotorproblemchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoAnimationsstateJumpmotorproblemchangedErrorSdkCoreUnknown = -1,

    /** None. */
    ArsdkFeatureJpsumoAnimationsstateJumpmotorproblemchangedErrorNone = 0,

    /** Motor blocked */
    ArsdkFeatureJpsumoAnimationsstateJumpmotorproblemchangedErrorBlocked = 1,

    /** Motor over heated */
    ArsdkFeatureJpsumoAnimationsstateJumpmotorproblemchangedErrorOverHeated = 2,

};
#define ArsdkFeatureJpsumoAnimationsstateJumpmotorproblemchangedErrorCnt 3

@protocol ArsdkFeatureJpsumoAnimationsstateCallback<NSObject>

@optional

/**
 State of jump load changed 

 - parameter state: 
*/
- (void)onJumpLoadChanged:(ArsdkFeatureJpsumoAnimationsstateJumploadchangedState)state
NS_SWIFT_NAME(onJumpLoadChanged(state:));

/**
 State of jump type changed. 

 - parameter state: 
*/
- (void)onJumpTypeChanged:(ArsdkFeatureJpsumoAnimationsstateJumptypechangedState)state
NS_SWIFT_NAME(onJumpTypeChanged(state:));

/**
 State about the jump motor problem 

 - parameter error: 
*/
- (void)onJumpMotorProblemChanged:(ArsdkFeatureJpsumoAnimationsstateJumpmotorproblemchangedError)error
NS_SWIFT_NAME(onJumpMotorProblemChanged(error:));


@end

@interface ArsdkFeatureJpsumoAnimationsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoAnimationsstateCallback>)callback;

@end

