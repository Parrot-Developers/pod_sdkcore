/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneMediarecordUid;

struct arsdk_cmd;

@interface ArsdkFeatureMinidroneMediarecord : NSObject

/**
 @deprecated
Take picture 

 - parameter mass_storage_id: Mass storage id to take picture
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pictureEncoder:(NSUInteger)massStorageId
NS_SWIFT_NAME(pictureEncoder(massStorageId:));

/**
 Take picture 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pictureV2Encoder
NS_SWIFT_NAME(pictureV2Encoder());

@end

