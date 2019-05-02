/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3GpsstateUid;

struct arsdk_cmd;

/** The type of the return home */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedTypeSdkCoreUnknown = -1,

    /** The drone has enough information to return to the take off position */
    ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedTypeTakeoff = 0,

    /** The drone has enough information to return to the pilot position */
    ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedTypePilot = 1,

    /** The drone has not enough information, it will return to the first GPS fix */
    ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedTypeFirstFix = 2,

    /** The drone has enough information to return to the target of the current (or last) follow me */
    ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedTypeFollowee = 3,

};
#define ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedTypeCnt 4

/** The type of the return home chosen */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3GpsstateHometypechosenchangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3GpsstateHometypechosenchangedTypeSdkCoreUnknown = -1,

    /** The drone will return to the take off position */
    ArsdkFeatureArdrone3GpsstateHometypechosenchangedTypeTakeoff = 0,

    /** The drone will return to the pilot position
In this case, the drone will use the position given by ARDrone3-SendControllerGPS */
    ArsdkFeatureArdrone3GpsstateHometypechosenchangedTypePilot = 1,

    /** The drone has not enough information, it will return to the first GPS fix */
    ArsdkFeatureArdrone3GpsstateHometypechosenchangedTypeFirstFix = 2,

    /** The drone will return to the target of the current (or last) follow me
In this case, the drone will use the position of the target of the followMe (given by ControllerInfo-GPS) */
    ArsdkFeatureArdrone3GpsstateHometypechosenchangedTypeFollowee = 3,

};
#define ArsdkFeatureArdrone3GpsstateHometypechosenchangedTypeCnt 4

@protocol ArsdkFeatureArdrone3GpsstateCallback<NSObject>

@optional

/**
 Number of GPS satellites. 

 - parameter numberOfSatellite: The number of satellite
*/
- (void)onNumberOfSatelliteChanged:(NSUInteger)numberofsatellite
NS_SWIFT_NAME(onNumberOfSatelliteChanged(numberofsatellite:));

/**
 Home type availability. 

 - parameter type: 
 - parameter available: 1 if this type is available, 0 otherwise
*/
- (void)onHomeTypeAvailabilityChanged:(ArsdkFeatureArdrone3GpsstateHometypeavailabilitychangedType)type available:(NSUInteger)available
NS_SWIFT_NAME(onHomeTypeAvailabilityChanged(type:available:));

/**
 Home type.
This choice is made by the drone, according to the [PreferredHomeType](#1-24-4) and the [HomeTypeAvailability](#1-31-1). The drone will choose the type matching with the user preference only if this type is available. If not, it will chose a type in this order:
FOLLOWEE ; TAKEOFF ; PILOT ; FIRST_FIX 

 - parameter type: 
*/
- (void)onHomeTypeChosenChanged:(ArsdkFeatureArdrone3GpsstateHometypechosenchangedType)type
NS_SWIFT_NAME(onHomeTypeChosenChanged(type:));


@end

@interface ArsdkFeatureArdrone3Gpsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3GpsstateCallback>)callback;

@end

