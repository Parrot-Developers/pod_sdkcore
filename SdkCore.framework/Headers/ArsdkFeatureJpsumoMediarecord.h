/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoMediarecordUid;

struct arsdk_cmd;

/** Command to record video */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordVideoRecord) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordVideoRecordSdkCoreUnknown = -1,

    /** Stop the video recording */
    ArsdkFeatureJpsumoMediarecordVideoRecordStop = 0,

    /** Start the video recording */
    ArsdkFeatureJpsumoMediarecordVideoRecordStart = 1,

};
#define ArsdkFeatureJpsumoMediarecordVideoRecordCnt 2

/** Command to record video */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoMediarecordVideov2Record) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoMediarecordVideov2RecordSdkCoreUnknown = -1,

    /** Stop the video recording */
    ArsdkFeatureJpsumoMediarecordVideov2RecordStop = 0,

    /** Start the video recording */
    ArsdkFeatureJpsumoMediarecordVideov2RecordStart = 1,

};
#define ArsdkFeatureJpsumoMediarecordVideov2RecordCnt 2

@interface ArsdkFeatureJpsumoMediarecord : NSObject

/**
 @deprecated
Take picture 

 - parameter mass_storage_id: Mass storage id to take picture
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pictureEncoder:(NSUInteger)massStorageId
NS_SWIFT_NAME(pictureEncoder(massStorageId:));

/**
 @deprecated
Video record 

 - parameter record: 
 - parameter mass_storage_id: Mass storage id to record
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoEncoder:(ArsdkFeatureJpsumoMediarecordVideoRecord)record massStorageId:(NSUInteger)massStorageId
NS_SWIFT_NAME(videoEncoder(record:massStorageId:));

/**
 Take picture 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pictureV2Encoder
NS_SWIFT_NAME(pictureV2Encoder());

/**
 Video record 

 - parameter record: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoV2Encoder:(ArsdkFeatureJpsumoMediarecordVideov2Record)record
NS_SWIFT_NAME(videoV2Encoder(record:));

@end

