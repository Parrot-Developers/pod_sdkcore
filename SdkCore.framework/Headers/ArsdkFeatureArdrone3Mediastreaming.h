/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3MediastreamingUid;

struct arsdk_cmd;

/** stream mode */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediastreamingVideostreammodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediastreamingVideostreammodeModeSdkCoreUnknown = -1,

    /** Minimize latency with average reliability (best for piloting). */
    ArsdkFeatureArdrone3MediastreamingVideostreammodeModeLowLatency = 0,

    /** Maximize the reliability with an average latency (best when streaming quality is important but not the latency). */
    ArsdkFeatureArdrone3MediastreamingVideostreammodeModeHighReliability = 1,

    /** Maximize the reliability using a framerate decimation with an average latency (best when streaming quality is important but not the latency). */
    ArsdkFeatureArdrone3MediastreamingVideostreammodeModeHighReliabilityLowFramerate = 2,

};
#define ArsdkFeatureArdrone3MediastreamingVideostreammodeModeCnt 3

@interface ArsdkFeatureArdrone3Mediastreaming : NSObject

/**
 Enable/disable video streaming. 

 - parameter enable: 1 to enable, 0 to disable.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoEnableEncoder:(NSUInteger)enable
NS_SWIFT_NAME(videoEnableEncoder(enable:));

/**
 Set the stream mode. 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoStreamModeEncoder:(ArsdkFeatureArdrone3MediastreamingVideostreammodeMode)mode
NS_SWIFT_NAME(videoStreamModeEncoder(mode:));

@end

