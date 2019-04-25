/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupMediarecordeventUid;

struct arsdk_cmd;

/** Last event of picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordeventPictureeventchangedEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedEventSdkCoreUnknown = -1,

    /** Picture taken and saved */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedEventTaken = 0,

    /** Picture failed */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedEventFailed = 1,

};
#define ArsdkFeaturePowerupMediarecordeventPictureeventchangedEventCnt 2

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordeventPictureeventchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorOk = 0,

    /** Unknown generic error ; only when state is failed */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorUnknown = 1,

    /** Picture recording is busy ; only when state is failed */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorBusy = 2,

    /** Picture recording not available ; only when state is failed */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorNotavailable = 3,

    /** Memory full ; only when state is failed */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorMemoryfull = 4,

    /** Battery is too low to record. */
    ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorLowbattery = 5,

};
#define ArsdkFeaturePowerupMediarecordeventPictureeventchangedErrorCnt 6

/** Event of video recording */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordeventVideoeventchangedEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedEventSdkCoreUnknown = -1,

    /** Video start */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedEventStart = 0,

    /** Video stop and saved */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedEventStop = 1,

    /** Video failed */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedEventFailed = 2,

};
#define ArsdkFeaturePowerupMediarecordeventVideoeventchangedEventCnt 3

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordeventVideoeventchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorOk = 0,

    /** Unknown generic error ; only when state is failed */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorUnknown = 1,

    /** Video recording is busy ; only when state is failed */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorBusy = 2,

    /** Video recording not available ; only when state is failed */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorNotavailable = 3,

    /** Memory full */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorMemoryfull = 4,

    /** Battery is too low to record. */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorLowbattery = 5,

    /** Video was auto stopped */
    ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorAutostopped = 6,

};
#define ArsdkFeaturePowerupMediarecordeventVideoeventchangedErrorCnt 7

@protocol ArsdkFeaturePowerupMediarecordeventCallback<NSObject>

@optional

/**
 Event of picture recording 

 - parameter event: 
 - parameter error: 
*/
- (void)onPictureEventChanged:(ArsdkFeaturePowerupMediarecordeventPictureeventchangedEvent)event error:(ArsdkFeaturePowerupMediarecordeventPictureeventchangedError)error
NS_SWIFT_NAME(onPictureEventChanged(event:error:));

/**
 Event of video recording 

 - parameter event: 
 - parameter error: 
*/
- (void)onVideoEventChanged:(ArsdkFeaturePowerupMediarecordeventVideoeventchangedEvent)event error:(ArsdkFeaturePowerupMediarecordeventVideoeventchangedError)error
NS_SWIFT_NAME(onVideoEventChanged(event:error:));


@end

@interface ArsdkFeaturePowerupMediarecordevent : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeaturePowerupMediarecordeventCallback>)callback;

@end

