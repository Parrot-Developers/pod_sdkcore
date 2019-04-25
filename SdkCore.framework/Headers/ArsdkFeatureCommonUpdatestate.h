/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonUpdatestateUid;

struct arsdk_cmd;

/** Update status */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonUpdatestateUpdatestatechangedStatus) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonUpdatestateUpdatestatechangedStatusSdkCoreUnknown = -1,

    /** Update completed successfully. */
    ArsdkFeatureCommonUpdatestateUpdatestatechangedStatusSuccess = 0,

    /** Failure, wrong or corrupted update file. */
    ArsdkFeatureCommonUpdatestateUpdatestatechangedStatusFailureBadFile = 1,

    /** Failure, battery level was too low. */
    ArsdkFeatureCommonUpdatestateUpdatestatechangedStatusFailureBatLevelTooLow = 2,

    /** Generic Failure. */
    ArsdkFeatureCommonUpdatestateUpdatestatechangedStatusFailure = 3,

};
#define ArsdkFeatureCommonUpdatestateUpdatestatechangedStatusCnt 4

@protocol ArsdkFeatureCommonUpdatestateCallback<NSObject>

@optional

/**
 Status of the latest software update 

 - parameter sourceVersion: Version before the update.
 - parameter targetVersion: Target version of the latest update. This is the version after the update when `status` is `SUCCESS` or
the version of the update that failed when `status` is one of the failure value.
 - parameter status: 
*/
- (void)onUpdateStateChanged:(NSString*)sourceversion targetversion:(NSString*)targetversion status:(ArsdkFeatureCommonUpdatestateUpdatestatechangedStatus)status
NS_SWIFT_NAME(onUpdateStateChanged(sourceversion:targetversion:status:));


@end

@interface ArsdkFeatureCommonUpdatestate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonUpdatestateCallback>)callback;

@end

