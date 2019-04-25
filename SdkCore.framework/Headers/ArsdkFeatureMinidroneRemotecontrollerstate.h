/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneRemotecontrollerstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureMinidroneRemotecontrollerstateCallback<NSObject>

@optional

/**
 State of the connection to the remote controller changed. 

 - parameter state: New connection state.
0=disconnected
1=connected
*/
- (void)onConnectionChanged:(NSUInteger)state
NS_SWIFT_NAME(onConnectionChanged(state:));

/**
 Notify the controller that the record button was
pressed on the remote controller. 

*/
- (void)onRecordButtonPressed
NS_SWIFT_NAME(onRecordButtonPressed());

/**
 Notify the controller that the take picture button was
pressed on the remote controller. 

*/
- (void)onTakePictureButtonPressed
NS_SWIFT_NAME(onTakePictureButtonPressed());

/**
 Notify the controller on raw mode state change.

In raw mode, unfiltered RC commands are sent directly
to the controller, and are not processed by the drone.

This is useful if you need to access the joysticks and
buttons state, in the RC mapping settings screen for
instance. 

 - parameter enabled: 1 if raw mode is enabled, 0 if it is not.
*/
- (void)onRawMode:(NSUInteger)enabled
NS_SWIFT_NAME(onRawMode(enabled:));

/**
 Raw RC commands data. Updated when a change is
detected. 

 - parameter joy0x: Stick 0 X axis value between -127 and 127.
0 is neutral.
 - parameter joy0y: Stick 0 Y axis value between -127 and 127.
0 is neutral.
 - parameter joy1x: Stick 1 X axis value between -127 and 127.
0 is neutral.
 - parameter joy1y: Stick 1 Y axis value between -127 and 127.
0 is neutral.
 - parameter buttons: Bitfield reflecting the state of all the
buttons.
0 means that the button is released, 1 if it is pushed.
bit 0: Take off
bit 1: 1 button
bit 2: 2 button
bit 3: B button
bit 4: A button
bit 5: R1 button
bit 6: R2 button
bit 7: L1 button
bit 8: L2 button
bit 9: Left joystick
bit 10: Right joystick
*/
- (void)onRawCommands:(NSInteger)joy0x joy0y:(NSInteger)joy0y joy1x:(NSInteger)joy1x joy1y:(NSInteger)joy1y buttons:(NSUInteger)buttons
NS_SWIFT_NAME(onRawCommands(joy0x:joy0y:joy1x:joy1y:buttons:));

/**
 Battery level data. Updated as soon as it changes. 

 - parameter level: Battery level in percent.
Special value -1 when the battery level is not
known yet.
*/
- (void)onBatteryLevel:(NSInteger)level
NS_SWIFT_NAME(onBatteryLevel(level:));


@end

@interface ArsdkFeatureMinidroneRemotecontrollerstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneRemotecontrollerstateCallback>)callback;

@end

