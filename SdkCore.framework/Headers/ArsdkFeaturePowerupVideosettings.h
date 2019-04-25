/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupVideosettingsUid;

struct arsdk_cmd;

/** Video mode */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupVideosettingsVideomodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupVideosettingsVideomodeModeSdkCoreUnknown = -1,

    /** Maximize video quality (VGA 30fps). */
    ArsdkFeaturePowerupVideosettingsVideomodeModeQuality = 0,

    /** Maximize video performance (QVGA 24fps). */
    ArsdkFeaturePowerupVideosettingsVideomodeModePerformance = 1,

};
#define ArsdkFeaturePowerupVideosettingsVideomodeModeCnt 2

@interface ArsdkFeaturePowerupVideosettings : NSObject

/**
 Set video automatic recording state. 

 - parameter enable: 0: Disabled 1: Enabled.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))autorecordEncoder:(NSUInteger)enable
NS_SWIFT_NAME(autorecordEncoder(enable:));

/**
 Set video mode 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoModeEncoder:(ArsdkFeaturePowerupVideosettingsVideomodeMode)mode
NS_SWIFT_NAME(videoModeEncoder(mode:));

@end

