/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonFlightplansettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureCommonFlightplansettingsstateCallback<NSObject>

@optional

/**
 Define behavior of drone when disconnection occurs during a flight plan 

 - parameter state: 1 if enabled, 0 if disabled
 - parameter isReadOnly: 1 if readOnly, 0 if writable
*/
- (void)onReturnHomeOnDisconnectChanged:(NSUInteger)state isreadonly:(NSUInteger)isreadonly
NS_SWIFT_NAME(onReturnHomeOnDisconnectChanged(state:isreadonly:));


@end

@interface ArsdkFeatureCommonFlightplansettingsstate : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureCommonFlightplansettingsstateCallback>)callback;

@end

