/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneRemotecontrollerUid;

struct arsdk_cmd;

@interface ArsdkFeatureMinidroneRemotecontroller : NSObject

/**
 Send the address of the remote controller on which the drone should be paired
This is used to pair a Tinos controller
Where mac address: MSB-MID-LSB. 

 - parameter msb_mac: 2 most significant bytes of mac address
 - parameter mid_mac: 2 middle bytes of mac address
 - parameter lsb_mac: 2 least significant bytes of mac address
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setPairedRemoteEncoder:(NSUInteger)msbMac midMac:(NSUInteger)midMac lsbMac:(NSUInteger)lsbMac
NS_SWIFT_NAME(setPairedRemoteEncoder(msbMac:midMac:lsbMac:));

/**
 Enter/leave RC raw mode.

In raw mode, unfiltered RC commands are sent directly
to the controller, and are not processed by the drone.

This is useful if you need to access the joysticks and
buttons state, in the RC mapping settings screen for
instance. 

 - parameter enabled: 1 to enable, 0 to disable.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))rawModeEncoder:(NSUInteger)enabled
NS_SWIFT_NAME(rawModeEncoder(enabled:));

@end

