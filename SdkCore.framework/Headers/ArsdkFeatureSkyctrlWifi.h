/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlWifiUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlWifi : NSObject

/**
 After recieving this command, the SkyController will do a network scan to get the wifi list.
Communication with the drone is stopped during the network scan, so the controller should avoid sending this command during flight.
The controller should clear the local wifi list before sending this command. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))requestWifiListEncoder
NS_SWIFT_NAME(requestWifiListEncoder());

/**
 This is a synchronization command. The SkyController will automatically send its current wifi info when any data changes, so this command should only be used when connecting, in order to get an initial state. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))requestCurrentWifiEncoder
NS_SWIFT_NAME(requestCurrentWifiEncoder());

/**
 The network should be a visible network retrieved from the [WifiList](#4-0-0) event.
If the network is secured, then the passphrase must be set. For non-secure network, the passphrase argument is ignored. 

 - parameter bssid: Wifi bssid
 - parameter ssid: Wifi ssid
 - parameter passphrase: Wifi passphrase
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))connectToWifiEncoder:(nonnull NSString *)bssid ssid:(nonnull NSString *)ssid passphrase:(nonnull NSString *)passphrase
NS_SWIFT_NAME(connectToWifiEncoder(bssid:ssid:passphrase:));

/**
 Removes the network from the saved network list.
If the network is the current network, then the SkyController will be disconnected first. 

 - parameter ssid: Wifi ssid
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))forgetWifiEncoder:(nonnull NSString *)ssid
NS_SWIFT_NAME(forgetWifiEncoder(ssid:));

/**
 Requests the list of authorized wifi channels for the current country/regulatory domain.
These channels are valid for the [AccessPointChannel](#4-9-1) command. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))wifiAuthChannelEncoder
NS_SWIFT_NAME(wifiAuthChannelEncoder());

@end

