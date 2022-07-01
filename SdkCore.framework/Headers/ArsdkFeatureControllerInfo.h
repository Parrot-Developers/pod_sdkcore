/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureControllerInfoUid;

struct arsdk_cmd;

/** Source of data. */
typedef NS_ENUM(NSInteger, ArsdkFeatureControllerInfoSource) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureControllerInfoSourceSdkCoreUnknown = -1,

    /** Gps data are coming from main gps device. */
    ArsdkFeatureControllerInfoSourceMain = 0,

    /** Gps data are coming from an auxiliary gps device */
    ArsdkFeatureControllerInfoSourceAuxiliary = 1,

};
#define ArsdkFeatureControllerInfoSourceCnt 2

/** Command supported by drone. */
typedef NS_ENUM(NSInteger, ArsdkFeatureControllerInfoSupportedCommand) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureControllerInfoSupportedCommandSdkCoreUnknown = -1,

    /** Gps command is supported. */
    ArsdkFeatureControllerInfoSupportedCommandGps = 0,

    /** Gps v2 command is supported. */
    ArsdkFeatureControllerInfoSupportedCommandGpsV2 = 1,

};
#define ArsdkFeatureControllerInfoSupportedCommandCnt 2

@interface ArsdkFeatureControllerInfoSupportedCommandBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureControllerInfoSupportedCommand)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^)(ArsdkFeatureControllerInfoSupportedCommand val))cb;

@end

/** Available data. */
typedef NS_ENUM(NSInteger, ArsdkFeatureControllerInfoAvailableData) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureControllerInfoAvailableDataSdkCoreUnknown = -1,

    /** Altitude (in meters above the mean sea level) is available. */
    ArsdkFeatureControllerInfoAvailableDataAmslAltitude = 0,

    /** Altitude above the WGS 84 ellipsoid is available. */
    ArsdkFeatureControllerInfoAvailableDataWgs84Altitude = 1,

    /** Altitude accuracy is available. */
    ArsdkFeatureControllerInfoAvailableDataAltitudeAccuracy = 2,

    /** North velocity is available. */
    ArsdkFeatureControllerInfoAvailableDataNorthVelocity = 3,

    /** East velocity is available. */
    ArsdkFeatureControllerInfoAvailableDataEastVelocity = 4,

    /** Up velocity is available. */
    ArsdkFeatureControllerInfoAvailableDataUpVelocity = 5,

    /** Velocity accuracy is available. */
    ArsdkFeatureControllerInfoAvailableDataVelocityAccuracy = 6,

    /** Number of satellites is available. */
    ArsdkFeatureControllerInfoAvailableDataNumberOfSatellites = 7,

};
#define ArsdkFeatureControllerInfoAvailableDataCnt 8

@interface ArsdkFeatureControllerInfoAvailableDataBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureControllerInfoAvailableData)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^)(ArsdkFeatureControllerInfoAvailableData val))cb;

@end

@protocol ArsdkFeatureControllerInfoCallback<NSObject>

@optional

/**
  

 - parameter is_valid: Boolean. Whether the gps is valid (1) or not (0), as seen by the drone
*/
- (void)onValidityFromDrone:(NSUInteger)isValid
NS_SWIFT_NAME(onValidityFromDrone(isValid:));

/**
  

 - parameter supported_command: Commands supported by the drone
*/
- (void)onCapabilities:(NSUInteger)supportedCommandBitField
NS_SWIFT_NAME(onCapabilities(supportedCommandBitField:));


@end

@interface ArsdkFeatureControllerInfo : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureControllerInfoCallback>)callback;

/**
 Controller gps info.
This command is not acknowledged by the drone. 

 - parameter latitude: Latitude of the controller (in deg)
 - parameter longitude: Longitude of the controller (in deg)
 - parameter altitude: Altitude of the controller (in meters, according to sea level)
 - parameter horizontal_accuracy: Horizontal accuracy (in meter)
 - parameter vertical_accuracy: Vertical accuracy (in meter)
 - parameter north_speed: North speed (in meter per second)
 - parameter east_speed: East speed (in meter per second)
 - parameter down_speed: Vertical speed (in meter per second) (down is positive)
 - parameter timestamp: Timestamp of the gps info (in milliseconds), from a monotonic clock (not necessarily linked to utc
clock)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))gpsEncoder:(double)latitude longitude:(double)longitude altitude:(float)altitude horizontalAccuracy:(float)horizontalAccuracy verticalAccuracy:(float)verticalAccuracy northSpeed:(float)northSpeed eastSpeed:(float)eastSpeed downSpeed:(float)downSpeed timestamp:(double)timestamp
NS_SWIFT_NAME(gpsEncoder(latitude:longitude:altitude:horizontalAccuracy:verticalAccuracy:northSpeed:eastSpeed:downSpeed:timestamp:));

/**
  

 - parameter pressure: Atmospheric pressure in Pa
 - parameter timestamp: Timestamp of the barometer info (in milliseconds), from a monotonic clock (not necessarily linked to utc
clock)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))barometerEncoder:(float)pressure timestamp:(double)timestamp
NS_SWIFT_NAME(barometerEncoder(pressure:timestamp:));

/**
 Gps available data. 

 - parameter source: Gps data source
 - parameter available_data: Available data.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))gpsV2AvailableDataEncoder:(ArsdkFeatureControllerInfoSource)source availableDataBitField:(NSUInteger)availableDataBitField
NS_SWIFT_NAME(gpsV2AvailableDataEncoder(source:availableDataBitField:));

/**
 Controller gps info.
This command is not acknowledged by the drone. 

 - parameter source: Gps data source
 - parameter latitude: Latitude (in deg)
 - parameter longitude: Longitude (in deg)
 - parameter amsl_altitude: Altitude (in meters above the mean sea level)
 - parameter wgs84_altitude: Altitude (in meters above the WGS 84 ellipsoid)
 - parameter latitude_accuracy: Latitude accuracy (in meter)
 - parameter longitude_accuracy: Longitude accuracy (in meter)
 - parameter altitude_accuracy: Altitude accuracy (in meter)
 - parameter north_velocity: North velocity (in meter per second)
 - parameter east_velocity: East velocity (in meter per second)
 - parameter up_velocity: Vertical velocity (in meter per second) (positive when moving up)
 - parameter velocity_accuracy: Velocity accuracy (in meter per second)
 - parameter number_of_satellites: The number of satellites
 - parameter timestamp: Timestamp of the gps info (in milliseconds), from a monotonic clock (not necessarily linked to utc
clock)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))gpsV2Encoder:(ArsdkFeatureControllerInfoSource)source latitude:(double)latitude longitude:(double)longitude amslAltitude:(float)amslAltitude wgs84Altitude:(float)wgs84Altitude latitudeAccuracy:(float)latitudeAccuracy longitudeAccuracy:(float)longitudeAccuracy altitudeAccuracy:(float)altitudeAccuracy northVelocity:(float)northVelocity eastVelocity:(float)eastVelocity upVelocity:(float)upVelocity velocityAccuracy:(float)velocityAccuracy numberOfSatellites:(NSUInteger)numberOfSatellites timestamp:(uint64_t)timestamp
NS_SWIFT_NAME(gpsV2Encoder(source:latitude:longitude:amslAltitude:wgs84Altitude:latitudeAccuracy:longitudeAccuracy:altitudeAccuracy:northVelocity:eastVelocity:upVelocity:velocityAccuracy:numberOfSatellites:timestamp:));

@end

