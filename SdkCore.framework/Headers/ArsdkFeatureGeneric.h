/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureGenericUid;

struct arsdk_cmd;

/** Flags use by maps and lists */
typedef NS_ENUM(NSInteger, ArsdkFeatureGenericListFlags) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureGenericListFlagsSdkCoreUnknown = -1,

    /** indicate it's the first element of the list. */
    ArsdkFeatureGenericListFlagsFirst = 0,

    /** indicate it's the last element of the list. */
    ArsdkFeatureGenericListFlagsLast = 1,

    /** indicate the list is empty (implies First/Last). All other arguments should be ignored. */
    ArsdkFeatureGenericListFlagsEmpty = 2,

    /** This value should be removed from the existing list. */
    ArsdkFeatureGenericListFlagsRemove = 3,

};
#define ArsdkFeatureGenericListFlagsCnt 4

@interface ArsdkFeatureGenericListFlagsBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureGenericListFlags)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^)(ArsdkFeatureGenericListFlags val))cb;

@end

@protocol ArsdkFeatureGenericCallback<NSObject>

@optional

/**
  

 - parameter service_id: 
 - parameter msg_num: 
 - parameter payload: 
*/
- (void)onCustomEvt:(NSUInteger)serviceId msgNum:(NSUInteger)msgNum payload:(NSData *)payload
NS_SWIFT_NAME(onCustomEvt(serviceId:msgNum:payload:));

/**
  

 - parameter service_id: 
 - parameter msg_num: 
 - parameter payload: 
*/
- (void)onCustomEvtNonAck:(NSUInteger)serviceId msgNum:(NSUInteger)msgNum payload:(NSData *)payload
NS_SWIFT_NAME(onCustomEvtNonAck(serviceId:msgNum:payload:));


@end

@interface ArsdkFeatureGeneric : NSObject

+ (NSInteger)decode:(struct arsdk_cmd *)command callback:(id<ArsdkFeatureGenericCallback>)callback;

/**
  

 - parameter service_id: 
 - parameter msg_num: 
 - parameter payload: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))customCmdEncoder:(NSUInteger)serviceId msgNum:(NSUInteger)msgNum payload:(NSData *)payload
NS_SWIFT_NAME(customCmdEncoder(serviceId:msgNum:payload:));

/**
  

 - parameter service_id: 
 - parameter msg_num: 
 - parameter payload: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))customCmdNonAckEncoder:(NSUInteger)serviceId msgNum:(NSUInteger)msgNum payload:(NSData *)payload
NS_SWIFT_NAME(customCmdNonAckEncoder(serviceId:msgNum:payload:));

@end

