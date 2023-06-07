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
- (void)onControllerLibARCommandsVersion:(nonnull NSString *)version
NS_SWIFT_NAME(onControllerLibARCommandsVersion(version:));

/**
 SkyController libARCommands version 

 - parameter version: version of libARCommands ("1.2.3.4" format)
*/
- (void)onSkyControllerLibARCommandsVersion:(nonnull NSString *)version
NS_SWIFT_NAME(onSkyControllerLibARCommandsVersion(version:));

/**
 Device libARCommands version 

 - parameter version: version of libARCommands ("1.2.3.4" format)
*/
- (void)onDeviceLibARCommandsVersion:(nonnull NSString *)version
NS_SWIFT_NAME(onDeviceLibARCommandsVersion(version:));


@end

@interface ArsdkFeatureCommonArlibsversionsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonArlibsversionsstateCallback>)callback;

@end

