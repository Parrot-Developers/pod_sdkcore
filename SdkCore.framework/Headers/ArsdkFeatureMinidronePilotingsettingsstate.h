/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidronePilotingsettingsstateUid;

struct arsdk_cmd;

/**  */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidronePilotingsettingsstatePreferredpilotingmodechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidronePilotingsettingsstatePreferredpilotingmodechangedModeSdkCoreUnknown = -1,

    /** The flight envelope of Mambo FPV has been divided in three piloting modes.
The first one corresponds to the well-known flying mode currently used for
Mambo, which is based in an horizontal stabilisation (performed via the
vertical camera and the acceleration information) and a vertical acceleration
(by means of the ultrasound, the barometer and the vertical accelerometer) in
order for the drone to stay in fixed point position when no piloting commands
are sent by the user. */
    ArsdkFeatureMinidronePilotingsettingsstatePreferredpilotingmodechangedModeEasy = 0,

    /** The second piloting mode consists of deactivating the horizontal stabilisation.
Thus, in this flying mode, when no piloting command is received, the drone will
try to stay at 0° tilt angle instead of responding to a 0 m/s horizontal speed
reference. This behaviour will result in a slight horizontal drift. */
    ArsdkFeatureMinidronePilotingsettingsstatePreferredpilotingmodechangedModeMedium = 1,

    /** The third piloting mode also adds the vertical stabilisation deactivation and,
therefore, a slight vertical drift. When flying in the third mode, a closed
loop height control is no longer performed in order for the drone to keep a
certain height and vertical speed. Instead, the vertical command coming from
the user will directly generate an open loop acceleration command. */
    ArsdkFeatureMinidronePilotingsettingsstatePreferredpilotingmodechangedModeDifficult = 2,

};
#define ArsdkFeatureMinidronePilotingsettingsstatePreferredpilotingmodechangedModeCnt 3

@protocol ArsdkFeatureMinidronePilotingsettingsstateCallback<NSObject>

@optional

/**
 Max Altitude sent by product 

 - parameter current: Current altitude max
 - parameter min: Range min of altitude
 - parameter max: Range max of altitude
*/
- (void)onMaxAltitudeChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxAltitudeChanged(current:min:max:));

/**
 Max tilt sent by product 

 - parameter current: Current max tilt
 - parameter min: Range min of tilt
 - parameter max: Range max of tilt
*/
- (void)onMaxTiltChanged:(float)current min:(float)min max:(float)max
NS_SWIFT_NAME(onMaxTiltChanged(current:min:max:));

/**
 Banked Turn mode.
If banked turn mode is enabled, the drone will use yaw values from the piloting command to infer with roll and pitch on the drone when its horizontal speed is not null. 

 - parameter state: 1 if enabled, 0 if disabled
*/
- (void)onBankedTurnChanged:(NSUInteger)state
NS_SWIFT_NAME(onBankedTurnChanged(state:));

/**
 Event informing about the max throttle. 

 - parameter max: Max throttle, between 0 and 1.
*/
- (void)onMaxThrottleChanged:(float)max
NS_SWIFT_NAME(onMaxThrottleChanged(max:));

/**
 Event informing about the preferred piloting mode. 

 - parameter mode: 
*/
- (void)onPreferredPilotingModeChanged:(ArsdkFeatureMinidronePilotingsettingsstatePreferredpilotingmodechangedMode)mode
NS_SWIFT_NAME(onPreferredPilotingModeChanged(mode:));


@end

@interface ArsdkFeatureMinidronePilotingsettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidronePilotingsettingsstateCallback>)callback;

@end

