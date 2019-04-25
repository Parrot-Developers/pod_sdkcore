/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneConfigurationUid;

struct arsdk_cmd;

@interface ArsdkFeatureMinidroneConfiguration : NSObject

/**
 Set the controller type. 

 - parameter type: Controller type like iOS or Android
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))controllerTypeEncoder:(NSString*)type
NS_SWIFT_NAME(controllerTypeEncoder(type:));

/**
 Set the controller name. 

 - parameter name: Controller name like com.parrot.freeflight3
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))controllerNameEncoder:(NSString*)name
NS_SWIFT_NAME(controllerNameEncoder(name:));

@end

