/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3MediarecordUid;

struct arsdk_cmd;

/** Command to record video */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordVideoRecord) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordVideoRecordSdkCoreUnknown = -1,

    /** Stop the video recording */
    ArsdkFeatureArdrone3MediarecordVideoRecordStop = 0,

    /** Start the video recording */
    ArsdkFeatureArdrone3MediarecordVideoRecordStart = 1,

};
#define ArsdkFeatureArdrone3MediarecordVideoRecordCnt 2

/** Command to record video */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3MediarecordVideov2Record) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3MediarecordVideov2RecordSdkCoreUnknown = -1,

    /** Stop the video recording */
    ArsdkFeatureArdrone3MediarecordVideov2RecordStop = 0,

    /** Start the video recording */
    ArsdkFeatureArdrone3MediarecordVideov2RecordStart = 1,

};
#define ArsdkFeatureArdrone3MediarecordVideov2RecordCnt 2

@interface ArsdkFeatureArdrone3Mediarecord : NSObject

/**
 Take a picture. 

 - parameter mass_storage_id: Mass storage id to take picture
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pictureEncoder:(NSUInteger)massStorageId
NS_SWIFT_NAME(pictureEncoder(massStorageId:));

/**
 Record a video. 

 - parameter record: 
 - parameter mass_storage_id: Mass storage id to record
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoEncoder:(ArsdkFeatureArdrone3MediarecordVideoRecord)record massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(videoEncoder(record:massStorageId:));

/**
 Take a picture.
The type of picture taken is related to the picture setting.
You can set the picture format by sending the command [SetPictureFormat](#1-19-0). You can also get the current picture format with [PictureFormat](#1-20-0).
Please note that the time required to take the picture is highly related to this format.

You can check if the picture taking is available with [PictureState](#1-8-2).
Also, please note that if your picture format is different from snapshot, picture taking will stop video recording (it will restart after that the picture has been taken). 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pictureV2Encoder
NS_SWIFT_NAME(pictureV2Encoder());

/**
 Record a video (or start timelapse).
You can check if the video recording is available with [VideoState](#1-8-3).
This command can start a video (obvious huh?), but also a timelapse if the timelapse mode is set. You can check if the timelapse mode is set with the event [TimelapseMode](#1-20-4).
Also, please note that if your picture format is different from snapshot, picture taking will stop video recording (it will restart after the picture has been taken). 

 - parameter record: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoV2Encoder:(ArsdkFeatureArdrone3MediarecordVideov2Record)record
NS_SWIFT_NAME(videoV2Encoder(record:));

@end

