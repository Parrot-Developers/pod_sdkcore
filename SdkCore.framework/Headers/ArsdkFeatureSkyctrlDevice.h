/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlDeviceUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlDevice : NSObject

/**
 This command is deprecated (The SkyController can only see one device at a time, so a device list is not required), and should not be used. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))requestDeviceListEncoder
NS_SWIFT_NAME(requestDeviceListEncoder());

/**
 This command is deprecated and should not be used. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))requestCurrentDeviceEncoder
NS_SWIFT_NAME(requestCurrentDeviceEncoder());

/**
 This command is deprecated and should not be used.
The SkyController will automatically connect to the first visible device on the current wifi network. 

 - parameter deviceName: Device name
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))connectToDeviceEncoder:(nonnull NSString *)devicename
NS_SWIFT_NAME(connectToDeviceEncoder(devicename:));

@end

