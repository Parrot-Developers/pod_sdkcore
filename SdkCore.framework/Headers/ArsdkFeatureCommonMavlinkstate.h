/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonMavlinkstateUid;

struct arsdk_cmd;

/** State of the mavlink */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedStateSdkCoreUnknown = -1,

    /** Mavlink file is playing */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedStatePlaying = 0,

    /** Mavlink file is stopped (arg filepath and type are useless in this state) */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedStateStopped = 1,

    /** Mavlink file is paused */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedStatePaused = 2,

    /** Mavlink file is loaded (it will be played at take-off) */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedStateLoaded = 3,

};
#define ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedStateCnt 4

/** type of the played mavlink file */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedTypeSdkCoreUnknown = -1,

    /** Mavlink file for FlightPlan */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedTypeFlightplan = 0,

    /** Mavlink file for MapMyHouse */
    ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedTypeMapmyhouse = 1,

};
#define ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedTypeCnt 2

/** State of play error */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedErrorSdkCoreUnknown = -1,

    /** There is no error */
    ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedErrorNone = 0,

    /** The drone is not in outdoor mode */
    ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedErrorNotinoutdoormode = 1,

    /** The gps is not fixed */
    ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedErrorGpsnotfixed = 2,

    /** The magnetometer of the drone is not calibrated */
    ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedErrorNotcalibrated = 3,

};
#define ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedErrorCnt 4

@protocol ArsdkFeatureCommonMavlinkstateCallback<NSObject>

@optional

/**
 Playing state of a FlightPlan. 

 - parameter state: 
 - parameter filepath: flight plan file path from the mavlink ftp root
 - parameter type: 
*/
- (void)onMavlinkFilePlayingStateChanged:(ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedState)state filepath:(NSString*)filepath type:(ArsdkFeatureCommonMavlinkstateMavlinkfileplayingstatechangedType)type
NS_SWIFT_NAME(onMavlinkFilePlayingStateChanged(state:filepath:type:));

/**
 FlightPlan error. 

 - parameter error: 
*/
- (void)onMavlinkPlayErrorStateChanged:(ArsdkFeatureCommonMavlinkstateMavlinkplayerrorstatechangedError)error
NS_SWIFT_NAME(onMavlinkPlayErrorStateChanged(error:));

/**
 Mission item has been executed. 

 - parameter idx: Index of the mission item. This is the place of the mission item in the list of the items of the mission.
Begins at 0.
*/
- (void)onMissionItemExecuted:(NSUInteger)idx
NS_SWIFT_NAME(onMissionItemExecuted(idx:));


@end

@interface ArsdkFeatureCommonMavlinkstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonMavlinkstateCallback>)callback;

@end

