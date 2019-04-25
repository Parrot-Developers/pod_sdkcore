/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoPilotingstateUid;

struct arsdk_cmd;

/** State of posture */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoPilotingstatePosturechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoPilotingstatePosturechangedStateSdkCoreUnknown = -1,

    /** Standing state */
    ArsdkFeatureJpsumoPilotingstatePosturechangedStateStanding = 0,

    /** Jumper state */
    ArsdkFeatureJpsumoPilotingstatePosturechangedStateJumper = 1,

    /** Kicker state */
    ArsdkFeatureJpsumoPilotingstatePosturechangedStateKicker = 2,

    /** Stuck state */
    ArsdkFeatureJpsumoPilotingstatePosturechangedStateStuck = 3,

    /** Unknown state */
    ArsdkFeatureJpsumoPilotingstatePosturechangedStateUnknown = 4,

};
#define ArsdkFeatureJpsumoPilotingstatePosturechangedStateCnt 5

/** JS alert state */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoPilotingstateAlertstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoPilotingstateAlertstatechangedStateSdkCoreUnknown = -1,

    /** No alert */
    ArsdkFeatureJpsumoPilotingstateAlertstatechangedStateNone = 0,

    /** Critical battery alert */
    ArsdkFeatureJpsumoPilotingstateAlertstatechangedStateCriticalBattery = 1,

    /** Low battery alert */
    ArsdkFeatureJpsumoPilotingstateAlertstatechangedStateLowBattery = 2,

};
#define ArsdkFeatureJpsumoPilotingstateAlertstatechangedStateCnt 3

@protocol ArsdkFeatureJpsumoPilotingstateCallback<NSObject>

@optional

/**
 State of posture changed. 

 - parameter state: 
*/
- (void)onPostureChanged:(ArsdkFeatureJpsumoPilotingstatePosturechangedState)state
NS_SWIFT_NAME(onPostureChanged(state:));

/**
 JS alert state changed 

 - parameter state: 
*/
- (void)onAlertStateChanged:(ArsdkFeatureJpsumoPilotingstateAlertstatechangedState)state
NS_SWIFT_NAME(onAlertStateChanged(state:));

/**
 Notification sent when JS speed changes. 

 - parameter speed: Speed command applied to motors in range [-100;100].
 - parameter realSpeed: Actual real-world speed in cm/s. Value -32768 returned if not available.
*/
- (void)onSpeedChanged:(NSInteger)speed realspeed:(NSInteger)realspeed
NS_SWIFT_NAME(onSpeedChanged(speed:realspeed:));


@end

@interface ArsdkFeatureJpsumoPilotingstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoPilotingstateCallback>)callback;

@end

