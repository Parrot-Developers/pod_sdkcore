/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureDroneManagerUid;

struct arsdk_cmd;

/** The security of the drone network. */
typedef NS_ENUM(NSInteger, ArsdkFeatureDroneManagerSecurity) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDroneManagerSecuritySdkCoreUnknown = -1,

    /** The drone is not protected. */
    ArsdkFeatureDroneManagerSecurityNone = 0,

    /** The drone is protected with Wpa2 (passphrase). */
    ArsdkFeatureDroneManagerSecurityWpa2 = 1,

};
#define ArsdkFeatureDroneManagerSecurityCnt 2

/** The state of the connection to a drone. */
typedef NS_ENUM(NSInteger, ArsdkFeatureDroneManagerConnectionState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureDroneManagerConnectionStateSdkCoreUnknown = -1,

    /** The drone manager do nothing (wait for command). */
    ArsdkFeatureDroneManagerConnectionStateIdle = 0,

    /** The drone manager is searching for a known drone. */
    ArsdkFeatureDroneManagerConnectionStateSearching = 1,

    /** The drone manager is connecting to a drone. */
    ArsdkFeatureDroneManagerConnectionStateConnecting = 2,

    /** The drone manager is connected to a drone. */
    ArsdkFeatureDroneManagerConnectionStateConnected = 3,

    /** The drone manager is finishing the connection with the drone before taking further action. */
    ArsdkFeatureDroneManagerConnectionStateDisconnecting = 4,

};
#define ArsdkFeatureDroneManagerConnectionStateCnt 5

@protocol ArsdkFeatureDroneManagerCallback<NSObject>

@optional

/**
 Item describing a drone. 

 - parameter serial: Serial number of the drone.
 - parameter model: Model id of the drone.
 - parameter name: Name (SSID) of the drone.
 - parameter connection_order: 0 if the drone is unknwon (never connected).
Else, order of last connection (1 = most recent)
 - parameter active: 1 if the drone is active (the drone manager tries to connect or is connected to it)
0 if the drone is not the active one.
 - parameter visible: 1 if the drone is currently visible, 0 otherwise.
 - parameter security: Security method used by the drone.
 - parameter has_saved_key: 1 if the drone manager has a saved security key for the drone, 0 otherwise.
If security method is not 'none', and this value is 0, then the controller should prompt the user for a passphrase before sending a connect.
 - parameter rssi: The drone rssi (wifi signal strength estimation).
The value is meaningless if the drone is not visible.
 - parameter list_flags: 
*/
- (void)onDroneListItem:(NSString*)serial model:(NSUInteger)model name:(NSString*)name connectionOrder:(NSUInteger)connectionOrder active:(NSUInteger)active visible:(NSUInteger)visible security:(ArsdkFeatureDroneManagerSecurity)security hasSavedKey:(NSUInteger)hasSavedKey rssi:(NSInteger)rssi listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onDroneListItem(serial:model:name:connectionOrder:active:visible:security:hasSavedKey:rssi:listFlagsBitField:));

/**
 State of the connection. 

 - parameter state: Current state of the connection.
 - parameter serial: Serial number of the drone.
 - parameter model: Model id of the drone.
 - parameter name: Name (SSID) of the drone.
*/
- (void)onConnectionState:(ArsdkFeatureDroneManagerConnectionState)state serial:(NSString*)serial model:(NSUInteger)model name:(NSString*)name
NS_SWIFT_NAME(onConnectionState(state:serial:model:name:));

/**
 Authentication failed because of a wrong key (passphrase). 

 - parameter serial: Serial number of the drone.
 - parameter model: Model id of the drone.
 - parameter name: Name (SSID) of the drone.
*/
- (void)onAuthenticationFailed:(NSString*)serial model:(NSUInteger)model name:(NSString*)name
NS_SWIFT_NAME(onAuthenticationFailed(serial:model:name:));

/**
 Connection refused by the drone because another peer is already connected to. 

 - parameter serial: Serial number of the drone.
 - parameter model: Model id of the drone.
 - parameter name: Name (SSID) of the drone.
*/
- (void)onConnectionRefused:(NSString*)serial model:(NSUInteger)model name:(NSString*)name
NS_SWIFT_NAME(onConnectionRefused(serial:model:name:));

/**
 Item describing a known drone (already connected). 

 - parameter serial: Serial number of the drone.
 - parameter model: Model id of the drone.
 - parameter name: Last visible Name (SSID) of the drone.
 - parameter security: Security method used by the drone.
 - parameter has_saved_key: 1 if the drone manager has a saved security key for the drone, 0 otherwise.
If security method is not 'none', and this value is 0, then the controller should prompt the user for a passphrase before sending a connect.
 - parameter list_flags: 
*/
- (void)onKnownDroneItem:(NSString*)serial model:(NSUInteger)model name:(NSString*)name security:(ArsdkFeatureDroneManagerSecurity)security hasSavedKey:(NSUInteger)hasSavedKey listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onKnownDroneItem(serial:model:name:security:hasSavedKey:listFlagsBitField:));


@end

@interface ArsdkFeatureDroneManager : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureDroneManagerCallback>)callback;

/**
 The list will contain:
* known drones not currently visible. * known drones currently visible. * unknown drones currently visible. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))discoverDronesEncoder
NS_SWIFT_NAME(discoverDronesEncoder());

/**
 Request connection to a specific drone. Override the auto-selected drone. 

 - parameter serial: Serial number of the drone.
 - parameter key: Security key (passphrase) to use.
This arg is ignored if the drone security is 'none'.
If the drone manager has a saved key for the drone, pass an empty string to use it
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))connectEncoder:(NSString*)serial key:(NSString*)key
NS_SWIFT_NAME(connectEncoder(serial:key:));

/**
 Forget the given drone. If the drone is the selected one, the auto-selection will run again. 

 - parameter serial: Serial number of the drone to forget.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))forgetEncoder:(NSString*)serial
NS_SWIFT_NAME(forgetEncoder(serial:));

@end

