/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneMinicamUid;

struct arsdk_cmd;

/** Command to record video */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneMinicamVideoRecord) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneMinicamVideoRecordSdkCoreUnknown = -1,

    /** Stop the video recording. */
    ArsdkFeatureMinidroneMinicamVideoRecordStop = 0,

    /** Start the video recording. */
    ArsdkFeatureMinidroneMinicamVideoRecordStart = 1,

};
#define ArsdkFeatureMinidroneMinicamVideoRecordCnt 2

@interface ArsdkFeatureMinidroneMinicam : NSObject

/**
 Take picture. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pictureEncoder
NS_SWIFT_NAME(pictureEncoder());

/**
 Start/Stop video recording. 

 - parameter record: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoEncoder:(ArsdkFeatureMinidroneMinicamVideoRecord)record
NS_SWIFT_NAME(videoEncoder(record:));

/**
 Format mass storage. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))massStorageFormatEncoder
NS_SWIFT_NAME(massStorageFormatEncoder());

@end

