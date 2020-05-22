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

+ (BOOL) isSet:(ArsdkFeatureGenericListFlags)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureGenericListFlags val))cb;

@end

@interface ArsdkFeatureGeneric : NSObject

/**
 default 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))defaultEncoder
NS_SWIFT_NAME(defaultEncoder());

@end

