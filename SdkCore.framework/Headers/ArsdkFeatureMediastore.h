/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMediastoreUid;

struct arsdk_cmd;

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureMediastoreState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMediastoreStateSdkCoreUnknown = -1,

    /** The media store is not available yet. */
    ArsdkFeatureMediastoreStateNotAvailable = 0,

    /** The media store is indexing. */
    ArsdkFeatureMediastoreStateIndexing = 1,

    /** The media store is indexed and ready to be used. */
    ArsdkFeatureMediastoreStateIndexed = 2,

};
#define ArsdkFeatureMediastoreStateCnt 3

@protocol ArsdkFeatureMediastoreCallback<NSObject>

@optional

/**
  

 - parameter state: Media store state.
*/
- (void)onState:(ArsdkFeatureMediastoreState)state
NS_SWIFT_NAME(onState(state:));

/**
  

 - parameter video_media_count: Number of video media in the media store, -1 if the store is not indexed.
 - parameter photo_media_count: Number of photo media in the media store, -1 if the store is not indexed.
 - parameter video_resource_count: Number of video resources in the media store, -1 if the store is not indexed.
 - parameter photo_resource_count: Number of photo resources in the media store, -1 if the store is not indexed.
*/
- (void)onCounters:(NSInteger)videoMediaCount photoMediaCount:(NSInteger)photoMediaCount videoResourceCount:(NSInteger)videoResourceCount photoResourceCount:(NSInteger)photoResourceCount
NS_SWIFT_NAME(onCounters(videoMediaCount:photoMediaCount:videoResourceCount:photoResourceCount:));


@end

@interface ArsdkFeatureMediastore : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureMediastoreCallback>)callback;

@end

