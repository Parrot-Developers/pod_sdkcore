/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlButtonmappingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureSkyctrlButtonmappingsstateCallback<NSObject>

@optional

/**
 The mapping maps a key_id (as found in [gamepadControl](#4-19-0) events) to a mapping_uid (as found in the [availableButtonMappings](#4-13-2) events).
A special mapping (NO_ACTION) is attached to unmapped buttons. 

 - parameter key_id: The keycode mapped
 - parameter mapping_uid: The mapping associated
*/
- (void)onCurrentButtonMappings:(NSInteger)keyId mappingUid:(NSString *)mappingUid
NS_SWIFT_NAME(onCurrentButtonMappings(keyId:mappingUid:));

/**
 Sent by the SkyController to notify the end of a [currentButtonMappings](#4-13-0) events list.
If the list is empty (e.g. the controller sent a [setButtonMapping](#4-12-2) command which made no change to the mapping table), then this command will be sent without any [currentButtonMappings](#4-13-0) event preceding it. This gives the controller a reliable synchronization point when editing mappings. 

*/
- (void)onAllCurrentButtonMappingsSent
NS_SWIFT_NAME(onAllCurrentButtonMappingsSent());

/**
 Each action that can be mapped on a button is identified by its mapping_uid, which will be used in the [setButtonMapping](#4-12-2) and [currentButtonMappings](#4-13-0) commands.
The name is a human readable string, in english, describing the action.
A special action named NO_ACTION serves as the unmap action. This action can be bound to multiple buttons to disable them.
An [allAvailableButtonsMappingsSent](#4-13-3) event is sent at the end of the list. 

 - parameter mapping_uid: The mapping UID (used in communication with the SkyController)
 - parameter name: Display name for the user
*/
- (void)onAvailableButtonMappings:(NSString *)mappingUid name:(NSString *)name
NS_SWIFT_NAME(onAvailableButtonMappings(mappingUid:name:));

/**
 Sent by the SkyController to notify the end of a [availableButtonMappings](#4-13-2) events list. 

*/
- (void)onAllAvailableButtonsMappingsSent
NS_SWIFT_NAME(onAllAvailableButtonsMappingsSent());


@end

@interface ArsdkFeatureSkyctrlButtonmappingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSkyctrlButtonmappingsstateCallback>)callback;

@end

