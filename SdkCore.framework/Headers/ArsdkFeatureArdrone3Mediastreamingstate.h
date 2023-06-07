/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3MediastreamingstateUid;

struct arsdk_cmd;

/** Current video streaming status. */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediastreamingstateVideoenablechangedEnabled) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediastreamingstateVideoenablechangedEnabledSdkCoreUnknown = -1,

    /** Video streaming is enabled. */
    ArsdkFeatureArdrone3MediastreamingstateVideoenablechangedEnabledEnabled = 0,

    /** Video streaming is disabled. */
    ArsdkFeatureArdrone3MediastreamingstateVideoenablechangedEnabledDisabled = 1,

    /** Video streaming failed to start. */
    ArsdkFeatureArdrone3MediastreamingstateVideoenablechangedEnabledError = 2,

};
#define ArsdkFeatureArdrone3MediastreamingstateVideoenablechangedEnabledCnt 3

/** stream mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediastreamingstateVideostreammodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediastreamingstateVideostreammodechangedModeSdkCoreUnknown = -1,

    /** Minimize latency with average reliability (best for piloting). */
    ArsdkFeatureArdrone3MediastreamingstateVideostreammodechangedModeLowLatency = 0,

    /** Maximize the reliability with an average latency (best when streaming quality is important but not the latency). */
    ArsdkFeatureArdrone3MediastreamingstateVideostreammodechangedModeHighReliability = 1,

    /** Maximize the reliability using a framerate decimation with an average latency (best when streaming quality is important but not the latency). */
    ArsdkFeatureArdrone3MediastreamingstateVideostreammodechangedModeHighReliabilityLowFramerate = 2,

};
#define ArsdkFeatureArdrone3MediastreamingstateVideostreammodechangedModeCnt 3

@protocol ArsdkFeatureArdrone3MediastreamingstateCallback<NSObject>

@optional

/**
 Video stream state. 

 - parameter enabled: 
*/
- (void)onVideoEnableChanged:(ArsdkFeatureArdrone3MediastreamingstateVideoenablechangedEnabled)enabled
NS_SWIFT_NAME(onVideoEnableChanged(enabled:));

/**
 Video stream mode state 

 - parameter mode: 
*/
- (void)onVideoStreamModeChanged:(ArsdkFeatureArdrone3MediastreamingstateVideostreammodechangedMode)mode
NS_SWIFT_NAME(onVideoStreamModeChanged(mode:));


@end

@interface ArsdkFeatureArdrone3Mediastreamingstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureArdrone3MediastreamingstateCallback>)callback;

@end

