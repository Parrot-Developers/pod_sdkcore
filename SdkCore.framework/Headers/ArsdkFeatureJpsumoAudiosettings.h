/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoAudiosettingsUid;

struct arsdk_cmd;

/** The audio theme to set. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoAudiosettingsThemeTheme) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoAudiosettingsThemeThemeSdkCoreUnknown = -1,

    /** Default audio theme (depends on the product color) */
    ArsdkFeatureJpsumoAudiosettingsThemeThemeDefault = 0,

    /** Robot audio theme. */
    ArsdkFeatureJpsumoAudiosettingsThemeThemeRobot = 1,

    /** Insect audio theme. */
    ArsdkFeatureJpsumoAudiosettingsThemeThemeInsect = 2,

    /** Monster audio theme. */
    ArsdkFeatureJpsumoAudiosettingsThemeThemeMonster = 3,

};
#define ArsdkFeatureJpsumoAudiosettingsThemeThemeCnt 4

@interface ArsdkFeatureJpsumoAudiosettings : NSObject

/**
 Master volume control. 

 - parameter volume: Master audio volume [0:100].
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))masterVolumeEncoder:(NSUInteger)volume
NS_SWIFT_NAME(masterVolumeEncoder(volume:));

/**
 Audio Theme. 

 - parameter theme: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))themeEncoder:(ArsdkFeatureJpsumoAudiosettingsThemeTheme)theme
NS_SWIFT_NAME(themeEncoder(theme:));

@end

