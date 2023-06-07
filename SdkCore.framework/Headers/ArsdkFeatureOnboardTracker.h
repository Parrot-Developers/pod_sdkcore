/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureOnboardTrackerUid;

struct arsdk_cmd;

/** State of tracking. */
typedef NS_ENUM(NSInteger, ArsdkFeatureOnboardTrackerTargetTrackingState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureOnboardTrackerTargetTrackingStateSdkCoreUnknown = -1,

    /** A target has been selected and is currently visually tracked by the drone. */
    ArsdkFeatureOnboardTrackerTargetTrackingStateTracking = 0,

    /** Target has been lost, but the drone is trying to find it again. */
    ArsdkFeatureOnboardTrackerTargetTrackingStateSearching = 1,

    /** After too much time in searching state, the drone abandons its target.
This is a terminal state for the target, which will remain in the
tracking state map until explicitely removed. */
    ArsdkFeatureOnboardTrackerTargetTrackingStateAbandon = 2,

};
#define ArsdkFeatureOnboardTrackerTargetTrackingStateCnt 3

/** Tracking answer. */
typedef NS_ENUM(NSInteger, ArsdkFeatureOnboardTrackerTrackingAnswer) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureOnboardTrackerTrackingAnswerSdkCoreUnknown = -1,

    /** Command was processed. */
    ArsdkFeatureOnboardTrackerTrackingAnswerProcessed = 0,

    /** Command was not processed, tracker is at full capacity. The request is dropped. */
    ArsdkFeatureOnboardTrackerTrackingAnswerTargetLimitReached = 1,

    /** Target was not found. The request is dropped. */
    ArsdkFeatureOnboardTrackerTrackingAnswerNotFound = 2,

    /** Arguments are invalid. The request is dropped. */
    ArsdkFeatureOnboardTrackerTrackingAnswerInvalid = 3,

};
#define ArsdkFeatureOnboardTrackerTrackingAnswerCnt 4

/** Tracking engine state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureOnboardTrackerTrackingEngineState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureOnboardTrackerTrackingEngineStateSdkCoreUnknown = -1,

    /** Activated by a drone's internal operation (like flying mission). */
    ArsdkFeatureOnboardTrackerTrackingEngineStateDroneActivated = 0,

    /** Activated by command [start_tracking_engine](#157-10). */
    ArsdkFeatureOnboardTrackerTrackingEngineStateActivated = 1,

    /** Tracking engine is available, and can be activated
by [start_tracking_engine](#157-10). */
    ArsdkFeatureOnboardTrackerTrackingEngineStateAvailable = 2,

};
#define ArsdkFeatureOnboardTrackerTrackingEngineStateCnt 3

@protocol ArsdkFeatureOnboardTrackerCallback<NSObject>

@optional

/**
  

 - parameter target_id: Id of the target coming from the metadata given by the drone.
 - parameter cookie: User cookie associated with the target.
 - parameter state: State of tracking.
 - parameter list_flags: 
*/
- (void)onTargetTrackingState:(NSUInteger)targetId cookie:(NSUInteger)cookie state:(ArsdkFeatureOnboardTrackerTargetTrackingState)state listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onTargetTrackingState(targetId:cookie:state:listFlagsBitField:));

/**
  

 - parameter answer: Tracking answer.
*/
- (void)onTrackingAnswer:(ArsdkFeatureOnboardTrackerTrackingAnswer)answer
NS_SWIFT_NAME(onTrackingAnswer(answer:));

/**
  

 - parameter availability: Availability of tracking feature.
Boolean: 0: not available / 1: available
*/
- (void)onTrackingFeatureAvailability:(NSUInteger)availability
NS_SWIFT_NAME(onTrackingFeatureAvailability(availability:));

/**
  

 - parameter state: State of tracking engine.
*/
- (void)onTrackingEngineState:(ArsdkFeatureOnboardTrackerTrackingEngineState)state
NS_SWIFT_NAME(onTrackingEngineState(state:));


@end

@interface ArsdkFeatureOnboardTracker : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureOnboardTrackerCallback>)callback;

/**
 Tells the drone to start tracking a target from a rectangle. The previous trackings are not stopped. 

 - parameter timestamp: Acquisition time of processed picture in microseconds.
 - parameter horizontal_position: Horizontal position of the top left corner's target in the video (0 to 1).
 - parameter vertical_position: Vertical position of the top left corner's target in the video (0 to 1).
 - parameter height: Height of target in the video (0 to 1).
 - parameter width: Width of target in the video (0 to 1).
 - parameter cookie: User cookie associated with the target.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))addTargetFromRectEncoder:(uint64_t)timestamp horizontalPosition:(float)horizontalPosition verticalPosition:(float)verticalPosition height:(float)height width:(float)width cookie:(NSUInteger)cookie
NS_SWIFT_NAME(addTargetFromRectEncoder(timestamp:horizontalPosition:verticalPosition:height:width:cookie:));

/**
 Tells the drone to start tracking from a target id. The previous trackings are not stopped. 

 - parameter timestamp: Acquisition time of processed picture in microseconds.
 - parameter target_id: Id of the target coming from the metadata given by the drone.
 - parameter cookie: User cookie associated with the target.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))addTargetFromProposalEncoder:(uint64_t)timestamp targetId:(NSUInteger)targetId cookie:(NSUInteger)cookie
NS_SWIFT_NAME(addTargetFromProposalEncoder(timestamp:targetId:cookie:));

/**
 Tells the drone to stop tracking by target id. It is more efficient to use [replace_all_by_target_from_rect](#157-4) or [replace_all_by_target_from_proposal](#157-5) 

 - parameter target_id: Id of the target coming from the metadata given by the drone.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))removeTargetEncoder:(NSUInteger)targetId
NS_SWIFT_NAME(removeTargetEncoder(targetId:));

/**
 Tells the drone to start tracking a target from a rectangle and stop any previous trackings. 

 - parameter timestamp: Acquisition time of processed picture in microseconds.
 - parameter horizontal_position: Horizontal position of the top left corner's target in the video (0 to 1).
 - parameter vertical_position: Vertical position of the top left corner's target in the video (0 to 1).
 - parameter height: Height of target in the video (0 to 1).
 - parameter width: Width of target in the video (0 to 1).
 - parameter cookie: User cookie associated with the target.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))replaceAllByTargetFromRectEncoder:(uint64_t)timestamp horizontalPosition:(float)horizontalPosition verticalPosition:(float)verticalPosition height:(float)height width:(float)width cookie:(NSUInteger)cookie
NS_SWIFT_NAME(replaceAllByTargetFromRectEncoder(timestamp:horizontalPosition:verticalPosition:height:width:cookie:));

/**
 Tells the drone to start tracking from a target id and stop any previous trackings. 

 - parameter timestamp: Acquisition time of processed picture in microseconds.
 - parameter target_id: Id of the target coming from the metadata given by the drone.
 - parameter cookie: User cookie associated with the target.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))replaceAllByTargetFromProposalEncoder:(uint64_t)timestamp targetId:(NSUInteger)targetId cookie:(NSUInteger)cookie
NS_SWIFT_NAME(replaceAllByTargetFromProposalEncoder(timestamp:targetId:cookie:));

/**
 Tells the drone to stop all trackings. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))removeAllTargetsEncoder
NS_SWIFT_NAME(removeAllTargetsEncoder());

/**
 Tells the drone to start the tracking engine if possible. 

 - parameter box_proposals: Start tracking engine with or without box proposals.
Boolean: 0: start without box proposals / 1: start with box proposals
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startTrackingEngineEncoder:(NSUInteger)boxProposals
NS_SWIFT_NAME(startTrackingEngineEncoder(boxProposals:));

/**
 Tells the drone to stop the tracking engine. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))stopTrackingEngineEncoder
NS_SWIFT_NAME(stopTrackingEngineEncoder());

@end

