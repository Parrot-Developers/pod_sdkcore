/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoRoadplanUid;

struct arsdk_cmd;

@interface ArsdkFeatureJpsumoRoadplan : NSObject

/**
 Command to ask device all metadata scripts. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))allScriptsMetadataEncoder
NS_SWIFT_NAME(allScriptsMetadataEncoder());

/**
 Notify device that a new file has been uploaded. 

 - parameter uuid: UUID of uploaded file.
 - parameter md5Hash: MD5 hash code computed over file.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))scriptUploadedEncoder:(NSString*)uuid md5hash:(NSString*)md5hash
NS_SWIFT_NAME(scriptUploadedEncoder(uuid:md5hash:));

/**
 Ask the device to delete a script. 

 - parameter uuid: UUID of the file to delete.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))scriptDeleteEncoder:(NSString*)uuid
NS_SWIFT_NAME(scriptDeleteEncoder(uuid:));

/**
 Ask the device to play a script. 

 - parameter uuid: UUID of the file to play.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))playScriptEncoder:(NSString*)uuid
NS_SWIFT_NAME(playScriptEncoder(uuid:));

@end

