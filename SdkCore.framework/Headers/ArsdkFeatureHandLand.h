/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureHandLandUid;

struct arsdk_cmd;

/** ,
Hand land state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureHandLandState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureHandLandStateSdkCoreUnknown = -1,

    /** Hand land is idle. */
    ArsdkFeatureHandLandStateIdle = 0,

    /** Hand land is ongoing. */
    ArsdkFeatureHandLandStateOngoing = 1,

};
#define ArsdkFeatureHandLandStateCnt 2

@protocol ArsdkFeatureHandLandCallback<NSObject>

@optional

/**
  

 - parameter state: Hand land state.
*/
- (void)onState:(ArsdkFeatureHandLandState)state
NS_SWIFT_NAME(onState(state:));


@end

@interface ArsdkFeatureHandLand : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureHandLandCallback>)callback;

@end

