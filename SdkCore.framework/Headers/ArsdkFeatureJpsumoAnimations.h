/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoAnimationsUid;

struct arsdk_cmd;

/** Type of jump */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoAnimationsJumpType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoAnimationsJumpTypeSdkCoreUnknown = -1,

    /** Long jump. */
    ArsdkFeatureJpsumoAnimationsJumpTypeLong = 0,

    /** High jump */
    ArsdkFeatureJpsumoAnimationsJumpTypeHigh = 1,

};
#define ArsdkFeatureJpsumoAnimationsJumpTypeCnt 2

/** Animation ID. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoAnimationsSimpleanimationId) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdSdkCoreUnknown = -1,

    /** Stop ongoing animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdStop = 0,

    /** Start a spin animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdSpin = 1,

    /** Start a tap animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdTap = 2,

    /** Start a slow shake animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdSlowshake = 3,

    /** Start a Metronome animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdMetronome = 4,

    /** Start a standing dance animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdOndulation = 5,

    /** Start a spin jump animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdSpinjump = 6,

    /** Start a spin that end in standing posture, or in jumper if it was standing animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdSpintoposture = 7,

    /** Start a spiral animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdSpiral = 8,

    /** Start a slalom animation. */
    ArsdkFeatureJpsumoAnimationsSimpleanimationIdSlalom = 9,

};
#define ArsdkFeatureJpsumoAnimationsSimpleanimationIdCnt 10

@interface ArsdkFeatureJpsumoAnimations : NSObject

/**
 Stop jump, emergency jump stop, stop jump motor and stay there. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))jumpStopEncoder
NS_SWIFT_NAME(jumpStopEncoder());

/**
 Cancel jump and come back to previous state (if possible). 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))jumpCancelEncoder
NS_SWIFT_NAME(jumpCancelEncoder());

/**
 Request jump loading 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))jumpLoadEncoder
NS_SWIFT_NAME(jumpLoadEncoder());

/**
 Request a jump 

 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))jumpEncoder:(ArsdkFeatureJpsumoAnimationsJumpType)type
NS_SWIFT_NAME(jumpEncoder(type:));

/**
 Play a parameterless animation. 

 - parameter id: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))simpleAnimationEncoder:(ArsdkFeatureJpsumoAnimationsSimpleanimationId)id
NS_SWIFT_NAME(simpleAnimationEncoder(id:));

@end

