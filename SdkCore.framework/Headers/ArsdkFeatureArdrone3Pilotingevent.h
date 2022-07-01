/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3PilotingeventUid;

struct arsdk_cmd;

/** Error to explain the event */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3PilotingeventMovebyendError) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3PilotingeventMovebyendErrorSdkCoreUnknown = -1,

    /** No Error ; The relative displacement */
    ArsdkFeatureArdrone3PilotingeventMovebyendErrorOk = 0,

    /** Unknown generic error */
    ArsdkFeatureArdrone3PilotingeventMovebyendErrorUnknown = 1,

    /** The Device is busy ; command moveBy ignored */
    ArsdkFeatureArdrone3PilotingeventMovebyendErrorBusy = 2,

    /** Command moveBy is not available ; command moveBy ignored */
    ArsdkFeatureArdrone3PilotingeventMovebyendErrorNotavailable = 3,

    /** Command moveBy interrupted */
    ArsdkFeatureArdrone3PilotingeventMovebyendErrorInterrupted = 4,

};
#define ArsdkFeatureArdrone3PilotingeventMovebyendErrorCnt 5

@protocol ArsdkFeatureArdrone3PilotingeventCallback<NSObject>

@optional

/**
 Relative move ended.
Informs about the move that the drone managed to do and why it stopped. 

 - parameter dX: Distance traveled along the front axis [m]
 - parameter dY: Distance traveled along the right axis [m]
 - parameter dZ: Distance traveled along the down axis [m]
 - parameter dPsi: Applied angle on heading [rad]
 - parameter error: 
*/
- (void)onMoveByEnd:(float)dx dy:(float)dy dz:(float)dz dpsi:(float)dpsi error:(ArsdkFeatureArdrone3PilotingeventMovebyendError)error
NS_SWIFT_NAME(onMoveByEnd(dx:dy:dz:dpsi:error:));

/**
 Sent when the drone is ready to be thrown during a user takeoff. 

*/
- (void)onUserTakeoffReady
NS_SWIFT_NAME(onUserTakeoffReady());


@end

@interface ArsdkFeatureArdrone3Pilotingevent : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureArdrone3PilotingeventCallback>)callback;

@end

