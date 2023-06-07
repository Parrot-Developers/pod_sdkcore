/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlAxismappingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureSkyctrlAxismappingsstateCallback<NSObject>

@optional

/**
 The mapping maps an axis_id (as found in [gamepadControl](#4-19-0) events) to a mapping_uid (as found in the [availableAxisMappings](#4-15-2) events).
A special mapping (NO_ACTION) is attached to unmapped axes. 

 - parameter axis_id: The axiscode mapped
 - parameter mapping_uid: The mapping associated
*/
- (void)onCurrentAxisMappings:(NSInteger)axisId mappingUid:(nonnull NSString *)mappingUid
NS_SWIFT_NAME(onCurrentAxisMappings(axisId:mappingUid:));

/**
 Sent by the SkyController to notify the end of a [currentAxisMappings](#4-15-0) events list.
If the list is empty (e.g. the controller sent a [setAxisMapping](#4-14-2) command which made no change to the mapping table), then this command will be sent without any [currentAxisMappings](#4-15-0) event preceding it. This gives the controller a reliable synchronization point when editing mappings. 

*/
- (void)onAllCurrentAxisMappingsSent
NS_SWIFT_NAME(onAllCurrentAxisMappingsSent());

/**
 Each action that can be mapped on an axis is identified by its mapping_uid, which will be used in the [setAxisMapping](#4-14-2) and [currentAxisMappings](#4-15-0) commands.
The name is a human readable string, in english, describing the action.
A special action named NO_ACTION serves as the unmap action. This action can be bound to multiple axes to disable them.
An [allAvailableAxissMappingsSent](#4-15-3) event is sent at the end of the list. 

 - parameter mapping_uid: The mapping UID (used in communication with the SkyController)
 - parameter name: Display name for the user
*/
- (void)onAvailableAxisMappings:(nonnull NSString *)mappingUid name:(nonnull NSString *)name
NS_SWIFT_NAME(onAvailableAxisMappings(mappingUid:name:));

/**
 Sent by the SkyController to notify the end of a [availableAxisMappings](#4-15-2) events list. 

*/
- (void)onAllAvailableAxisMappingsSent
NS_SWIFT_NAME(onAllAvailableAxisMappingsSent());


@end

@interface ArsdkFeatureSkyctrlAxismappingsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureSkyctrlAxismappingsstateCallback>)callback;

@end

