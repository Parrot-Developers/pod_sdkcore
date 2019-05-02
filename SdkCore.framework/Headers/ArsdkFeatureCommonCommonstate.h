/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonCommonstateUid;

struct arsdk_cmd;

/** Sensor name */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensorname) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameSdkCoreUnknown = -1,

    /** Inertial Measurement Unit sensor */
    ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameImu = 0,

    /** Barometer sensor */
    ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameBarometer = 1,

    /** Ultrasonic sensor */
    ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameUltrasound = 2,

    /** GPS sensor */
    ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameGps = 3,

    /** Magnetometer sensor */
    ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameMagnetometer = 4,

    /** Vertical Camera sensor */
    ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameVerticalCamera = 5,

};
#define ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensornameCnt 6

/** The Model of the product. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonCommonstateProductmodelModel) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonCommonstateProductmodelModelSdkCoreUnknown = -1,

    /** Travis (RS taxi) model. */
    ArsdkFeatureCommonCommonstateProductmodelModelRsTravis = 0,

    /** Mars (RS space) model */
    ArsdkFeatureCommonCommonstateProductmodelModelRsMars = 1,

    /** SWAT (RS SWAT) model */
    ArsdkFeatureCommonCommonstateProductmodelModelRsSwat = 2,

    /** Mc Lane (RS police) model */
    ArsdkFeatureCommonCommonstateProductmodelModelRsMclane = 3,

    /** Blaze (RS fire) model */
    ArsdkFeatureCommonCommonstateProductmodelModelRsBlaze = 4,

    /** Orak (RS carbon hydrofoil) model */
    ArsdkFeatureCommonCommonstateProductmodelModelRsOrak = 5,

    /** New Z (RS wooden hydrofoil) model */
    ArsdkFeatureCommonCommonstateProductmodelModelRsNewz = 6,

    /** Marshall (JS fire) model */
    ArsdkFeatureCommonCommonstateProductmodelModelJsMarshall = 7,

    /** Diesel (JS SWAT) model */
    ArsdkFeatureCommonCommonstateProductmodelModelJsDiesel = 8,

    /** Buzz (JS space) model */
    ArsdkFeatureCommonCommonstateProductmodelModelJsBuzz = 9,

    /** Max (JS F1) model */
    ArsdkFeatureCommonCommonstateProductmodelModelJsMax = 10,

    /** Jett (JS flames) model */
    ArsdkFeatureCommonCommonstateProductmodelModelJsJett = 11,

    /** Tuk-Tuk (JS taxi) model */
    ArsdkFeatureCommonCommonstateProductmodelModelJsTuktuk = 12,

    /** Swing black model */
    ArsdkFeatureCommonCommonstateProductmodelModelSwBlack = 13,

    /** Swing white model */
    ArsdkFeatureCommonCommonstateProductmodelModelSwWhite = 14,

};
#define ArsdkFeatureCommonCommonstateProductmodelModelCnt 15

@protocol ArsdkFeatureCommonCommonstateCallback<NSObject>

@optional

/**
 All states have been sent.

**Please note that you should not care about this event if you are using the libARController API as this library is handling the connection process for you.** 

*/
- (void)onAllStatesChanged
NS_SWIFT_NAME(onAllStatesChanged());

/**
 Battery state. 

 - parameter percent: Battery percentage
*/
- (void)onBatteryStateChanged:(NSUInteger)percent
NS_SWIFT_NAME(onBatteryStateChanged(percent:));

/**
 Mass storage state list. 

 - parameter mass_storage_id: Mass storage id (unique)
 - parameter name: Mass storage name
*/
- (void)onMassStorageStateListChanged:(NSUInteger)massStorageId name:(NSString*)name
NS_SWIFT_NAME(onMassStorageStateListChanged(massStorageId:name:));

/**
 Mass storage info state list. 

 - parameter mass_storage_id: Mass storage state id (unique)
 - parameter size: Mass storage size in MBytes
 - parameter used_size: Mass storage used size in MBytes
 - parameter plugged: Mass storage plugged (1 if mass storage is plugged, otherwise 0)
 - parameter full: Mass storage full information state (1 if mass storage full, 0 otherwise).
 - parameter internal: Mass storage internal type state (1 if mass storage is internal, 0 otherwise)
*/
- (void)onMassStorageInfoStateListChanged:(NSUInteger)massStorageId size:(NSUInteger)size usedSize:(NSUInteger)usedSize plugged:(NSUInteger)plugged full:(NSUInteger)full internal:(NSUInteger)internal
NS_SWIFT_NAME(onMassStorageInfoStateListChanged(massStorageId:size:usedSize:plugged:full:internal:));

/**
 Date changed.
Corresponds to the latest date set on the drone.

**Please note that you should not care about this event if you are using the libARController API as this library is handling the connection process for you.** 

 - parameter date: Date with ISO-8601 format
*/
- (void)onCurrentDateChanged:(NSString*)date
NS_SWIFT_NAME(onCurrentDateChanged(date:));

/**
 Time changed.
Corresponds to the latest time set on the drone.

**Please note that you should not care about this event if you are using the libARController API as this library is handling the connection process for you.** 

 - parameter time: Time with ISO-8601 format
*/
- (void)onCurrentTimeChanged:(NSString*)time
NS_SWIFT_NAME(onCurrentTimeChanged(time:));

/**
 Mass storage remaining data list. 

 - parameter free_space: Mass storage free space in MBytes
 - parameter rec_time: Mass storage record time reamining in minute
 - parameter photo_remaining: Mass storage photo remaining
*/
- (void)onMassStorageInfoRemainingListChanged:(NSUInteger)freeSpace recTime:(NSUInteger)recTime photoRemaining:(NSUInteger)photoRemaining
NS_SWIFT_NAME(onMassStorageInfoRemainingListChanged(freeSpace:recTime:photoRemaining:));

/**
 Rssi (Wifi Signal between controller and product) changed. 

 - parameter rssi: RSSI of the signal between controller and the product (in dbm)
*/
- (void)onWifiSignalChanged:(NSInteger)rssi
NS_SWIFT_NAME(onWifiSignalChanged(rssi:));

/**
 Sensors state list. 

 - parameter sensorName: 
 - parameter sensorState: Sensor state (1 if the sensor is OK, 0 if the sensor is NOT OK)
*/
- (void)onSensorsStatesListChanged:(ArsdkFeatureCommonCommonstateSensorsstateslistchangedSensorname)sensorname sensorstate:(NSUInteger)sensorstate
NS_SWIFT_NAME(onSensorsStatesListChanged(sensorname:sensorstate:));

/**
 Product sub-model.
This can be used to customize the UI depending on the product. 

 - parameter model: 
*/
- (void)onProductModel:(ArsdkFeatureCommonCommonstateProductmodelModel)model
NS_SWIFT_NAME(onProductModel(model:));

/**
 List of countries known by the drone. 

 - parameter listFlags: List entry attribute Bitfield.
0x01: First: indicate it's the first element of the list.
0x02: Last: indicate it's the last element of the list.
0x04: Empty: indicate the list is empty (implies First/Last). All other arguments should be ignored.
 - parameter countryCodes: Following of country code with ISO 3166 format, separated by ";". Be careful of the command size allowed by the network used. If necessary, split the list in several commands.
*/
- (void)onCountryListKnown:(NSUInteger)listflags countrycodes:(NSString*)countrycodes
NS_SWIFT_NAME(onCountryListKnown(listflags:countrycodes:));

/**
 Mass storage content changed. 

 - parameter mass_storage_id: Mass storage id (unique)
 - parameter nbPhotos: Number of photos (does not include raw photos)
 - parameter nbVideos: Number of videos
 - parameter nbPuds: Number of puds
 - parameter nbCrashLogs: Number of crash logs
*/
- (void)onDeprecatedMassStorageContentChanged:(NSUInteger)massStorageId nbphotos:(NSUInteger)nbphotos nbvideos:(NSUInteger)nbvideos nbpuds:(NSUInteger)nbpuds nbcrashlogs:(NSUInteger)nbcrashlogs
NS_SWIFT_NAME(onDeprecatedMassStorageContentChanged(massStorageId:nbphotos:nbvideos:nbpuds:nbcrashlogs:));

/**
 Mass storage content. 

 - parameter mass_storage_id: Mass storage id (unique)
 - parameter nbPhotos: Number of photos (does not include raw photos)
 - parameter nbVideos: Number of videos
 - parameter nbPuds: Number of puds
 - parameter nbCrashLogs: Number of crash logs
 - parameter nbRawPhotos: Number of raw photos
*/
- (void)onMassStorageContent:(NSUInteger)massStorageId nbphotos:(NSUInteger)nbphotos nbvideos:(NSUInteger)nbvideos nbpuds:(NSUInteger)nbpuds nbcrashlogs:(NSUInteger)nbcrashlogs nbrawphotos:(NSUInteger)nbrawphotos
NS_SWIFT_NAME(onMassStorageContent(massStorageId:nbphotos:nbvideos:nbpuds:nbcrashlogs:nbrawphotos:));

/**
 Mass storage content for current run.
Only counts the files related to the current run (see [RunId](#0-30-0)) 

 - parameter mass_storage_id: Mass storage id (unique)
 - parameter nbPhotos: Number of photos (does not include raw photos)
 - parameter nbVideos: Number of videos
 - parameter nbRawPhotos: Number of raw photos
*/
- (void)onMassStorageContentForCurrentRun:(NSUInteger)massStorageId nbphotos:(NSUInteger)nbphotos nbvideos:(NSUInteger)nbvideos nbrawphotos:(NSUInteger)nbrawphotos
NS_SWIFT_NAME(onMassStorageContentForCurrentRun(massStorageId:nbphotos:nbvideos:nbrawphotos:));

/**
 Current or last video recording timestamp.
Timestamp in milliseconds since 00:00:00 UTC on 1 January 1970.
**Please note that values don't persist after drone reboot** 

 - parameter startTimestamp: Timestamp in milliseconds since 00:00:00 UTC on 1 January 1970.
 - parameter stopTimestamp: Timestamp in milliseconds since 00:00:00 UTC on 1 January 1970. 0 mean that video is still recording.
*/
- (void)onVideoRecordingTimestamp:(uint64_t)starttimestamp stoptimestamp:(uint64_t)stoptimestamp
NS_SWIFT_NAME(onVideoRecordingTimestamp(starttimestamp:stoptimestamp:));

/**
 Both date and time changed.
Corresponds to the latest datetime set on the drone.

**Please note that you should not care about this event if you are using the libARController API as this library is handling the connection process for you.** 

 - parameter datetime: Datetime with the ISO-8601 complete short format: "%Y%m%dT%H%M%S%z"
*/
- (void)onCurrentDateTimeChanged:(NSString*)datetime
NS_SWIFT_NAME(onCurrentDateTimeChanged(datetime:));

/**
 Link signal quality. Gives a overal indication of the radio link quality 

 - parameter value: Bits 0-3: indicate the Link signal quality. The quality varies from 1 to 5. 1 means that a disconnection is highly probable,
5 means that the link signal quality is very good.
Bit 6: 1 when there is a probable 4G interference coming from the smartphone. Zero otherwise.
Bit 7: 1 when the link signal quality is low although the radio RSSI is good. This indicate that the radio link is
perturbed by external elements. Zero otherwise.
*/
- (void)onLinkSignalQuality:(NSUInteger)value
NS_SWIFT_NAME(onLinkSignalQuality(value:));

/**
 Current Drone Boot id.
A Boot Id identifies a drone session and do not change between drone power on and power off.
Also, each medias contains the Boot Id. 

 - parameter bootId: Id of the boot
*/
- (void)onBootId:(NSString*)bootid
NS_SWIFT_NAME(onBootId(bootid:));


@end

@interface ArsdkFeatureCommonCommonstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonCommonstateCallback>)callback;

@end

