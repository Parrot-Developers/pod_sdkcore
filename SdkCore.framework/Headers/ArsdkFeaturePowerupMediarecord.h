/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePowerupMediarecordUid;

struct arsdk_cmd;

/** Command to record video */
typedef NS_ENUM(NSInteger, ArsdkFeaturePowerupMediarecordVideov2Record) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePowerupMediarecordVideov2RecordSdkCoreUnknown = -1,

    /** Stop the video recording */
    ArsdkFeaturePowerupMediarecordVideov2RecordStop = 0,

    /** Start the video recording */
    ArsdkFeaturePowerupMediarecordVideov2RecordStart = 1,

};
#define ArsdkFeaturePowerupMediarecordVideov2RecordCnt 2

@interface ArsdkFeaturePowerupMediarecord : NSObject

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
+ (int (^)(struct arsdk_cmd *))videoV2Encoder:(ArsdkFeaturePowerupMediarecordVideov2Record)record
NS_SWIFT_NAME(videoV2Encoder(record:));

@end

