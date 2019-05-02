/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlAxismappingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlAxismappings : NSObject

/**
 The SkyController will send its full axis mapping. This command is mainly useful for initial synchronization, as every change to the axis mapping (via the [setAxisMapping](#4-14-2) command) will trigger [currentAxisMappings](#4-15-0) events. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))getCurrentAxisMappingsEncoder
NS_SWIFT_NAME(getCurrentAxisMappingsEncoder());

/**
 The SkyController will send all the available action that can be mapped on axes.
As this list is static, the controller only need to request this information once. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))getAvailableAxisMappingsEncoder
NS_SWIFT_NAME(getAvailableAxisMappingsEncoder());

/**
 Any previous mapping for the given axis will be removed, as a axis can only be mapped to one action.
To unmap a axis, a NO_ACTION mapping can be used (see the [availableAxisMappings](#4-15-2) event).
Some actions can not be mapped to two different axes at the same time. In this case, the first axis will automatically be set to NO_ACTION, and the corresponding [currentAxisMappings](#4-15-0) event will be fired. 

 - parameter axis_id: The axiscode to map
 - parameter mapping_uid: The mapping to associate with the axis
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setAxisMappingEncoder:(NSInteger)axisId mappingUid:(NSString*)mappingUid
NS_SWIFT_NAME(setAxisMappingEncoder(axisId:mappingUid:));

/**
 The default values can change between software versions. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))defaultAxisMappingEncoder
NS_SWIFT_NAME(defaultAxisMappingEncoder());

@end

