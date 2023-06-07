/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3AccessorystateUid;

struct arsdk_cmd;

/** Accessory type */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3AccessorystateConnectedaccessoriesAccessoryType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3AccessorystateConnectedaccessoriesAccessoryTypeSdkCoreUnknown = -1,

    /** Parrot Sequoia (multispectral camera for agriculture) */
    ArsdkFeatureArdrone3AccessorystateConnectedaccessoriesAccessoryTypeSequoia = 0,

    /** FLIR camera (thermal+rgb camera) */
    ArsdkFeatureArdrone3AccessorystateConnectedaccessoriesAccessoryTypeFlir = 1,

};
#define ArsdkFeatureArdrone3AccessorystateConnectedaccessoriesAccessoryTypeCnt 2

@protocol ArsdkFeatureArdrone3AccessorystateCallback<NSObject>

@optional

/**
 List of all connected accessories. This event presents the list of all connected accessories. To actually use the component, use the component dedicated feature. 

 - parameter id: Id of the accessory for the session.
 - parameter accessory_type: 
 - parameter uid: Unique Id of the accessory.
This id is unique by accessory_type.
 - parameter swVersion: Software Version of the accessory.
 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
0x08: Remove: This value should be removed from the existing list.
*/
- (void)onConnectedAccessories:(NSUInteger)id accessoryType:(ArsdkFeatureArdrone3AccessorystateConnectedaccessoriesAccessoryType)accessoryType uid:(nonnull NSString *)uid swversion:(nonnull NSString *)swversion listFlags:(NSUInteger)listFlags
NS_SWIFT_NAME(onConnectedAccessories(id:accessoryType:uid:swversion:listFlags:));

/**
 Connected accessories battery. 

 - parameter id: Id of the accessory for the session.
 - parameter batteryLevel: Battery level in percentage.
 - parameter list_flags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
0x08: Remove: This value should be removed from the existing list.
*/
- (void)onBattery:(NSUInteger)id batterylevel:(NSUInteger)batterylevel listFlags:(NSUInteger)listFlags
NS_SWIFT_NAME(onBattery(id:batterylevel:listFlags:));


@end

@interface ArsdkFeatureArdrone3Accessorystate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureArdrone3AccessorystateCallback>)callback;

@end

