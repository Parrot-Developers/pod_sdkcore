/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonCommonUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonCommon : NSObject

/**
 Ask for all states.

**Please note that you should not send this command if you are using the
libARController API as this library is handling the connection process for you.** 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))allStatesEncoder
NS_SWIFT_NAME(allStatesEncoder());

/**
 Set the date.
This date is taken by the drone as its own date.
So medias and other files will be dated from this date

**Please note that you should not send this command if you are using the
libARController API as this library is handling the connection process for you.** 

 - parameter date: Date with ISO-8601 format
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))currentDateEncoder:(nonnull NSString *)date
NS_SWIFT_NAME(currentDateEncoder(date:));

/**
 Set the time.
This time is taken by the drone as its own time.
So medias and other files will be dated from this time

**Please note that you should not send this command if you are using the
libARController API as this library is handling the connection process for you.** 

 - parameter time: Time with ISO-8601 format
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))currentTimeEncoder:(nonnull NSString *)time
NS_SWIFT_NAME(currentTimeEncoder(time:));

/**
 Reboot the product.
The product will accept this command only if is not flying. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))rebootEncoder
NS_SWIFT_NAME(rebootEncoder());

/**
 Set both the date and the time with only one command.
If using this command, do not use [CurrentDate](#0-4-1) and [CurrentTime](#0-4-2) commands.
This datetime is taken by the drone as its own datetime.
So medias and other files will be dated from this datetime

**Please note that you should not send this command if you are using the
libARController API as this library is handling the connection process for you.** 

 - parameter datetime: DateTime with the ISO-8601 complete short format: "%Y%m%dT%H%M%S%z"
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))currentDateTimeEncoder:(nonnull NSString *)datetime
NS_SWIFT_NAME(currentDateTimeEncoder(datetime:));

@end

