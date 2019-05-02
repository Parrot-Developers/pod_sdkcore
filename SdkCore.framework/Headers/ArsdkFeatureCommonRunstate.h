/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonRunstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonRunstateCallback<NSObject>

@optional

/**
 Current run id.
A run id is uniquely identifying a run or a flight.
For each run is generated on the drone a file which can be used by Academy to sum up the run.
Also, each medias taken during a run has a filename containing the run id. 

 - parameter runId: Id of the run
*/
- (void)onRunIdChanged:(NSString*)runid
NS_SWIFT_NAME(onRunIdChanged(runid:));


@end

@interface ArsdkFeatureCommonRunstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureCommonRunstateCallback>)callback;

@end

