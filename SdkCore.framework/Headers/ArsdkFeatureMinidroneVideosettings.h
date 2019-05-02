/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneVideosettingsUid;

struct arsdk_cmd;

/** Type of the electric frequency. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneVideosettingsElectricfrequencyFrequency) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneVideosettingsElectricfrequencyFrequencySdkCoreUnknown = -1,

    /** Electric frequency of the country is 50hz. */
    ArsdkFeatureMinidroneVideosettingsElectricfrequencyFrequencyFiftyHertz = 0,

    /** Electric frequency of the country is 60hz. */
    ArsdkFeatureMinidroneVideosettingsElectricfrequencyFrequencySixtyHertz = 1,

};
#define ArsdkFeatureMinidroneVideosettingsElectricfrequencyFrequencyCnt 2

/** Video resolution type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMinidroneVideosettingsVideoresolutionType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMinidroneVideosettingsVideoresolutionTypeSdkCoreUnknown = -1,

    /** 16/9 VGA streaming (640 x 360). */
    ArsdkFeatureMinidroneVideosettingsVideoresolutionTypeVga = 0,

    /** HD streaming (1280 x 720). */
    ArsdkFeatureMinidroneVideosettingsVideoresolutionTypeHd = 1,

    /** HQ streaming (864x480). */
    ArsdkFeatureMinidroneVideosettingsVideoresolutionTypeHq = 2,

};
#define ArsdkFeatureMinidroneVideosettingsVideoresolutionTypeCnt 3

@interface ArsdkFeatureMinidroneVideosettings : NSObject

/**
 Set video automatic recording state. 

 - parameter enable: 0: disabled
1: enabled
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))autorecordEncoder:(NSUInteger)enable
NS_SWIFT_NAME(autorecordEncoder(enable:));

/**
 Set the electric frequency (Anti-flickering). 

 - parameter frequency: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))electricFrequencyEncoder:(ArsdkFeatureMinidroneVideosettingsElectricfrequencyFrequency)frequency
NS_SWIFT_NAME(electricFrequencyEncoder(frequency:));

/**
 Set video streaming and recording resolution. 

 - parameter type: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))videoResolutionEncoder:(ArsdkFeatureMinidroneVideosettingsVideoresolutionType)type
NS_SWIFT_NAME(videoResolutionEncoder(type:));

@end

