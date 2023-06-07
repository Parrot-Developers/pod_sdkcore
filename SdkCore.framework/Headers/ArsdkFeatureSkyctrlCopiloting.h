/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCopilotingUid;

struct arsdk_cmd;

/** The new piloting source */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlCopilotingSetpilotingsourceSource) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlCopilotingSetpilotingsourceSourceSdkCoreUnknown = -1,

    /** Use the SkyController joysticks */
    ArsdkFeatureSkyctrlCopilotingSetpilotingsourceSourceSkycontroller = 0,

    /** Use the Tablet (or smartphone, or whatever) controls
Disables the SkyController joysticks */
    ArsdkFeatureSkyctrlCopilotingSetpilotingsourceSourceController = 1,

};
#define ArsdkFeatureSkyctrlCopilotingSetpilotingsourceSourceCnt 2

@interface ArsdkFeatureSkyctrlCopiloting : NSObject

/**
 Change who is piloting the drone.
By default, the SkyController is the source of piloting commands, and any connected application (i.e. FreeFlight) can not send [piloting commands](#1-0-2) commands directly to the drone. When the piloting source is set to Controller, the SkyController will forward the controller commands to the drone, and won't send any commands itself.
The piloting source is automatically reset to SkyController when the controller is disconnected. 

 - parameter source: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setPilotingSourceEncoder:(ArsdkFeatureSkyctrlCopilotingSetpilotingsourceSource)source
NS_SWIFT_NAME(setPilotingSourceEncoder(source:));

@end

