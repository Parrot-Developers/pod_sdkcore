/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3AnimationsUid;

struct arsdk_cmd;

/** Direction for the flip */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3AnimationsFlipDirection) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3AnimationsFlipDirectionSdkCoreUnknown = -1,

    /** Flip direction front */
    ArsdkFeatureArdrone3AnimationsFlipDirectionFront = 0,

    /** Flip direction back */
    ArsdkFeatureArdrone3AnimationsFlipDirectionBack = 1,

    /** Flip direction right */
    ArsdkFeatureArdrone3AnimationsFlipDirectionRight = 2,

    /** Flip direction left */
    ArsdkFeatureArdrone3AnimationsFlipDirectionLeft = 3,

};
#define ArsdkFeatureArdrone3AnimationsFlipDirectionCnt 4

@interface ArsdkFeatureArdrone3Animations : NSObject

/**
 Make a flip. 

 - parameter direction: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))flipEncoder:(ArsdkFeatureArdrone3AnimationsFlipDirection)direction
NS_SWIFT_NAME(flipEncoder(direction:));

@end

