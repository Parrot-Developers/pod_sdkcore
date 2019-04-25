/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlDevicestateUid;

struct arsdk_cmd;

/** Connection status */
typedef NS_ENUM(NSInteger, ArsdkFeatureSkyctrlDevicestateConnexionchangedStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureSkyctrlDevicestateConnexionchangedStatusSdkCoreUnknown = -1,

    /** Not Connected */
    ArsdkFeatureSkyctrlDevicestateConnexionchangedStatusNotconnected = 0,

    /** Connecting to Drone */
    ArsdkFeatureSkyctrlDevicestateConnexionchangedStatusConnecting = 1,

    /** Connected to Drone */
    ArsdkFeatureSkyctrlDevicestateConnexionchangedStatusConnected = 2,

    /** Disconnecting from Drone */
    ArsdkFeatureSkyctrlDevicestateConnexionchangedStatusDisconnecting = 3,

};
#define ArsdkFeatureSkyctrlDevicestateConnexionchangedStatusCnt 4

@protocol ArsdkFeatureSkyctrlDevicestateCallback<NSObject>

@optional

/**
 List of visible ARDiscoveryDevices.
This event is deprecated and will never be sent by a SkyController 

 - parameter name: Device name
*/
- (void)onDeviceList:(NSString*)name
NS_SWIFT_NAME(onDeviceList(name:));

/**
 Status of the connection to a drone. 

 - parameter status: 
 - parameter deviceName: Drone name
 - parameter deviceProductID: Drone product IDentifier
*/
- (void)onConnexionChanged:(ArsdkFeatureSkyctrlDevicestateConnexionchangedStatus)status devicename:(NSString*)devicename deviceproductid:(NSUInteger)deviceproductid
NS_SWIFT_NAME(onConnexionChanged(status:devicename:deviceproductid:));


@end

@interface ArsdkFeatureSkyctrlDevicestate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureSkyctrlDevicestateCallback>)callback;

@end

