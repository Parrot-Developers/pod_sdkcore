/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureFcrUid;

struct arsdk_cmd;

@protocol ArsdkFeatureFcrCallback<NSObject>

@optional

/**
  

 - parameter capabilities: 
*/
- (void)onCapabilities:(uint64_t)capabilities
NS_SWIFT_NAME(onCapabilities(capabilities:));

/**
  

 - parameter id: Pipeline configuration identifier.
*/
- (void)onPipelines:(uint64_t)id
NS_SWIFT_NAME(onPipelines(id:));


@end

@interface ArsdkFeatureFcr : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureFcrCallback>)callback;

/**
 Allows to select current flight camera recording pipelines configuration. 

 - parameter id: Pipeline configuration identifier.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))configurePipelinesEncoder:(uint64_t)id
NS_SWIFT_NAME(configurePipelinesEncoder(id:));

@end

