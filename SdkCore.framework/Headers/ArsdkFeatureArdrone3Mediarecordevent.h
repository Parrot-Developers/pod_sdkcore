/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3MediarecordeventUid;

struct arsdk_cmd;

/** Last event of picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordeventPictureeventchangedEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedEventSdkCoreUnknown = -1,

    /** Picture taken and saved */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedEventTaken = 0,

    /** Picture failed */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedEventFailed = 1,

};
#define ArsdkFeatureArdrone3MediarecordeventPictureeventchangedEventCnt 2

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordeventPictureeventchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorOk = 0,

    /** Unknown generic error ; only when state is failed */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorUnknown = 1,

    /** Picture recording is busy ; only when state is failed */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorBusy = 2,

    /** Picture recording not available ; only when state is failed */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorNotavailable = 3,

    /** Memory full ; only when state is failed */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorMemoryfull = 4,

    /** Battery is too low to record. */
    ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorLowbattery = 5,

};
#define ArsdkFeatureArdrone3MediarecordeventPictureeventchangedErrorCnt 6

/** Event of video recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordeventVideoeventchangedEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedEventSdkCoreUnknown = -1,

    /** Video start */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedEventStart = 0,

    /** Video stop and saved */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedEventStop = 1,

    /** Video failed */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedEventFailed = 2,

};
#define ArsdkFeatureArdrone3MediarecordeventVideoeventchangedEventCnt 3

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordeventVideoeventchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorOk = 0,

    /** Unknown generic error ; only when state is failed */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorUnknown = 1,

    /** Video recording is busy ; only when state is failed */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorBusy = 2,

    /** Video recording not available ; only when state is failed */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorNotavailable = 3,

    /** Memory full */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorMemoryfull = 4,

    /** Battery is too low to record. */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorLowbattery = 5,

    /** Video was auto stopped */
    ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorAutostopped = 6,

};
#define ArsdkFeatureArdrone3MediarecordeventVideoeventchangedErrorCnt 7

@protocol ArsdkFeatureArdrone3MediarecordeventCallback<NSObject>

@optional

/**
 Picture taken.

**This event is a notification, you can't retrieve it in the cache of the device controller.** 

 - parameter event: 
 - parameter error: 
*/
- (void)onPictureEventChanged:(ArsdkFeatureArdrone3MediarecordeventPictureeventchangedEvent)event error:(ArsdkFeatureArdrone3MediarecordeventPictureeventchangedError)error
NS_SWIFT_NAME(onPictureEventChanged(event:error:));

/**
 Video record notification.

**This event is a notification, you can't retrieve it in the cache of the device controller.** 

 - parameter event: 
 - parameter error: 
*/
- (void)onVideoEventChanged:(ArsdkFeatureArdrone3MediarecordeventVideoeventchangedEvent)event error:(ArsdkFeatureArdrone3MediarecordeventVideoeventchangedError)error
NS_SWIFT_NAME(onVideoEventChanged(event:error:));


@end

@interface ArsdkFeatureArdrone3Mediarecordevent : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureArdrone3MediarecordeventCallback>)callback;

@end

