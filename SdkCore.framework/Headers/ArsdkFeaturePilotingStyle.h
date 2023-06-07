/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePilotingStyleUid;

struct arsdk_cmd;

/** Piloting style. */
typedef NS_ENUM(NSInteger, ArsdkFeaturePilotingStyleStyle) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePilotingStyleStyleSdkCoreUnknown = -1,

    /** Piloting style is standard */
    ArsdkFeaturePilotingStyleStyleStandard = 0,

    /** Piloting style is camera operated, commands are relative to camera pitch */
    ArsdkFeaturePilotingStyleStyleCameraOperated = 1,

};
#define ArsdkFeaturePilotingStyleStyleCnt 2

@interface ArsdkFeaturePilotingStyleStyleBitField : NSObject

+ (BOOL)isSet:(ArsdkFeaturePilotingStyleStyle)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeaturePilotingStyleStyle val))cb;

@end

@protocol ArsdkFeaturePilotingStyleCallback<NSObject>

@optional

/**
  

 - parameter style: Current Piloting style
*/
- (void)onStyle:(ArsdkFeaturePilotingStyleStyle)style
NS_SWIFT_NAME(onStyle(style:));

/**
  

 - parameter styles: Supported piloting styles.
*/
- (void)onCapabilities:(NSUInteger)stylesBitField
NS_SWIFT_NAME(onCapabilities(stylesBitField:));


@end

@interface ArsdkFeaturePilotingStyle : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeaturePilotingStyleCallback>)callback;

/**
 Configures piloting style. 

 - parameter style: Requested piloting style.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setStyleEncoder:(ArsdkFeaturePilotingStyleStyle)style
NS_SWIFT_NAME(setStyleEncoder(style:));

@end

