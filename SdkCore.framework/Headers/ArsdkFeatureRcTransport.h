/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureRcTransportUid;

struct arsdk_cmd;

/** Communication transport layer. */
typedef NS_ENUM(NSInteger, ArsdkFeatureRcTransportTransportLayer) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureRcTransportTransportLayerSdkCoreUnknown = -1,

    /** Transport is over wifi 802.11 */
    ArsdkFeatureRcTransportTransportLayerWifi = 0,

    /** Transport is over microhard */
    ArsdkFeatureRcTransportTransportLayerMicrohard = 1,

};
#define ArsdkFeatureRcTransportTransportLayerCnt 2

@interface ArsdkFeatureRcTransportTransportLayerBitField : NSObject

+ (BOOL)isSet:(ArsdkFeatureRcTransportTransportLayer)val inBitField:(NSUInteger)bitfield;

+ (void)forAllSetIn:(NSUInteger)bitfield execute:(void (NS_NOESCAPE ^ _Nonnull)(ArsdkFeatureRcTransportTransportLayer val))cb;

@end

@protocol ArsdkFeatureRcTransportCallback<NSObject>

@optional

/**
  

 - parameter transport: Current transport layer used by the skycontroller
*/
- (void)onTransport:(ArsdkFeatureRcTransportTransportLayer)transport
NS_SWIFT_NAME(onTransport(transport:));

/**
  

 - parameter transports: Supported transport layers.
*/
- (void)onCapabilities:(NSUInteger)transportsBitField
NS_SWIFT_NAME(onCapabilities(transportsBitField:));


@end

@interface ArsdkFeatureRcTransport : NSObject

+ (NSInteger)decode:(nonnull struct arsdk_cmd *)command callback:(nonnull id<ArsdkFeatureRcTransportCallback>)callback;

/**
 Configures transport layer. 

 - parameter transport: Requested transport_layer.
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setTransportEncoder:(ArsdkFeatureRcTransportTransportLayer)transport
NS_SWIFT_NAME(setTransportEncoder(transport:));

@end

