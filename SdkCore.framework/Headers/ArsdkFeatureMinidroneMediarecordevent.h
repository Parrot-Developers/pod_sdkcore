/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneMediarecordeventUid;

struct arsdk_cmd;

/** Last event of picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMediarecordeventPictureeventchangedEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedEventSdkCoreUnknown = -1,

    /** Picture taken and saved */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedEventTaken = 0,

    /** Picture failed */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedEventFailed = 1,

};
#define ArsdkFeatureMinidroneMediarecordeventPictureeventchangedEventCnt 2

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMediarecordeventPictureeventchangedError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorOk = 0,

    /** Unknown generic error ; only when state is failed */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorUnknown = 1,

    /** Picture recording is busy ; only when state is failed */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorBusy = 2,

    /** Picture recording not available ; only when state is failed */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorNotavailable = 3,

    /** Memory full ; only when state is failed */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorMemoryfull = 4,

    /** Battery is too low to record. */
    ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorLowbattery = 5,

};
#define ArsdkFeatureMinidroneMediarecordeventPictureeventchangedErrorCnt 6

@protocol ArsdkFeatureMinidroneMediarecordeventCallback<NSObject>

@optional

/**
 Event of picture recording 

 - parameter event: 
 - parameter error: 
*/
- (void)onPictureEventChanged:(ArsdkFeatureMinidroneMediarecordeventPictureeventchangedEvent)event error:(ArsdkFeatureMinidroneMediarecordeventPictureeventchangedError)error
NS_SWIFT_NAME(onPictureEventChanged(event:error:));


@end

@interface ArsdkFeatureMinidroneMediarecordevent : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneMediarecordeventCallback>)callback;

@end

