/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoMediastreamingstateUid;

struct arsdk_cmd;

/** Current video streaming status. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediastreamingstateVideoenablechangedEnabled) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediastreamingstateVideoenablechangedEnabledSdkCoreUnknown = -1,

    /** Video streaming is enabled. */
    ArsdkFeatureJpsumoMediastreamingstateVideoenablechangedEnabledEnabled = 0,

    /** Video streaming is disabled. */
    ArsdkFeatureJpsumoMediastreamingstateVideoenablechangedEnabledDisabled = 1,

    /** Video streaming failed to start. */
    ArsdkFeatureJpsumoMediastreamingstateVideoenablechangedEnabledError = 2,

};
#define ArsdkFeatureJpsumoMediastreamingstateVideoenablechangedEnabledCnt 3

@protocol ArsdkFeatureJpsumoMediastreamingstateCallback<NSObject>

@optional

/**
 Return video streaming status. 

 - parameter enabled: 
*/
- (void)onVideoEnableChanged:(ArsdkFeatureJpsumoMediastreamingstateVideoenablechangedEnabled)enabled
NS_SWIFT_NAME(onVideoEnableChanged(enabled:));


@end

@interface ArsdkFeatureJpsumoMediastreamingstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoMediastreamingstateCallback>)callback;

@end

