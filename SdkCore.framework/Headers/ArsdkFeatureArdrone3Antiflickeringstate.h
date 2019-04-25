/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureArdrone3AntiflickeringstateUid;

struct arsdk_cmd;

/** Type of the electric frequency */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3AntiflickeringstateElectricfrequencychangedFrequency) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3AntiflickeringstateElectricfrequencychangedFrequencySdkCoreUnknown = -1,

    /** Electric frequency of the country is 50hz */
    ArsdkFeatureArdrone3AntiflickeringstateElectricfrequencychangedFrequencyFiftyhertz = 0,

    /** Electric frequency of the country is 60hz */
    ArsdkFeatureArdrone3AntiflickeringstateElectricfrequencychangedFrequencySixtyhertz = 1,

};
#define ArsdkFeatureArdrone3AntiflickeringstateElectricfrequencychangedFrequencyCnt 2

/** Mode of the anti flickering functionnality */
typedef NS_ENUM(NSInteger, ArsdkFeatureArdrone3AntiflickeringstateModechangedMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureArdrone3AntiflickeringstateModechangedModeSdkCoreUnknown = -1,

    /** Anti flickering based on the electric frequency previously sent */
    ArsdkFeatureArdrone3AntiflickeringstateModechangedModeAuto = 0,

    /** Anti flickering based on a fixed frequency of 50Hz */
    ArsdkFeatureArdrone3AntiflickeringstateModechangedModeFixedfiftyhertz = 1,

    /** Anti flickering based on a fixed frequency of 60Hz */
    ArsdkFeatureArdrone3AntiflickeringstateModechangedModeFixedsixtyhertz = 2,

};
#define ArsdkFeatureArdrone3AntiflickeringstateModechangedModeCnt 3

@protocol ArsdkFeatureArdrone3AntiflickeringstateCallback<NSObject>

@optional

/**
 Electric frequency.
This piece of information is used for the antiflickering when the [AntiflickeringMode](#1-30-1) is set to *auto*. 

 - parameter frequency: 
*/
- (void)onElectricFrequencyChanged:(ArsdkFeatureArdrone3AntiflickeringstateElectricfrequencychangedFrequency)frequency
NS_SWIFT_NAME(onElectricFrequencyChanged(frequency:));

/**
 Antiflickering mode. 

 - parameter mode: 
*/
- (void)onModeChanged:(ArsdkFeatureArdrone3AntiflickeringstateModechangedMode)mode
NS_SWIFT_NAME(onModeChanged(mode:));


@end

@interface ArsdkFeatureArdrone3Antiflickeringstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureArdrone3AntiflickeringstateCallback>)callback;

@end

