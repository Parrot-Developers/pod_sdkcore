/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3GpssettingsUid;

struct arsdk_cmd;

/** The type of the home position */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3GpssettingsHometypeType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3GpssettingsHometypeTypeSdkCoreUnknown = -1,

    /** The drone will try to return to the take off position */
    ArsdkFeatureArdrone3GpssettingsHometypeTypeTakeoff = 0,

    /** The drone will try to return to the pilot position */
    ArsdkFeatureArdrone3GpssettingsHometypeTypePilot = 1,

    /** The drone will try to return to the target of the current (or last) follow me */
    ArsdkFeatureArdrone3GpssettingsHometypeTypeFollowee = 2,

};
#define ArsdkFeatureArdrone3GpssettingsHometypeTypeCnt 3

@interface ArsdkFeatureArdrone3Gpssettings : NSObject

/**
 Set home position. 

 - parameter latitude: Home latitude in decimal degrees
 - parameter longitude: Home longitude in decimal degrees
 - parameter altitude: Home altitude in meters
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setHomeEncoder:(double)latitude longitude:(double)longitude altitude:(double)altitude
NS_SWIFT_NAME(setHomeEncoder(latitude:longitude:altitude:));

/**
 Reset home position. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))resetHomeEncoder
NS_SWIFT_NAME(resetHomeEncoder());

/**
 Set controller gps location.
The user location might be used in case of return home, according to the home type and the accuracy of the given position. You can get the current home type with the event [HomeType](#1-24-4). 

 - parameter latitude: GPS latitude in decimal degrees
 - parameter longitude: GPS longitude in decimal degrees
 - parameter altitude: GPS altitude in meters
 - parameter horizontalAccuracy: Horizontal Accuracy in meter ; equal -1 if no horizontal Accuracy
 - parameter verticalAccuracy: Vertical Accuracy in meter ; equal -1 if no vertical Accuracy
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))sendControllerGPSEncoder:(double)latitude longitude:(double)longitude altitude:(double)altitude horizontalaccuracy:(double)horizontalaccuracy verticalaccuracy:(double)verticalaccuracy
NS_SWIFT_NAME(sendControllerGPSEncoder(latitude:longitude:altitude:horizontalaccuracy:verticalaccuracy:));

/**
 Set the preferred home type.
Please note that this is only a preference. The actual type chosen is given by the event [HomeType](#1-31-2).
You can get the currently available types with the event [HomeTypeAvailability](#1-31-1). 

 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))homeTypeEncoder:(ArsdkFeatureArdrone3GpssettingsHometypeType)type
NS_SWIFT_NAME(homeTypeEncoder(type:));

/**
 Set the delay after which the drone will automatically try to return home after a disconnection. 

 - parameter delay: Delay in second
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))returnHomeDelayEncoder:(NSUInteger)delay
NS_SWIFT_NAME(returnHomeDelayEncoder(delay:));

/**
 Set the return home minimum altitude. If the drone is below this altitude when starting its return home, it will first reach the minimum altitude. If it is higher than this minimum altitude, it will operate its return home at its actual altitude. 

 - parameter value: Altitude in meters, relative to the take off point.
Bounds are given by the event [ReturnHomeMinAltitude](#1-24-7).
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))returnHomeMinAltitudeEncoder:(float)value
NS_SWIFT_NAME(returnHomeMinAltitudeEncoder(value:));

@end

