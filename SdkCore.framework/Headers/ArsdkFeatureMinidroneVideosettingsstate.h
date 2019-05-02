/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneVideosettingsstateUid;

struct arsdk_cmd;

/** Type of the electric frequency. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneVideosettingsstateElectricfrequencychangedFrequency) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneVideosettingsstateElectricfrequencychangedFrequencySdkCoreUnknown = -1,

    /** Electric frequency of the country is 50hz. */
    ArsdkFeatureMinidroneVideosettingsstateElectricfrequencychangedFrequencyFiftyHertz = 0,

    /** Electric frequency of the country is 60hz. */
    ArsdkFeatureMinidroneVideosettingsstateElectricfrequencychangedFrequencySixtyHertz = 1,

};
#define ArsdkFeatureMinidroneVideosettingsstateElectricfrequencychangedFrequencyCnt 2

/** Video resolution type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneVideosettingsstateVideoresolutionchangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneVideosettingsstateVideoresolutionchangedTypeSdkCoreUnknown = -1,

    /** 16/9 VGA streaming (640 x 360). */
    ArsdkFeatureMinidroneVideosettingsstateVideoresolutionchangedTypeVga = 0,

    /** HD streaming (1280 x 720). */
    ArsdkFeatureMinidroneVideosettingsstateVideoresolutionchangedTypeHd = 1,

    /** HQ streaming (864x480). */
    ArsdkFeatureMinidroneVideosettingsstateVideoresolutionchangedTypeHq = 2,

};
#define ArsdkFeatureMinidroneVideosettingsstateVideoresolutionchangedTypeCnt 3

@protocol ArsdkFeatureMinidroneVideosettingsstateCallback<NSObject>

@optional

/**
 Event informing about the video automatic recording status. 

 - parameter enabled: 0: disabled
1: enabled
*/
- (void)onAutorecordChanged:(NSUInteger)enabled
NS_SWIFT_NAME(onAutorecordChanged(enabled:));

/**
 Event informing about the electric frequency (Anti-flickering). 

 - parameter frequency: 
*/
- (void)onElectricFrequencyChanged:(ArsdkFeatureMinidroneVideosettingsstateElectricfrequencychangedFrequency)frequency
NS_SWIFT_NAME(onElectricFrequencyChanged(frequency:));

/**
 Event informing about the streaming resolution. 

 - parameter type: 
*/
- (void)onVideoResolutionChanged:(ArsdkFeatureMinidroneVideosettingsstateVideoresolutionchangedType)type
NS_SWIFT_NAME(onVideoResolutionChanged(type:));


@end

@interface ArsdkFeatureMinidroneVideosettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneVideosettingsstateCallback>)callback;

@end

