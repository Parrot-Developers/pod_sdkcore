/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3AntiflickeringUid;

struct arsdk_cmd;

/** Type of the electric frequency */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3AntiflickeringElectricfrequencyFrequency) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3AntiflickeringElectricfrequencyFrequencySdkCoreUnknown = -1,

    /** Electric frequency of the country is 50hz */
    ArsdkFeatureArdrone3AntiflickeringElectricfrequencyFrequencyFiftyhertz = 0,

    /** Electric frequency of the country is 60hz */
    ArsdkFeatureArdrone3AntiflickeringElectricfrequencyFrequencySixtyhertz = 1,

};
#define ArsdkFeatureArdrone3AntiflickeringElectricfrequencyFrequencyCnt 2

/** Mode of the anti flickering functionnality */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3AntiflickeringSetmodeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3AntiflickeringSetmodeModeSdkCoreUnknown = -1,

    /** Anti flickering based on the electric frequency previously sent */
    ArsdkFeatureArdrone3AntiflickeringSetmodeModeAuto = 0,

    /** Anti flickering based on a fixed frequency of 50Hz */
    ArsdkFeatureArdrone3AntiflickeringSetmodeModeFixedfiftyhertz = 1,

    /** Anti flickering based on a fixed frequency of 60Hz */
    ArsdkFeatureArdrone3AntiflickeringSetmodeModeFixedsixtyhertz = 2,

};
#define ArsdkFeatureArdrone3AntiflickeringSetmodeModeCnt 3

@interface ArsdkFeatureArdrone3Antiflickering : NSObject

/**
 Set the electric frequency of the surrounding lights.
This is used to avoid the video flickering in auto mode. You can get the current antiflickering mode with the event [AntiflickeringModeChanged](#1-30-1). 

 - parameter frequency: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))electricFrequencyEncoder:(ArsdkFeatureArdrone3AntiflickeringElectricfrequencyFrequency)frequency
NS_SWIFT_NAME(electricFrequencyEncoder(frequency:));

/**
 Set the antiflickering mode.
If auto, the drone will detect when flickers appears on the video and trigger the antiflickering.
In this case, this electric frequency it will use will be the one specified in the event [ElectricFrequency](#1-29-0).
Forcing the antiflickering (FixedFiftyHertz or FixedFiftyHertz) can reduce luminosity of the video. 

 - parameter mode: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setModeEncoder:(ArsdkFeatureArdrone3AntiflickeringSetmodeMode)mode
NS_SWIFT_NAME(setModeEncoder(mode:));

@end

