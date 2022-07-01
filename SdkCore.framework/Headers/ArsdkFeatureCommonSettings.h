/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonSettingsUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonSettings : NSObject

/**
 Ask for all settings.

**Please note that you should not send this command if you are using the
libARController API as this library is handling the connection process for you.** 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))allSettingsEncoder
NS_SWIFT_NAME(allSettingsEncoder());

/**
 Reset all settings. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))resetEncoder
NS_SWIFT_NAME(resetEncoder());

/**
 Set the product name.
It also sets the name of the SSID for Wifi products and advertisement name for BLE products (changed after a reboot of the product). 

 - parameter name: Product name
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))productNameEncoder:(NSString *)name
NS_SWIFT_NAME(productNameEncoder(name:));

/**
 Set the country for Wifi products.
This can modify Wifi band and/or channel.
**Please note that you might be disconnected from the product after changing the country as it changes Wifi parameters.** 

 - parameter code: Country code with ISO 3166 format
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))countryEncoder:(NSString *)code
NS_SWIFT_NAME(countryEncoder(code:));

/**
 Enable auto-country.
If auto-country is set, the drone will guess its Wifi country by itself by checking other Wifi country around it.
**Please note that you might be disconnected from the product after changing the country as it changes Wifi parameters.** 

 - parameter automatic: Boolean : 0 : Manual / 1 : Auto
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))autoCountryEncoder:(NSUInteger)automatic
NS_SWIFT_NAME(autoCountryEncoder(automatic:));

@end

