/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureAlarmsUid;

struct arsdk_cmd;

/** Alarm type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAlarmsType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAlarmsTypeSdkCoreUnknown = -1,

    /** User emergency alert. */
    ArsdkFeatureAlarmsTypeUserEmergency = 0,

    /** Motor Cut out alert. */
    ArsdkFeatureAlarmsTypeMotorCutout = 1,

    /** The angle of the drone is too high. */
    ArsdkFeatureAlarmsTypeDroneInclinationTooHigh = 2,

    /** Magnetometer is disturbed by a magnetic element. */
    ArsdkFeatureAlarmsTypeMagnetoPerturbation = 3,

    /** Local terrestrial magnetic field is too weak. */
    ArsdkFeatureAlarmsTypeMagnetoLowEarthField = 4,

    /** Geofence horizontal reached alert. */
    ArsdkFeatureAlarmsTypeHorizontalGeofenceReached = 5,

    /** Geofence vertical reached alert. */
    ArsdkFeatureAlarmsTypeVerticalGeofenceReached = 6,

    /** freefall detected. */
    ArsdkFeatureAlarmsTypeFreefallDetected = 7,

    /** Stereo camera is decalibrated. */
    ArsdkFeatureAlarmsTypeFstcamDecalibrated = 8,

    /** DRI is not functional. */
    ArsdkFeatureAlarmsTypeDriFailing = 9,

};
#define ArsdkFeatureAlarmsTypeCnt 10

/** takeoff readiness checks. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAlarmsTakeoffChecklistType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAlarmsTakeoffChecklistTypeSdkCoreUnknown = -1,

    /** Firmware update is ongoing. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeUpdateOngoing = 0,

    /** Gyro health check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeGyro = 1,

    /** Magneto health check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeMagneto = 2,

    /** Barometer health check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBaro = 3,

    /** GPS check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeGps = 4,

    /** Ultrasound check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeUltrasound = 5,

    /** VCAM check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeVcam = 6,

    /** Vertical TOF check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeVerticalTof = 7,

    /** Cellular modem flashing check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeCellularFlashing = 8,

    /** Drone inclination check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeDroneInclinationTooHigh = 9,

    /** Battery level check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBatteryCritical = 10,

    /** Battery identification check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBatteryIdentification = 11,

    /** Battery USB connection check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBatteryIsConnected = 12,

    /** Battery temperature check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBatteryIsTooHot = 13,

    /** Battery temperature check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBatteryIsTooCold = 14,

    /** Battery update needed check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBatteryOldFw = 15,

    /** Magneto calibration check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeMagnetoCalibration = 16,

    /** Battery lost comm. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeBatteryLostComm = 17,

    /** Drone Remote Identification check. */
    ArsdkFeatureAlarmsTakeoffChecklistTypeDri = 18,

};
#define ArsdkFeatureAlarmsTakeoffChecklistTypeCnt 19

/** Alarm state. */
typedef NS_ENUM(NSInteger, ArsdkFeatureAlarmsState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureAlarmsStateSdkCoreUnknown = -1,

    /** Alarm is off. */
    ArsdkFeatureAlarmsStateOff = 0,

    /** Alarm is on. */
    ArsdkFeatureAlarmsStateOn = 1,

};
#define ArsdkFeatureAlarmsStateCnt 2

@protocol ArsdkFeatureAlarmsCallback<NSObject>

@optional

/**
 List of alarms raised. 

 - parameter type: Alarm type.
 - parameter state: Alarm state.
 - parameter list_flags: 
*/
- (void)onAlarms:(ArsdkFeatureAlarmsType)type state:(ArsdkFeatureAlarmsState)state listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onAlarms(type:state:listFlagsBitField:));

/**
 List of checks for takeoff_ready. 

 - parameter check: Takeoff ready check type.
 - parameter state: State of check, "on" means there is an event that prevents takeoff.
 - parameter list_flags: 
*/
- (void)onTakeoffChecklist:(ArsdkFeatureAlarmsTakeoffChecklistType)check state:(ArsdkFeatureAlarmsState)state listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onTakeoffChecklist(check:state:listFlagsBitField:));


@end

@interface ArsdkFeatureAlarms : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureAlarmsCallback>)callback;

@end

