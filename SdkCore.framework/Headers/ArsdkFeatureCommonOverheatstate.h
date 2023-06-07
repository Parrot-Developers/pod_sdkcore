/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonOverheatstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonOverheatstateCallback<NSObject>

@optional

/**
 Overheat temperature reached. 

*/
- (void)onOverHeatChanged
NS_SWIFT_NAME(onOverHeatChanged());

/**
 Overheat regulation type. 

 - parameter regulationType: Type of overheat regulation : 0 for ventilation, 1 for switch off
*/
- (void)onOverHeatRegulationChanged:(NSUInteger)regulationtype
NS_SWIFT_NAME(onOverHeatRegulationChanged(regulationtype:));


@end

@interface ArsdkFeatureCommonOverheatstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonOverheatstateCallback>)callback;

@end

