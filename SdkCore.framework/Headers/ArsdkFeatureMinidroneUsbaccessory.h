/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneUsbaccessoryUid;

struct arsdk_cmd;

/** Usb Light mode. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneUsbaccessoryLightcontrolMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneUsbaccessoryLightcontrolModeSdkCoreUnknown = -1,

    /** Turn light in fixed state at a given intensity. */
    ArsdkFeatureMinidroneUsbaccessoryLightcontrolModeFixed = 0,

    /** Turn light in blinked state. */
    ArsdkFeatureMinidroneUsbaccessoryLightcontrolModeBlinked = 1,

    /** Turn light in oscillated state. */
    ArsdkFeatureMinidroneUsbaccessoryLightcontrolModeOscillated = 2,

};
#define ArsdkFeatureMinidroneUsbaccessoryLightcontrolModeCnt 3

/** USB Claw action. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneUsbaccessoryClawcontrolAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneUsbaccessoryClawcontrolActionSdkCoreUnknown = -1,

    /** Open Claw. */
    ArsdkFeatureMinidroneUsbaccessoryClawcontrolActionOpen = 0,

    /** Close Claw. */
    ArsdkFeatureMinidroneUsbaccessoryClawcontrolActionClose = 1,

};
#define ArsdkFeatureMinidroneUsbaccessoryClawcontrolActionCnt 2

/** USB Gun action. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneUsbaccessoryGuncontrolAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneUsbaccessoryGuncontrolActionSdkCoreUnknown = -1,

    /** Fire. */
    ArsdkFeatureMinidroneUsbaccessoryGuncontrolActionFire = 0,

};
#define ArsdkFeatureMinidroneUsbaccessoryGuncontrolActionCnt 1

@interface ArsdkFeatureMinidroneUsbaccessory : NSObject

/**
 USB Light control cmd. 

 - parameter id: Usb accessory id
 - parameter mode: 
 - parameter intensity: Light intensity from 0 (OFF) to 100 (Max intensity).
Only used in FIXED mode.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))lightControlEncoder:(NSUInteger)id mode:(ArsdkFeatureMinidroneUsbaccessoryLightcontrolMode)mode intensity:(NSUInteger)intensity
NS_SWIFT_NAME(lightControlEncoder(id:mode:intensity:));

/**
 USB Claw control cmd. 

 - parameter id: Usb accessory id.
 - parameter action: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))clawControlEncoder:(NSUInteger)id action:(ArsdkFeatureMinidroneUsbaccessoryClawcontrolAction)action
NS_SWIFT_NAME(clawControlEncoder(id:action:));

/**
 USB Gun control cmd. 

 - parameter id: Usb accessory id
 - parameter action: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))gunControlEncoder:(NSUInteger)id action:(ArsdkFeatureMinidroneUsbaccessoryGuncontrolAction)action
NS_SWIFT_NAME(gunControlEncoder(id:action:));

@end

