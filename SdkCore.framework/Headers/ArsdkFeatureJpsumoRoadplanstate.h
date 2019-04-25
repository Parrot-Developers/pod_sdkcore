/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoRoadplanstateUid;

struct arsdk_cmd;

/** Error code. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcodeSdkCoreUnknown = -1,

    /** The script was parsed successfully. */
    ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcodeErrorOk = 0,

    /** The MD5 hash codes are different or file is unreadable. */
    ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcodeErrorFileCorrupted = 1,

    /** The parser is not well formed or can not be parsed. */
    ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcodeErrorInvalidFormat = 2,

    /** The file is larger than maximum allowed size. */
    ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcodeErrorFileTooLarge = 3,

    /** Script version is not supported by device. */
    ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcodeErrorUnsupported = 4,

};
#define ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcodeCnt 5

/** Error code. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoRoadplanstateScriptdeletechangedResultcode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoRoadplanstateScriptdeletechangedResultcodeSdkCoreUnknown = -1,

    /** The script was deleted successfully. */
    ArsdkFeatureJpsumoRoadplanstateScriptdeletechangedResultcodeErrorOk = 0,

    /** No script with this uuid exists. */
    ArsdkFeatureJpsumoRoadplanstateScriptdeletechangedResultcodeErrorNoSuchScript = 1,

    /** An internal error occured while attempting to delete the script. */
    ArsdkFeatureJpsumoRoadplanstateScriptdeletechangedResultcodeErrorInternalFailure = 2,

};
#define ArsdkFeatureJpsumoRoadplanstateScriptdeletechangedResultcodeCnt 3

/** Error code. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcodeSdkCoreUnknown = -1,

    /** The script started playing successfully. */
    ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcodeScriptStarted = 0,

    /** The script finished successfully. */
    ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcodeScriptFinished = 1,

    /** No script with this uuid exists. */
    ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcodeScriptNoSuchScript = 2,

    /** An error occured while playing the script. */
    ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcodeScriptError = 3,

};
#define ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcodeCnt 4

@protocol ArsdkFeatureJpsumoRoadplanstateCallback<NSObject>

@optional

/**
 Update the controller with metadata. 

 - parameter uuid: Script uuid for which metadata changed.
 - parameter version: Version number for this script.
 - parameter product: Product targeted by script.
 - parameter name: Display name of the script.
 - parameter lastModified: Timestamp relative to the UNIX epoch of the last time the file was modified.
*/
- (void)onScriptMetadataListChanged:(NSString*)uuid version:(NSUInteger)version product:(NSString*)product name:(NSString*)name lastmodified:(uint64_t)lastmodified
NS_SWIFT_NAME(onScriptMetadataListChanged(uuid:version:product:name:lastmodified:));

/**
 Notify controller that all script metadatas are updated. 

*/
- (void)onAllScriptsMetadataChanged
NS_SWIFT_NAME(onAllScriptsMetadataChanged());

/**
 Device response to ScriptUploaded command. 

 - parameter resultCode: 
*/
- (void)onScriptUploadChanged:(ArsdkFeatureJpsumoRoadplanstateScriptuploadchangedResultcode)resultcode
NS_SWIFT_NAME(onScriptUploadChanged(resultcode:));

/**
 Device response to ScriptDelete command. 

 - parameter resultCode: 
*/
- (void)onScriptDeleteChanged:(ArsdkFeatureJpsumoRoadplanstateScriptdeletechangedResultcode)resultcode
NS_SWIFT_NAME(onScriptDeleteChanged(resultcode:));

/**
 Device response to PlayScript command. 

 - parameter resultCode: 
*/
- (void)onPlayScriptChanged:(ArsdkFeatureJpsumoRoadplanstatePlayscriptchangedResultcode)resultcode
NS_SWIFT_NAME(onPlayScriptChanged(resultcode:));


@end

@interface ArsdkFeatureJpsumoRoadplanstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoRoadplanstateCallback>)callback;

@end

