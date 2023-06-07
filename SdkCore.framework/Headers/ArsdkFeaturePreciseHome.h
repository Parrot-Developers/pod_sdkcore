/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeaturePreciseHomeUid;

struct arsdk_cmd;

/** Precise home mode. */
typedef NS_ENUM(NSInteger, ArsdkFeaturePreciseHomeMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePreciseHomeModeSdkCoreUnknown = -1,

    /** Precise home is disabled. */
    ArsdkFeaturePreciseHomeModeDisabled = 0,

    /** Precise home is enabled, in standard mode. */
    ArsdkFeaturePreciseHomeModeStandard = 1,

};
#define ArsdkFeaturePreciseHomeModeCnt 2

@interface ArsdkFeaturePreciseHomeModeBitField : NSObject

+ (BOOL)isSet:(ArsdkFeaturePreciseHomeMode)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeaturePreciseHomeMode val))cb;

@end

/** Precise home feature state. */
typedef NS_ENUM(NSInteger, ArsdkFeaturePreciseHomeState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeaturePreciseHomeStateSdkCoreUnknown = -1,

    /** It is currently impossible to activate precise home if the drone lands. */
    ArsdkFeaturePreciseHomeStateUnavailable = 0,

    /** Precise home will be activated if the drone lands. */
    ArsdkFeaturePreciseHomeStateAvailable = 1,

    /** Precise home is currently active (drone is landing). */
    ArsdkFeaturePreciseHomeStateActive = 2,

};
#define ArsdkFeaturePreciseHomeStateCnt 3

@protocol ArsdkFeaturePreciseHomeCallback<NSObject>

@optional

/**
  

 - parameter modes: Supported precise home modes.
*/
- (void)onCapabilities:(NSUInteger)modesBitField
NS_SWIFT_NAME(onCapabilities(modesBitField:));

/**
  

 - parameter mode: Current precise home mode
*/
- (void)onMode:(ArsdkFeaturePreciseHomeMode)mode
NS_SWIFT_NAME(onMode(mode:));

/**
  

 - parameter state: Current precise home state.
*/
- (void)onState:(ArsdkFeaturePreciseHomeState)state
NS_SWIFT_NAME(onState(state:));


@end

@interface ArsdkFeaturePreciseHome : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeaturePreciseHomeCallback>)callback;

/**
 Configures precise home mode. 

 - parameter mode: Requested precise home mode.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setModeEncoder:(ArsdkFeaturePreciseHomeMode)mode
NS_SWIFT_NAME(setModeEncoder(mode:));

@end

