/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonMavlinkUid;

struct arsdk_cmd;

/** type of the played mavlink file */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonMavlinkStartType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonMavlinkStartTypeSdkCoreUnknown = -1,

    /** Mavlink file for FlightPlan */
    ArsdkFeatureCommonMavlinkStartTypeFlightplan = 0,

    /** Mavlink file for MapMyHouse */
    ArsdkFeatureCommonMavlinkStartTypeMapmyhouse = 1,

    /** Mavlink file for FlightPlan V2 (better follow the standard) */
    ArsdkFeatureCommonMavlinkStartTypeFlightplanv2 = 2,

};
#define ArsdkFeatureCommonMavlinkStartTypeCnt 3

@interface ArsdkFeatureCommonMavlink : NSObject

/**
 Start a FlightPlan based on a mavlink file existing on the drone.

Requirements are:
* Product is calibrated
* Product should be in outdoor mode
* Product has fixed its GPS
 

 - parameter filepath: flight plan file path from the mavlink ftp root
 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startEncoder:(nonnull NSString *)filepath type:(ArsdkFeatureCommonMavlinkStartType)type
NS_SWIFT_NAME(startEncoder(filepath:type:));

/**
 Pause a FlightPlan that was playing.
To unpause a FlightPlan, see [StartFlightPlan](#0-11-0)
 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))pauseEncoder
NS_SWIFT_NAME(pauseEncoder());

/**
 Stop a FlightPlan that was playing.
 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))stopEncoder
NS_SWIFT_NAME(stopEncoder());

@end

