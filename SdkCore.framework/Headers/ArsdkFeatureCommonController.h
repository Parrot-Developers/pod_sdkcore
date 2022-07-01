/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureCommonControllerUid;

struct arsdk_cmd;

/** Update status */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonControllerPeerstatechangedState) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonControllerPeerstatechangedStateSdkCoreUnknown = -1,

    /** Peer connected to Skycontroller. */
    ArsdkFeatureCommonControllerPeerstatechangedStateConnected = 0,

    /** Peer disconnected from Skycontroller. */
    ArsdkFeatureCommonControllerPeerstatechangedStateDisconnected = 1,

};
#define ArsdkFeatureCommonControllerPeerstatechangedStateCnt 2

/** SDK connection type. */
typedef NS_ENUM(NSInteger, ArsdkFeatureCommonControllerPeerstatechangedType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureCommonControllerPeerstatechangedTypeSdkCoreUnknown = -1,

    /** Unknown. */
    ArsdkFeatureCommonControllerPeerstatechangedTypeUnknown = 0,

    /** Net. */
    ArsdkFeatureCommonControllerPeerstatechangedTypeNet = 1,

    /** Mux. */
    ArsdkFeatureCommonControllerPeerstatechangedTypeMux = 2,

};
#define ArsdkFeatureCommonControllerPeerstatechangedTypeCnt 3

@interface ArsdkFeatureCommonController : NSObject

/**
 Inform about hud entering.
Tell the drone that the controller enters/leaves the piloting hud.
On a non-flying products it is used to know when a run begins. 

 - parameter piloting: 0 when the application is not in the piloting HUD, 1 when it enters the HUD.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))isPilotingEncoder:(NSUInteger)piloting
NS_SWIFT_NAME(isPilotingEncoder(piloting:));

/**
 A SDK peer (ie FreeFlight) has connected/disconnected to the Skycontroller.
This is only meant to be sent by the Skycontroller, as it is acting as a proxy. 

 - parameter state: 
 - parameter type: 
 - parameter peerName: Peer name.
May not be available at disconnection.
 - parameter peerId: Peer id.
May not be available at disconnection.
 - parameter peerType: Peer type.
May not be available at disconnection.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))peerStateChangedEncoder:(ArsdkFeatureCommonControllerPeerstatechangedState)state type:(ArsdkFeatureCommonControllerPeerstatechangedType)type peername:(NSString *)peername peerid:(NSString *)peerid peertype:(NSString *)peertype
NS_SWIFT_NAME(peerStateChangedEncoder(state:type:peername:peerid:peertype:));

@end

