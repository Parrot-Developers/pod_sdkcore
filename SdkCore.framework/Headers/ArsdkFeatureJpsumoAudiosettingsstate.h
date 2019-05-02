/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureJpsumoAudiosettingsstateUid;

struct arsdk_cmd;

/** The audio theme to set. */
typedef NS_ENUM(NSInteger, ArsdkFeatureJpsumoAudiosettingsstateThemechangedTheme) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureJpsumoAudiosettingsstateThemechangedThemeSdkCoreUnknown = -1,

    /** Default audio theme (depends on the product color) */
    ArsdkFeatureJpsumoAudiosettingsstateThemechangedThemeDefault = 0,

    /** Robot audio theme. */
    ArsdkFeatureJpsumoAudiosettingsstateThemechangedThemeRobot = 1,

    /** Insect audio theme. */
    ArsdkFeatureJpsumoAudiosettingsstateThemechangedThemeInsect = 2,

    /** Monster audio theme. */
    ArsdkFeatureJpsumoAudiosettingsstateThemechangedThemeMonster = 3,

};
#define ArsdkFeatureJpsumoAudiosettingsstateThemechangedThemeCnt 4

@protocol ArsdkFeatureJpsumoAudiosettingsstateCallback<NSObject>

@optional

/**
 Master volume control. 

 - parameter volume: Master audio volume [0:100].
*/
- (void)onMasterVolumeChanged:(NSUInteger)volume
NS_SWIFT_NAME(onMasterVolumeChanged(volume:));

/**
 Command to notify controller of new Audio Theme. 

 - parameter theme: 
*/
- (void)onThemeChanged:(ArsdkFeatureJpsumoAudiosettingsstateThemechangedTheme)theme
NS_SWIFT_NAME(onThemeChanged(theme:));


@end

@interface ArsdkFeatureJpsumoAudiosettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureJpsumoAudiosettingsstateCallback>)callback;

@end

