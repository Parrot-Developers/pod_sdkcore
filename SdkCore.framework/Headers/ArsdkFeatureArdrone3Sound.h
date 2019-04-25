/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3SoundUid;

struct arsdk_cmd;

@interface ArsdkFeatureArdrone3Sound : NSObject

/**
 Start the alert sound. The alert sound can only be started when the drone is not flying. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))startAlertSoundEncoder
NS_SWIFT_NAME(startAlertSoundEncoder());

/**
 Stop the alert sound. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))stopAlertSoundEncoder
NS_SWIFT_NAME(stopAlertSoundEncoder());

@end

