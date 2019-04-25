/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonSettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonSettingsstateCallback<NSObject>

@optional

/**
 All settings have been sent.

**Please note that you should not care about this event if you are using the libARController API as this library is handling the connection process for you.** 

*/
- (void)onAllSettingsChanged
NS_SWIFT_NAME(onAllSettingsChanged());

/**
 All settings have been reset. 

*/
- (void)onResetChanged
NS_SWIFT_NAME(onResetChanged());

/**
 Product name changed. 

 - parameter name: Product name
*/
- (void)onProductNameChanged:(NSString*)name
NS_SWIFT_NAME(onProductNameChanged(name:));

/**
 Product version. 

 - parameter software: Product software version
 - parameter hardware: Product hardware version
*/
- (void)onProductVersionChanged:(NSString*)software hardware:(NSString*)hardware
NS_SWIFT_NAME(onProductVersionChanged(software:hardware:));

/**
 Product serial (1st part). 

 - parameter high: Serial high number (hexadecimal value)
*/
- (void)onProductSerialHighChanged:(NSString*)high
NS_SWIFT_NAME(onProductSerialHighChanged(high:));

/**
 Product serial (2nd part). 

 - parameter low: Serial low number (hexadecimal value)
*/
- (void)onProductSerialLowChanged:(NSString*)low
NS_SWIFT_NAME(onProductSerialLowChanged(low:));

/**
 Country changed. 

 - parameter code: Country code with ISO 3166 format, empty string means unknown country.
*/
- (void)onCountryChanged:(NSString*)code
NS_SWIFT_NAME(onCountryChanged(code:));

/**
 Auto-country changed. 

 - parameter automatic: Boolean : 0 : Manual / 1 : Auto
*/
- (void)onAutoCountryChanged:(NSUInteger)automatic
NS_SWIFT_NAME(onAutoCountryChanged(automatic:));

/**
 Board id. 

 - parameter id: Board id
*/
- (void)onBoardIdChanged:(NSString*)id
NS_SWIFT_NAME(onBoardIdChanged(id:));


@end

@interface ArsdkFeatureCommonSettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonSettingsstateCallback>)callback;

@end

