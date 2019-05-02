/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoPilotingUid;

struct arsdk_cmd;

/** Type of Posture */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoPilotingPostureType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoPilotingPostureTypeSdkCoreUnknown = -1,

    /** Standing type */
    ArsdkFeatureJpsumoPilotingPostureTypeStanding = 0,

    /** Jumper type */
    ArsdkFeatureJpsumoPilotingPostureTypeJumper = 1,

    /** Kicker type */
    ArsdkFeatureJpsumoPilotingPostureTypeKicker = 2,

};
#define ArsdkFeatureJpsumoPilotingPostureTypeCnt 3

@interface ArsdkFeatureJpsumoPiloting : NSObject

/**
 Ask the JS speed and turn ratio. 

 - parameter flag: Boolean for "touch screen".
 - parameter speed: Speed value [-100:100].
 - parameter turn: Turn value. [-100:100]
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pCMDEncoder:(NSUInteger)flag speed:(NSInteger)speed turn:(NSInteger)turn
NS_SWIFT_NAME(pCMDEncoder(flag:speed:turn:));

/**
 Request a posture 

 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))postureEncoder:(ArsdkFeatureJpsumoPilotingPostureType)type
NS_SWIFT_NAME(postureEncoder(type:));

/**
 Add the specified offset to the current cap. 

 - parameter offset: Offset value in radians.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))addCapOffsetEncoder:(float)offset
NS_SWIFT_NAME(addCapOffsetEncoder(offset:));

@end

