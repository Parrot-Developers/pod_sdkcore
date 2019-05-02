/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlGamepadinfosstateUid;

struct arsdk_cmd;

/** The type (axis/button) of the control */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlGamepadinfosstateGamepadcontrolType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlGamepadinfosstateGamepadcontrolTypeSdkCoreUnknown = -1,

    /** An analog axis (one of the 4 joysticks) */
    ArsdkFeatureSkyctrlGamepadinfosstateGamepadcontrolTypeAxis = 0,

    /** A button (including small joystick clicks) */
    ArsdkFeatureSkyctrlGamepadinfosstateGamepadcontrolTypeButton = 1,

};
#define ArsdkFeatureSkyctrlGamepadinfosstateGamepadcontrolTypeCnt 2

@protocol ArsdkFeatureSkyctrlGamepadinfosstateCallback<NSObject>

@optional

/**
 Each gamepad control element represents a mappable control on the SkyController. The control can be either a button or an analog axis.
Each control have a human-readable english name describing its physical position on the SkyController. 

 - parameter type: 
 - parameter id: The button or axis id
A button and an axis can have the same ID, but their type is different
 - parameter name: Display name for the control
*/
- (void)onGamepadControl:(ArsdkFeatureSkyctrlGamepadinfosstateGamepadcontrolType)type id:(NSInteger)id name:(NSString*)name
NS_SWIFT_NAME(onGamepadControl(type:id:name:));

/**
 This event marks the end of the GamepadControl list 

*/
- (void)onAllGamepadControlsSent
NS_SWIFT_NAME(onAllGamepadControlsSent());


@end

@interface ArsdkFeatureSkyctrlGamepadinfosstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureSkyctrlGamepadinfosstateCallback>)callback;

@end

