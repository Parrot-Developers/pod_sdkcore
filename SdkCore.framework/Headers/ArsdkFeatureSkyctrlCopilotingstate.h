/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCopilotingstateUid;

struct arsdk_cmd;

/** The source */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlCopilotingstatePilotingsourceSource) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlCopilotingstatePilotingsourceSourceSdkCoreUnknown = -1,

    /** Use the SkyController joysticks */
    ArsdkFeatureSkyctrlCopilotingstatePilotingsourceSourceSkycontroller = 0,

    /** Use the Tablet (or smartphone, or whatever) controls
Disables the SkyController joysticks */
    ArsdkFeatureSkyctrlCopilotingstatePilotingsourceSourceController = 1,

};
#define ArsdkFeatureSkyctrlCopilotingstatePilotingsourceSourceCnt 2

@protocol ArsdkFeatureSkyctrlCopilotingstateCallback<NSObject>

@optional

/**
 Define who is piloting the drone.
The piloting source is reset to SkyController when the controller disconnects. 

 - parameter source: 
*/
- (void)onPilotingSource:(ArsdkFeatureSkyctrlCopilotingstatePilotingsourceSource)source
NS_SWIFT_NAME(onPilotingSource(source:));


@end

@interface ArsdkFeatureSkyctrlCopilotingstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSkyctrlCopilotingstateCallback>)callback;

@end

