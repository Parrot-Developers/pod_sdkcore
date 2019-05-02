/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneAnimationsUid;

struct arsdk_cmd;

/** Direction for the flip */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneAnimationsFlipDirection) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneAnimationsFlipDirectionSdkCoreUnknown = -1,

    /** Flip direction front */
    ArsdkFeatureMinidroneAnimationsFlipDirectionFront = 0,

    /** Flip direction back */
    ArsdkFeatureMinidroneAnimationsFlipDirectionBack = 1,

    /** Flip direction right */
    ArsdkFeatureMinidroneAnimationsFlipDirectionRight = 2,

    /** Flip direction left */
    ArsdkFeatureMinidroneAnimationsFlipDirectionLeft = 3,

};
#define ArsdkFeatureMinidroneAnimationsFlipDirectionCnt 4

@interface ArsdkFeatureMinidroneAnimations : NSObject

/**
 Make a flip 

 - parameter direction: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))flipEncoder:(ArsdkFeatureMinidroneAnimationsFlipDirection)direction
NS_SWIFT_NAME(flipEncoder(direction:));

/**
 Change the product cap 

 - parameter offset: Change the cap with offset angle [-180;180]
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))capEncoder:(NSInteger)offset
NS_SWIFT_NAME(capEncoder(offset:));

@end

