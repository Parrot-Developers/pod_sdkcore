/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMissionUid;

struct arsdk_cmd;

/** State of mission. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMissionState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMissionStateSdkCoreUnknown = -1,

    /** Mission is not available. */
    ArsdkFeatureMissionStateUnavailable = 0,

    /** Mission is not available. */
    ArsdkFeatureMissionStateUnloaded = 1,

    /** Mission can be activated. */
    ArsdkFeatureMissionStateIdle = 2,

    /** Mission is active. */
    ArsdkFeatureMissionStateActive = 3,

};
#define ArsdkFeatureMissionStateCnt 4

/** Unavailability reasons. */
typedef NS_ENUM(NSInteger, ArsdkFeatureMissionUnavailabilityReason) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMissionUnavailabilityReasonSdkCoreUnknown = -1,

    /** No reason.
The mission is actually available. */
    ArsdkFeatureMissionUnavailabilityReasonNone = 0,

    /** Broken. Version is not supported or mission is
corrupted. The mission will never be able to
load or start. */
    ArsdkFeatureMissionUnavailabilityReasonBroken = 1,

    /** The mission failed to load. */
    ArsdkFeatureMissionUnavailabilityReasonLoadFailed = 2,

};
#define ArsdkFeatureMissionUnavailabilityReasonCnt 3

@protocol ArsdkFeatureMissionCallback<NSObject>

@optional

/**
  

 - parameter uid: Unique id of the mission
 - parameter name: Name of the mission.
 - parameter desc: Description of the mission.
 - parameter version: Version of the mission.
 - parameter recipient_id: Id to use to exchange messages with the mission (given by the drone)
 - parameter target_model_id: Model id of the supported target.
 - parameter target_min_version: Minimum version of target firmware supported.
 - parameter target_max_version: Maximum version of target firmware supported.
 - parameter list_flags: 
*/
- (void)onCapabilities:(NSString*)uid name:(NSString*)name desc:(NSString*)desc version:(NSString*)version recipientId:(NSUInteger)recipientId targetModelId:(NSUInteger)targetModelId targetMinVersion:(NSString*)targetMinVersion targetMaxVersion:(NSString*)targetMaxVersion listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onCapabilities(uid:name:desc:version:recipientId:targetModelId:targetMinVersion:targetMaxVersion:listFlagsBitField:));

/**
 At connection and whenever there is a change in the mission state. 

 - parameter uid: Unique id of the mission
 - parameter state: State of activation of the mission.
 - parameter unavailability_reason: Unavailability reason(s) to load the mission.
Empty if mission is activate.
*/
- (void)onState:(NSString*)uid state:(ArsdkFeatureMissionState)state unavailabilityReason:(ArsdkFeatureMissionUnavailabilityReason)unavailabilityReason
NS_SWIFT_NAME(onState(uid:state:unavailabilityReason:));

/**
  

 - parameter recipient_id: 
 - parameter service_id: 
 - parameter msg_num: 
 - parameter payload: 
*/
- (void)onCustomEvt:(NSUInteger)recipientId serviceId:(NSUInteger)serviceId msgNum:(NSUInteger)msgNum payload:(NSData*)payload
NS_SWIFT_NAME(onCustomEvt(recipientId:serviceId:msgNum:payload:));

/**
 Suggested activation of a mission. 

 - parameter uid: Unique id of the mission
*/
- (void)onSuggestedActivation:(NSString*)uid
NS_SWIFT_NAME(onSuggestedActivation(uid:));


@end

@interface ArsdkFeatureMission : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMissionCallback>)callback;

/**
 Tells the drone to load the corresponding mission. 

 - parameter uid: Unique id of the mission
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))loadEncoder:(NSString*)uid
NS_SWIFT_NAME(loadEncoder(uid:));

/**
 Tells the drone to start the mission. The mission will start only if there is no missing_requirements and if it was previously loaded (.idle state). 

 - parameter uid: Unique id of the mission
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))activateEncoder:(NSString*)uid
NS_SWIFT_NAME(activateEncoder(uid:));

/**
 Tells the drone to unload the mission. 

 - parameter uid: Unique id of the mission
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))unloadEncoder:(NSString*)uid
NS_SWIFT_NAME(unloadEncoder(uid:));

/**
  

 - parameter recipient_id: 
 - parameter service_id: 
 - parameter msg_num: 
 - parameter payload: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))customCmdEncoder:(NSUInteger)recipientId serviceId:(NSUInteger)serviceId msgNum:(NSUInteger)msgNum payload:(NSData*)payload
NS_SWIFT_NAME(customCmdEncoder(recipientId:serviceId:msgNum:payload:));

/**
 Enable custom messages for all missions. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))customMsgEnableEncoder
NS_SWIFT_NAME(customMsgEnableEncoder());

/**
 Disable custom messages for all missions. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))customMsgDisableEncoder
NS_SWIFT_NAME(customMsgDisableEncoder());

@end

