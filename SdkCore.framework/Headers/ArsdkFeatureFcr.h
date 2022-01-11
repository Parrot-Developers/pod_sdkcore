/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureFcrUid;

struct arsdk_cmd;

/** Type of pipeline. */
typedef NS_ENUM(NSInteger, ArsdkFeatureFcrPipeline) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureFcrPipelineSdkCoreUnknown = -1,

    /** Drone left stereo camera pipeline. */
    ArsdkFeatureFcrPipelineFstcamLeftTimelapse = 0,

    /** Drone right stereo camera pipeline. */
    ArsdkFeatureFcrPipelineFstcamRightTimelapse = 1,

    /** Drone front camera pipeline. */
    ArsdkFeatureFcrPipelineFcamTimelapse = 2,

    /** Drone left stereo camera last frames pipeline. */
    ArsdkFeatureFcrPipelineFstcamLeftEmergency = 3,

    /** Drone right stereo camera last frames pipeline. */
    ArsdkFeatureFcrPipelineFstcamRightEmergency = 4,

    /** Drone front camera last frames pipeline. */
    ArsdkFeatureFcrPipelineFcamEmergency = 5,

    /** Drone front camera tracking pipeline. */
    ArsdkFeatureFcrPipelineFcamTracking = 6,

    /** Drone vertical camera precise home pipeline. */
    ArsdkFeatureFcrPipelineVcamPrecisehome = 7,

    /** Drone left stereo camera obstacle avoidance pipeline. */
    ArsdkFeatureFcrPipelineFstcamLeftObstacleavoidance = 8,

    /** Drone right stereo camera obstacle avoidance pipeline. */
    ArsdkFeatureFcrPipelineFstcamRightObstacleavoidance = 9,

    /** Drone vertical camera precise hovering pipeline. */
    ArsdkFeatureFcrPipelineVcamPrecisehovering = 10,

    /** Drone left stereo camera love calibration pipeline. */
    ArsdkFeatureFcrPipelineFstcamLeftCalibration = 11,

    /** Drone right stereo camera love calibration pipeline. */
    ArsdkFeatureFcrPipelineFstcamRightCalibration = 12,

    /** Drone right stereo camera precise hovering pipeline. */
    ArsdkFeatureFcrPipelineFstcamRightPrecisehovering = 13,

    /** Drone left stereo camera specific events pipeline. */
    ArsdkFeatureFcrPipelineFstcamLeftEvent = 14,

    /** Drone right stereo camera specific events pipeline. */
    ArsdkFeatureFcrPipelineFstcamRightEvent = 15,

    /** Drone front camera event pipeline. */
    ArsdkFeatureFcrPipelineFcamEvent = 16,

};
#define ArsdkFeatureFcrPipelineCnt 17

@interface ArsdkFeatureFcrPipelineBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureFcrPipeline)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureFcrPipeline val))cb;

@end

@protocol ArsdkFeatureFcrCallback<NSObject>

@optional

/**
  

 - parameter capabilities: List of recording capabilities of the drone.
*/
- (void)onCapabilities:(uint64_t)capabilitiesBitField
NS_SWIFT_NAME(onCapabilities(capabilitiesBitField:));

/**
  

 - parameter state: List of activated recordings.
*/
- (void)onState:(uint64_t)stateBitField
NS_SWIFT_NAME(onState(stateBitField:));


@end

@interface ArsdkFeatureFcr : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureFcrCallback>)callback;

/**
 Allows to configure which flight camera pipelines are active. 

 - parameter pipelines: Pipeline configuration. 1 activates the corresponding pipeline, 0 deactivates it.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))configurePipelinesEncoder:(uint64_t)pipelinesBitField
NS_SWIFT_NAME(configurePipelinesEncoder(pipelinesBitField:));

@end

