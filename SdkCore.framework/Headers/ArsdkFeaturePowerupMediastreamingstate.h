/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupMediastreamingstateUid;

struct arsdk_cmd;

/** Current video streaming status. */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediastreamingstateVideoenablechangedEnabled) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediastreamingstateVideoenablechangedEnabledSdkCoreUnknown = -1,

    /** Video streaming is enabled. */
    ArsdkFeaturePowerupMediastreamingstateVideoenablechangedEnabledEnabled = 0,

    /** Video streaming is disabled. */
    ArsdkFeaturePowerupMediastreamingstateVideoenablechangedEnabledDisabled = 1,

    /** Video streaming failed to start. */
    ArsdkFeaturePowerupMediastreamingstateVideoenablechangedEnabledError = 2,

};
#define ArsdkFeaturePowerupMediastreamingstateVideoenablechangedEnabledCnt 3

@protocol ArsdkFeaturePowerupMediastreamingstateCallback<NSObject>

@optional

/**
 Return video streaming status. 

 - parameter enabled: 
*/
- (void)onVideoEnableChanged:(ArsdkFeaturePowerupMediastreamingstateVideoenablechangedEnabled)enabled
NS_SWIFT_NAME(onVideoEnableChanged(enabled:));


@end

@interface ArsdkFeaturePowerupMediastreamingstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeaturePowerupMediastreamingstateCallback>)callback;

@end

