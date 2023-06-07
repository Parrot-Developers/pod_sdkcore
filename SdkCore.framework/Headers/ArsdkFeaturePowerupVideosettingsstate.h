/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupVideosettingsstateUid;

struct arsdk_cmd;

/** Video mode */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupVideosettingsstateVideomodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupVideosettingsstateVideomodechangedModeSdkCoreUnknown = -1,

    /** Maximize video quality (VGA 30fps). */
    ArsdkFeaturePowerupVideosettingsstateVideomodechangedModeQuality = 0,

    /** Maximize video performance (QVGA 24fps). */
    ArsdkFeaturePowerupVideosettingsstateVideomodechangedModePerformance = 1,

};
#define ArsdkFeaturePowerupVideosettingsstateVideomodechangedModeCnt 2

@protocol ArsdkFeaturePowerupVideosettingsstateCallback<NSObject>

@optional

/**
 Get video automatic recording status. 

 - parameter enabled: 0: Disabled 1: Enabled.
*/
- (void)onAutorecordChanged:(NSUInteger)enabled
NS_SWIFT_NAME(onAutorecordChanged(enabled:));

/**
 Video mode 

 - parameter mode: 
*/
- (void)onVideoModeChanged:(ArsdkFeaturePowerupVideosettingsstateVideomodechangedMode)mode
NS_SWIFT_NAME(onVideoModeChanged(mode:));


@end

@interface ArsdkFeaturePowerupVideosettingsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeaturePowerupVideosettingsstateCallback>)callback;

@end

