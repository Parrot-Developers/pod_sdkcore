/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlCalibrationUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlCalibration : NSObject

/**
 Asks the SkyController to send (or not) the magneto calibration quality updates.
The [MagnetoCalibrationState](#4-23-0) event will always be sent when the status parameters changes, regardless of this setting. 

 - parameter enable: Flag to enable the feature:
1 = Enable quality updates
0 = Disable quality updates
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))enableMagnetoCalibrationQualityUpdatesEncoder:(NSUInteger)enable
NS_SWIFT_NAME(enableMagnetoCalibrationQualityUpdatesEncoder(enable:));

/**
 Asks the SkyController to start a magneto calibration.
If the calibration is already started, this command has no effect. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))startCalibrationEncoder
NS_SWIFT_NAME(startCalibrationEncoder());

/**
 Asks the SkyController to abort an in-progress magneto calibration.
If no calibration is in progress, this command has no effect. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))abortCalibrationEncoder
NS_SWIFT_NAME(abortCalibrationEncoder());

@end

