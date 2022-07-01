/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlButtonmappingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlButtonmappings : NSObject

/**
 The SkyController will send its full button mapping. This command is mainly useful for initial synchronization, as every change to the button mapping (via the [setButtonMapping](#4-12-2) command) will trigger [currentButtonMappings](#4-13-0) events. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))getCurrentButtonMappingsEncoder
NS_SWIFT_NAME(getCurrentButtonMappingsEncoder());

/**
 The SkyController will send all the available action that can be mapped on buttons.
As this list is static, the controller only need to request this information once. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))getAvailableButtonMappingsEncoder
NS_SWIFT_NAME(getAvailableButtonMappingsEncoder());

/**
 Any previous mapping for the given button will be removed, as a button can only be mapped to one action.
To unmap a button, a NO_ACTION mapping can be used (see the [availableButtonMappings](#4-13-2) event).
Some actions can not be mapped to two different buttons at the same time. In this case, the first button will automatically be set to NO_ACTION, and the corresponding [currentButtonMappings](#4-13-0) event will be fired. 

 - parameter key_id: The keycode to map
 - parameter mapping_uid: The mapping to associate with the key
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setButtonMappingEncoder:(NSInteger)keyId mappingUid:(NSString *)mappingUid
NS_SWIFT_NAME(setButtonMappingEncoder(keyId:mappingUid:));

/**
 The default values can change between software versions.
The default values are different for Black Edition SkyControllers 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))defaultButtonMappingEncoder
NS_SWIFT_NAME(defaultButtonMappingEncoder());

@end

