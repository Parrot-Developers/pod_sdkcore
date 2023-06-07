/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMotorsUid;

struct arsdk_cmd;

/** Motor identifier */
typedef NS_ENUM(NSInteger, ArsdkFeatureMotorsMotorId) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMotorsMotorIdSdkCoreUnknown = -1,

    /** No identifier given. */
    ArsdkFeatureMotorsMotorIdNone = 0,

    /** Front left motor. */
    ArsdkFeatureMotorsMotorIdFrontLeft = 1,

    /** Front right motor. */
    ArsdkFeatureMotorsMotorIdFrontRight = 2,

    /** Back right motor. */
    ArsdkFeatureMotorsMotorIdBackRight = 3,

    /** Back left motor. */
    ArsdkFeatureMotorsMotorIdBackLeft = 4,

};
#define ArsdkFeatureMotorsMotorIdCnt 5

/** Motor error reason for three motors flight. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMotorsThreeMotorsReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMotorsThreeMotorsReasonSdkCoreUnknown = -1,

    /** Unkown reason. */
    ArsdkFeatureMotorsThreeMotorsReasonUnknown = 0,

    /** ESC error : Motor Stalled. */
    ArsdkFeatureMotorsThreeMotorsReasonMotorStalled = 1,

    /** ESC error : Propeller Security. */
    ArsdkFeatureMotorsThreeMotorsReasonPropellerSecurity = 2,

    /** ESC error : Emergency Stop. */
    ArsdkFeatureMotorsThreeMotorsReasonRcEmergencyStop = 3,

    /** Defective propeller detected. */
    ArsdkFeatureMotorsThreeMotorsReasonDefectiveProp = 4,

};
#define ArsdkFeatureMotorsThreeMotorsReasonCnt 5

@protocol ArsdkFeatureMotorsCallback<NSObject>

@optional

/**
  

 - parameter id: ID of the defective motor responsible for three motors flight.
 - parameter reason: Motor error reason for three motors flight.
*/
- (void)onThreeMotorsFlightStarted:(ArsdkFeatureMotorsMotorId)id reason:(ArsdkFeatureMotorsThreeMotorsReason)reason
NS_SWIFT_NAME(onThreeMotorsFlightStarted(id:reason:));

/**
  

*/
- (void)onThreeMotorsFlightEnded
NS_SWIFT_NAME(onThreeMotorsFlightEnded());


@end

@interface ArsdkFeatureMotors : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureMotorsCallback>)callback;

@end

