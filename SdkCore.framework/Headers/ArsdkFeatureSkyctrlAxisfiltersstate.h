/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlAxisfiltersstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureSkyctrlAxisfiltersstateCallback<NSObject>

@optional

/**
 As the preset filters list is empty, all the filters are transmitted using the builder syntax. See the [setAxisFilter](#4-16-2) command documentation for details about the builder syntax. 

 - parameter axis_id: The axiscode filtered
 - parameter filter_uid_or_builder: The filter associated
*/
- (void)onCurrentAxisFilters:(NSInteger)axisId filterUidOrBuilder:(NSString *)filterUidOrBuilder
NS_SWIFT_NAME(onCurrentAxisFilters(axisId:filterUidOrBuilder:));

/**
 Sent by the SkyController to notify the end of a [currentAxisFilters](#4-17-0) events list.
If the list is empty (e.g. the controller sent a [setAxisFilter](#4-16-2) command which made no change to the filters table), then this command will be sent without any [currentAxisFilters](#4-17-0) event preceding it. This gives the controller a reliable synchronization point when editing mappings. 

*/
- (void)onAllCurrentFiltersSent
NS_SWIFT_NAME(onAllCurrentFiltersSent());

/**
 No preset axis filter is defined on the SkyController, so this command will never be sent by the firmware. 

 - parameter filter_uid: The filter UID (used in communication with the SkyController)
 - parameter name: Display name for the user
*/
- (void)onPresetAxisFilters:(NSString *)filterUid name:(NSString *)name
NS_SWIFT_NAME(onPresetAxisFilters(filterUid:name:));

/**
 As the SkyController will never send a [presetAxisFilters](#4-17-2) event, this is the only event sent when the deprecated [getPresetAxisFilters](#4-16-1) command is recieved. 

*/
- (void)onAllPresetFiltersSent
NS_SWIFT_NAME(onAllPresetFiltersSent());


@end

@interface ArsdkFeatureSkyctrlAxisfiltersstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureSkyctrlAxisfiltersstateCallback>)callback;

@end

