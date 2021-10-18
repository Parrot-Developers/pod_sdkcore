/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePoiUid;

struct arsdk_cmd;

/** Indicators needed to start a point of interest. */
typedef NS_ENUM(NSInteger, ArsdkFeaturePoiIndicator) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePoiIndicatorSdkCoreUnknown = -1,

    /** Drone gps is not fixed. */
    ArsdkFeaturePoiIndicatorDroneGps = 0,

    /** Drone magneto is not valid. */
    ArsdkFeaturePoiIndicatorDroneMagneto = 1,

    /** Drone is out of geofence. */
    ArsdkFeaturePoiIndicatorDroneGeofence = 2,

    /** Drone is under min altitude. */
    ArsdkFeaturePoiIndicatorDroneMinAltitude = 3,

    /** Drone is above max altitude. */
    ArsdkFeaturePoiIndicatorDroneMaxAltitude = 4,

    /** Drone is not flying. */
    ArsdkFeaturePoiIndicatorDroneFlying = 5,

    /** Target position has a bad accuracy.
Not applicable to POI. */
    ArsdkFeaturePoiIndicatorTargetPositionAccuracy = 6,

    /** Target image detection is not working.
Not applicable to POI. */
    ArsdkFeaturePoiIndicatorTargetImageDetection = 7,

    /** Drone is too close to target.
Not applicable to POI. */
    ArsdkFeaturePoiIndicatorDroneTargetDistanceMin = 8,

    /** Drone is too far from target.
Not applicable to POI. */
    ArsdkFeaturePoiIndicatorDroneTargetDistanceMax = 9,

    /** Target horizontal speed is too high.
Not applicable to POI. */
    ArsdkFeaturePoiIndicatorTargetHorizSpeed = 10,

    /** Target vertical speed is too high.
Not applicable to POI. */
    ArsdkFeaturePoiIndicatorTargetVertSpeed = 11,

    /** Target altitude has a bad accuracy.
Not applicable to POI. */
    ArsdkFeaturePoiIndicatorTargetAltitudeAccuracy = 12,

};
#define ArsdkFeaturePoiIndicatorCnt 13

@interface ArsdkFeaturePoiIndicatorBitField : NSObject

+ (BOOL) isSet:(ArsdkFeaturePoiIndicator)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeaturePoiIndicator val))cb;

@end

@protocol ArsdkFeaturePoiCallback<NSObject>

@optional

/**
 Describes the missing inputs which prevent from starting a point of interest. 

 - parameter missing_inputs: List of missing requirements to start a point of interest.
If at least one input is missing, drone won't be able to start a point of interest.
*/
- (void)onInfo:(NSUInteger)missingInputsBitField
NS_SWIFT_NAME(onInfo(missingInputsBitField:));


@end

@interface ArsdkFeaturePoi : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeaturePoiCallback>)callback;

@end

