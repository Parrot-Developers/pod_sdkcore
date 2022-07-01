/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureGaugeFwUpdaterUid;

struct arsdk_cmd;

/** Gauge Firmware Diagnostic */
typedef NS_ENUM(NSInteger, ArsdkFeatureGaugeFwUpdaterDiag) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGaugeFwUpdaterDiagSdkCoreUnknown = -1,

    /** Gauge Firmware is Up-to-Date. */
    ArsdkFeatureGaugeFwUpdaterDiagUpToDate = 0,

    /** Gauge Firmware cannot be updated. */
    ArsdkFeatureGaugeFwUpdaterDiagCannotUpdate = 1,

    /** Gauge Firmware can be updated. */
    ArsdkFeatureGaugeFwUpdaterDiagUpdatable = 2,

};
#define ArsdkFeatureGaugeFwUpdaterDiagCnt 3

/** State of Gauge Firmware Service */
typedef NS_ENUM(NSInteger, ArsdkFeatureGaugeFwUpdaterState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGaugeFwUpdaterStateSdkCoreUnknown = -1,

    /** Service is ready to prepare Update. */
    ArsdkFeatureGaugeFwUpdaterStateReadyToPrepare = 0,

    /** Service Preparation is in Progress. */
    ArsdkFeatureGaugeFwUpdaterStatePreparationInProgress = 1,

    /** Service is ready to Update. */
    ArsdkFeatureGaugeFwUpdaterStateReadyToUpdate = 2,

    /** Service Update is in Progress. */
    ArsdkFeatureGaugeFwUpdaterStateUpdateInProgress = 3,

};
#define ArsdkFeatureGaugeFwUpdaterStateCnt 4

/** Requirements of Gauge Firmware Service */
typedef NS_ENUM(NSInteger, ArsdkFeatureGaugeFwUpdaterRequirements) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGaugeFwUpdaterRequirementsSdkCoreUnknown = -1,

    /** USB power is provided. */
    ArsdkFeatureGaugeFwUpdaterRequirementsUsb = 0,

    /** RSOC is enough. */
    ArsdkFeatureGaugeFwUpdaterRequirementsRsoc = 1,

    /** Drone is landed. */
    ArsdkFeatureGaugeFwUpdaterRequirementsDroneState = 2,

};
#define ArsdkFeatureGaugeFwUpdaterRequirementsCnt 3

@interface ArsdkFeatureGaugeFwUpdaterRequirementsBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureGaugeFwUpdaterRequirements)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^)(ArsdkFeatureGaugeFwUpdaterRequirements val))cb;

@end

/** Result of Gauge Firmware Service */
typedef NS_ENUM(NSInteger, ArsdkFeatureGaugeFwUpdaterResult) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGaugeFwUpdaterResultSdkCoreUnknown = -1,

    /** Result is Success. */
    ArsdkFeatureGaugeFwUpdaterResultSuccess = 0,

    /** In Progress. */
    ArsdkFeatureGaugeFwUpdaterResultInProgress = 1,

    /** Bad Diagnostic. */
    ArsdkFeatureGaugeFwUpdaterResultBadDiag = 2,

    /** Not Prepared. */
    ArsdkFeatureGaugeFwUpdaterResultNotPrepared = 3,

    /** Requirements not Achieved. */
    ArsdkFeatureGaugeFwUpdaterResultRequirementsNotAchieved = 4,

    /** Problem with Battery. */
    ArsdkFeatureGaugeFwUpdaterResultBatteryError = 5,

};
#define ArsdkFeatureGaugeFwUpdaterResultCnt 6

@protocol ArsdkFeatureGaugeFwUpdaterCallback<NSObject>

@optional

/**
  

 - parameter diag: Diagnostic.
 - parameter missing_requirements: Missing Requirements.
 - parameter state: State.
*/
- (void)onStatus:(ArsdkFeatureGaugeFwUpdaterDiag)diag missingRequirementsBitField:(NSUInteger)missingRequirementsBitField state:(ArsdkFeatureGaugeFwUpdaterState)state
NS_SWIFT_NAME(onStatus(diag:missingRequirementsBitField:state:));

/**
  

 - parameter result: Result.
 - parameter percent: Percentage (%), only for [prepare](#160-1).
*/
- (void)onProgress:(ArsdkFeatureGaugeFwUpdaterResult)result percent:(NSUInteger)percent
NS_SWIFT_NAME(onProgress(result:percent:));


@end

@interface ArsdkFeatureGaugeFwUpdater : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureGaugeFwUpdaterCallback>)callback;

/**
 Prepare Update 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))prepareEncoder
NS_SWIFT_NAME(prepareEncoder());

/**
 Update 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))updateEncoder
NS_SWIFT_NAME(updateEncoder());

@end

