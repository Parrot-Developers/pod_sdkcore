/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonCalibrationUid;

struct arsdk_cmd;

@interface ArsdkFeatureCommonCalibration : NSObject

/**
 Start or abort magnetometer calibration process.
 

 - parameter calibrate: 1 if the calibration should be started, 0 if it should be aborted
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))magnetoCalibrationEncoder:(NSUInteger)calibrate
NS_SWIFT_NAME(magnetoCalibrationEncoder(calibrate:));

/**
 Start or abort Pitot tube calibration process.
 

 - parameter calibrate: 1 if the calibration should be started, 0 if it should be aborted
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))pitotCalibrationEncoder:(NSUInteger)calibrate
NS_SWIFT_NAME(pitotCalibrationEncoder(calibrate:));

@end

