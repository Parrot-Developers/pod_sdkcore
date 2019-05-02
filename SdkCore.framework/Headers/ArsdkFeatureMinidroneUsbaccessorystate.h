/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneUsbaccessorystateUid;

struct arsdk_cmd;

/** Usb Light state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneUsbaccessorystateLightstateState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneUsbaccessorystateLightstateStateSdkCoreUnknown = -1,

    /** Fixed state at given intensity. */
    ArsdkFeatureMinidroneUsbaccessorystateLightstateStateFixed = 0,

    /** Blinked state. */
    ArsdkFeatureMinidroneUsbaccessorystateLightstateStateBlinked = 1,

    /** Oscillated state. */
    ArsdkFeatureMinidroneUsbaccessorystateLightstateStateOscillated = 2,

};
#define ArsdkFeatureMinidroneUsbaccessorystateLightstateStateCnt 3

/** Usb Claw state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneUsbaccessorystateClawstateState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneUsbaccessorystateClawstateStateSdkCoreUnknown = -1,

    /** Claw is fully opened. */
    ArsdkFeatureMinidroneUsbaccessorystateClawstateStateOpened = 0,

    /** Claw open in progress. */
    ArsdkFeatureMinidroneUsbaccessorystateClawstateStateOpening = 1,

    /** Claw is fully closed. */
    ArsdkFeatureMinidroneUsbaccessorystateClawstateStateClosed = 2,

    /** Claw close in progress. */
    ArsdkFeatureMinidroneUsbaccessorystateClawstateStateClosing = 3,

};
#define ArsdkFeatureMinidroneUsbaccessorystateClawstateStateCnt 4

/** USB Claw state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneUsbaccessorystateGunstateState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneUsbaccessorystateGunstateStateSdkCoreUnknown = -1,

    /** Gun is ready to fire. */
    ArsdkFeatureMinidroneUsbaccessorystateGunstateStateReady = 0,

    /** Gun is busy (ie not ready to fire). */
    ArsdkFeatureMinidroneUsbaccessorystateGunstateStateBusy = 1,

};
#define ArsdkFeatureMinidroneUsbaccessorystateGunstateStateCnt 2

@protocol ArsdkFeatureMinidroneUsbaccessorystateCallback<NSObject>

@optional

/**
 USB Light accessory state cmd. 

 - parameter id: Usb accessory id
 - parameter state: 
 - parameter intensity: Light intensity from 0 (OFF) to 100 (Max intensity).
Only used in FIXED state.
 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
0x08: Remove: This value should be removed from the existing list.
*/
- (void)onLightState:(NSUInteger)id state:(ArsdkFeatureMinidroneUsbaccessorystateLightstateState)state intensity:(NSUInteger)intensity listFlags:(NSUInteger)listFlags
NS_SWIFT_NAME(onLightState(id:state:intensity:listFlags:));

/**
 USB Claw accessory state cmd. 

 - parameter id: Usb accessory id
 - parameter state: 
 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
0x08: Remove: This value should be removed from the existing list.
*/
- (void)onClawState:(NSUInteger)id state:(ArsdkFeatureMinidroneUsbaccessorystateClawstateState)state listFlags:(NSUInteger)listFlags
NS_SWIFT_NAME(onClawState(id:state:listFlags:));

/**
 USB Gun accessory state cmd. 

 - parameter id: Usb accessory id.
 - parameter state: 
 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
0x08: Remove: This value should be removed from the existing list.
*/
- (void)onGunState:(NSUInteger)id state:(ArsdkFeatureMinidroneUsbaccessorystateGunstateState)state listFlags:(NSUInteger)listFlags
NS_SWIFT_NAME(onGunState(id:state:listFlags:));


@end

@interface ArsdkFeatureMinidroneUsbaccessorystate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneUsbaccessorystateCallback>)callback;

@end

