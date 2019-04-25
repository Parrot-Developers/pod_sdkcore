/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoMediarecordeventUid;

struct arsdk_cmd;

/** Last event of picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordeventPictureeventchangedEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedEventSdkCoreUnknown = -1,

    /** Picture taken and saved */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedEventTaken = 0,

    /** Picture failed */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedEventFailed = 1,

};
#define ArsdkFeatureJpsumoMediarecordeventPictureeventchangedEventCnt 2

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordeventPictureeventchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorOk = 0,

    /** Unknown generic error ; only when state is failed */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorUnknown = 1,

    /** Picture recording is busy ; only when state is failed */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorBusy = 2,

    /** Picture recording not available ; only when state is failed */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorNotavailable = 3,

    /** Memory full ; only when state is failed */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorMemoryfull = 4,

    /** Battery is too low to record. */
    ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorLowbattery = 5,

};
#define ArsdkFeatureJpsumoMediarecordeventPictureeventchangedErrorCnt 6

/** Event of video recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordeventVideoeventchangedEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedEventSdkCoreUnknown = -1,

    /** Video start */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedEventStart = 0,

    /** Video stop and saved */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedEventStop = 1,

    /** Video failed */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedEventFailed = 2,

};
#define ArsdkFeatureJpsumoMediarecordeventVideoeventchangedEventCnt 3

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordeventVideoeventchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorOk = 0,

    /** Unknown generic error ; only when state is failed */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorUnknown = 1,

    /** Video recording is busy ; only when state is failed */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorBusy = 2,

    /** Video recording not available ; only when state is failed */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorNotavailable = 3,

    /** Memory full */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorMemoryfull = 4,

    /** Battery is too low to record. */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorLowbattery = 5,

    /** Video was auto stopped */
    ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorAutostopped = 6,

};
#define ArsdkFeatureJpsumoMediarecordeventVideoeventchangedErrorCnt 7

@protocol ArsdkFeatureJpsumoMediarecordeventCallback<NSObject>

@optional

/**
 Event of picture recording 

 - parameter event: 
 - parameter error: 
*/
- (void)onPictureEventChanged:(ArsdkFeatureJpsumoMediarecordeventPictureeventchangedEvent)event error:(ArsdkFeatureJpsumoMediarecordeventPictureeventchangedError)error
NS_SWIFT_NAME(onPictureEventChanged(event:error:));

/**
 Event of video recording 

 - parameter event: 
 - parameter error: 
*/
- (void)onVideoEventChanged:(ArsdkFeatureJpsumoMediarecordeventVideoeventchangedEvent)event error:(ArsdkFeatureJpsumoMediarecordeventVideoeventchangedError)error
NS_SWIFT_NAME(onVideoEventChanged(event:error:));


@end

@interface ArsdkFeatureJpsumoMediarecordevent : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoMediarecordeventCallback>)callback;

@end

