/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMinidroneSettingsstateUid;

struct arsdk_cmd;

@protocol ArsdkFeatureMinidroneSettingsstateCallback<NSObject>

@optional

/**
 @deprecated
Product Motors versions 

 - parameter motor: Product Motor number [1 - 4]
 - parameter type: Product Motor type
 - parameter software: Product Motors software version
 - parameter hardware: Product Motors hardware version
*/
- (void)onProductMotorsVersionChanged:(NSUInteger)motor type:(NSString*)type software:(NSString*)software hardware:(NSString*)hardware
NS_SWIFT_NAME(onProductMotorsVersionChanged(motor:type:software:hardware:));

/**
 @deprecated
Product Inertial versions 

 - parameter software: Product Inertial software version
 - parameter hardware: Product Inertial hardware version
*/
- (void)onProductInertialVersionChanged:(NSString*)software hardware:(NSString*)hardware
NS_SWIFT_NAME(onProductInertialVersionChanged(software:hardware:));

/**
 MiniDrone cut out mode 

 - parameter enable: State of cut out mode (1 if is activate, 0 otherwise)
*/
- (void)onCutOutModeChanged:(NSUInteger)enable
NS_SWIFT_NAME(onCutOutModeChanged(enable:));


@end

@interface ArsdkFeatureMinidroneSettingsstate : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMinidroneSettingsstateCallback>)callback;

@end

