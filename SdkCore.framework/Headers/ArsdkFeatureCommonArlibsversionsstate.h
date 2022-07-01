/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonArlibsversionsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonArlibsversionsstateCallback<NSObject>

@optional

/**
 Controller libARCommands version 

 - parameter version: version of libARCommands ("1.2.3.4" format)
*/
- (void)onControllerLibARCommandsVersion:(NSString *)version
NS_SWIFT_NAME(onControllerLibARCommandsVersion(version:));

/**
 SkyController libARCommands version 

 - parameter version: version of libARCommands ("1.2.3.4" format)
*/
- (void)onSkyControllerLibARCommandsVersion:(NSString *)version
NS_SWIFT_NAME(onSkyControllerLibARCommandsVersion(version:));

/**
 Device libARCommands version 

 - parameter version: version of libARCommands ("1.2.3.4" format)
*/
- (void)onDeviceLibARCommandsVersion:(NSString *)version
NS_SWIFT_NAME(onDeviceLibARCommandsVersion(version:));


@end

@interface ArsdkFeatureCommonArlibsversionsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureCommonArlibsversionsstateCallback>)callback;

@end

