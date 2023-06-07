/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCommonUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlCommon : NSObject

/**
 Request the controller to send all its states. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))allStatesEncoder
NS_SWIFT_NAME(allStatesEncoder());

/**
 Set both the date and the time with only one command.
If using this command, do not use [CurrentDate](#0-4-1) and [CurrentTime](#0-4-2) commands.
This datetime is taken by the remote controller as its own datetime.
So medias and other files will be dated from this datetime

**Please note that you should not send this command if you are using the
libARController API as this library is handling the connection process for you.** 

 - parameter datetime: DateTime with the ISO-8601 complete short format: "%Y%m%dT%H%M%S%z"
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))currentDateTimeEncoder:(nonnull NSString *)datetime
NS_SWIFT_NAME(currentDateTimeEncoder(datetime:));

@end

