/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneMediarecordstateUid;

struct arsdk_cmd;

/** State of device picture recording */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2State) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2StateSdkCoreUnknown = -1,

    /** The picture recording is ready */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2StateReady = 0,

    /** The picture recording is busy */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2StateBusy = 1,

    /** The picture recording is not available */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2StateNotavailable = 2,

};
#define ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2StateCnt 3

/** Error to explain the state */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2Error) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2ErrorSdkCoreUnknown = -1,

    /** No Error */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2ErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2ErrorUnknown = 1,

    /** Picture camera is out of order */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2ErrorCameraKo = 2,

    /** Memory full ; cannot save one additional picture */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2ErrorMemoryfull = 3,

    /** Battery is too low to start/keep recording. */
    ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2ErrorLowbattery = 4,

};
#define ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2ErrorCnt 5

@protocol ArsdkFeatureMinidroneMediarecordstateCallback<NSObject>

@optional

/**
 @deprecated
State of picture recording 

 - parameter state: 1 if picture has been taken, 0 otherwise
 - parameter mass_storage_id: Mass storage id to record
*/
- (void)onPictureStateChanged:(NSUInteger)state massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(onPictureStateChanged(state:massStorageId:));

/**
 State of device picture recording changed 

 - parameter state: 
 - parameter error: 
*/
- (void)onPictureStateChangedV2:(ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2State)state error:(ArsdkFeatureMinidroneMediarecordstatePicturestatechangedv2Error)error
NS_SWIFT_NAME(onPictureStateChangedV2(state:error:));


@end

@interface ArsdkFeatureMinidroneMediarecordstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneMediarecordstateCallback>)callback;

@end

