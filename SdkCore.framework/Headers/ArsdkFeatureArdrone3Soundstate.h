/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3SoundstateUid;

struct arsdk_cmd;

/** State of the alert sound */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3SoundstateAlertsoundState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3SoundstateAlertsoundStateSdkCoreUnknown = -1,

    /** Alert sound is not playing */
    ArsdkFeatureArdrone3SoundstateAlertsoundStateStopped = 0,

    /** Alert sound is playing */
    ArsdkFeatureArdrone3SoundstateAlertsoundStatePlaying = 1,

};
#define ArsdkFeatureArdrone3SoundstateAlertsoundStateCnt 2

@protocol ArsdkFeatureArdrone3SoundstateCallback<NSObject>

@optional

/**
 Alert sound state. 

 - parameter state: 
*/
- (void)onAlertSound:(ArsdkFeatureArdrone3SoundstateAlertsoundState)state
NS_SWIFT_NAME(onAlertSound(state:));


@end

@interface ArsdkFeatureArdrone3Soundstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3SoundstateCallback>)callback;

@end

