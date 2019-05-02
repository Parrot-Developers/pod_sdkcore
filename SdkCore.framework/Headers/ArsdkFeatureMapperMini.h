/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMapperMiniUid;

struct arsdk_cmd;

/** The action (mapped on a button) */
typedef NS_ENUM(NSInteger, ArsdkFeatureMapperMiniButtonAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMapperMiniButtonActionSdkCoreUnknown = -1,

    /** Take off or land */
    ArsdkFeatureMapperMiniButtonActionTakeoffLand = 0,

    /** Take a picture */
    ArsdkFeatureMapperMiniButtonActionTakePicture = 1,

    /** Flip left */
    ArsdkFeatureMapperMiniButtonActionFlipLeft = 2,

    /** Flip right */
    ArsdkFeatureMapperMiniButtonActionFlipRight = 3,

    /** Flip front */
    ArsdkFeatureMapperMiniButtonActionFlipFront = 4,

    /** Flip back */
    ArsdkFeatureMapperMiniButtonActionFlipBack = 5,

    /** Emergency motors shutdown */
    ArsdkFeatureMapperMiniButtonActionEmergency = 6,

    /** Launch USB accessory gun action (shoot) */
    ArsdkFeatureMapperMiniButtonActionAccessoryGun = 7,

    /** Thrown take off */
    ArsdkFeatureMapperMiniButtonActionThrownTakeoff = 8,

    /** 90 deg clockwise swipe */
    ArsdkFeatureMapperMiniButtonActionCw90Swipe = 9,

    /** 90 deg counter clockwise swipe */
    ArsdkFeatureMapperMiniButtonActionCcw90Swipe = 10,

    /** 180 deg clockwise swipe */
    ArsdkFeatureMapperMiniButtonActionCw180Swipe = 11,

    /** 180 deg counter clockwise swipe */
    ArsdkFeatureMapperMiniButtonActionCcw180Swipe = 12,

    /** increase gear */
    ArsdkFeatureMapperMiniButtonActionGearUp = 13,

    /** decrease gear */
    ArsdkFeatureMapperMiniButtonActionGearDown = 14,

    /** in plane mode make a 180 deg anticlockwise swipe on roll axis */
    ArsdkFeatureMapperMiniButtonActionPlaneModeHalfBarelRollRight = 15,

    /** in plane mode make a 180 deg clockwise swipe on roll axis */
    ArsdkFeatureMapperMiniButtonActionPlaneModeHalfBarelRollLeft = 16,

    /** in plane mode make a 180 deg clockwise swipe on pitch axis */
    ArsdkFeatureMapperMiniButtonActionPlaneModeBackswap = 17,

    /** vertical circular loop in plane mode */
    ArsdkFeatureMapperMiniButtonActionPlaneModeLooping = 18,

    /** switch between plane mode and quad mode */
    ArsdkFeatureMapperMiniButtonActionPlaneModeToggle = 19,

    /** Launch USB accessory claw action (open/close) */
    ArsdkFeatureMapperMiniButtonActionAccessoryClaw = 20,

    /** switch continuous light (ON/OFF) */
    ArsdkFeatureMapperMiniButtonActionLightContinuous = 21,

    /** switch blink light (ON/OFF) */
    ArsdkFeatureMapperMiniButtonActionLightBlink = 22,

    /** switch sinus light (ON/OFF) */
    ArsdkFeatureMapperMiniButtonActionLightSinus = 23,

    /** toggle between light animations (OFF-continuous-blink-sinus-OFF) */
    ArsdkFeatureMapperMiniButtonActionLightToggle = 24,

    /** toggle between easy and preferred piloting mode */
    ArsdkFeatureMapperMiniButtonActionPilotingModeToggle = 25,

    /** start or stop video */
    ArsdkFeatureMapperMiniButtonActionVideoRecordToggle = 26,

};
#define ArsdkFeatureMapperMiniButtonActionCnt 27

/** The action (mapped on an axis) */
typedef NS_ENUM(NSInteger, ArsdkFeatureMapperMiniAxisAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMapperMiniAxisActionSdkCoreUnknown = -1,

    /** roll */
    ArsdkFeatureMapperMiniAxisActionRoll = 0,

    /** pitch */
    ArsdkFeatureMapperMiniAxisActionPitch = 1,

    /** yaw */
    ArsdkFeatureMapperMiniAxisActionYaw = 2,

    /** gaz */
    ArsdkFeatureMapperMiniAxisActionGaz = 3,

};
#define ArsdkFeatureMapperMiniAxisActionCnt 4

/** The piloting mode of the product */
typedef NS_ENUM(NSInteger, ArsdkFeatureMapperMiniMode) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMapperMiniModeSdkCoreUnknown = -1,

    /** Quadricopter mode */
    ArsdkFeatureMapperMiniModeQuad = 0,

    /** Plane mode */
    ArsdkFeatureMapperMiniModePlane = 1,

};
#define ArsdkFeatureMapperMiniModeCnt 2

@interface ArsdkFeatureMapperMiniModeBitField : NSObject

+ (BOOL) isSet:(ArsdkFeatureMapperMiniMode)val inBitField:(NSUInteger)bitfield;

+ (void) forAllSetIn:(NSUInteger)bitfield execute:(void(^)(ArsdkFeatureMapperMiniMode val))cb;

@end

@protocol ArsdkFeatureMapperMiniCallback<NSObject>

@optional

/**
 The resulting map describes all active button mappings of the product.
A mapping can affect one or mode modes, but each action can only be mapped once per mode. 

 - parameter uid: Unique ID of the mapping.
 - parameter modes: The modes on which the mapping is set
 - parameter action: 
 - parameter buttons: Buttons combination mapped to the action (bitfield).
 - parameter list_flags: 
*/
- (void)onButtonMappingItem:(NSUInteger)uid modesBitField:(NSUInteger)modesBitField action:(ArsdkFeatureMapperMiniButtonAction)action buttons:(NSUInteger)buttons listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onButtonMappingItem(uid:modesBitField:action:buttons:listFlagsBitField:));

/**
 The resulting map describes all active axis mappings of the product.
A mapping can affect one or mode modes, but each action can only be mapped once per mode. 

 - parameter uid: Unique ID of the mapping.
 - parameter modes: The modes on which the mapping is set
 - parameter action: 
 - parameter axis: The axis number on which the action is mapped.
 - parameter buttons: Buttons combination mapped to the action (bitfield).
 - parameter list_flags: 
*/
- (void)onAxisMappingItem:(NSUInteger)uid modesBitField:(NSUInteger)modesBitField action:(ArsdkFeatureMapperMiniAxisAction)action axis:(NSInteger)axis buttons:(NSUInteger)buttons listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onAxisMappingItem(uid:modesBitField:action:axis:buttons:listFlagsBitField:));


@end

@interface ArsdkFeatureMapperMini : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMapperMiniCallback>)callback;

/**
 An action can only be mapped to one button set.
Each action can be mapped to different buttons for different modes. 

 - parameter modes: The modes on which the mapping will be set
 - parameter action: 
 - parameter buttons: Buttons combination mapped to the action (bitfield).
Set 0 (no button) to unmap an action
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))mapButtonActionEncoder:(NSUInteger)modesBitField action:(ArsdkFeatureMapperMiniButtonAction)action buttons:(NSUInteger)buttons
NS_SWIFT_NAME(mapButtonActionEncoder(modesBitField:action:buttons:));

/**
 An action can only be mapped to one axis/button set.
Each action can be mapped to different axes/buttons for different modes. 

 - parameter modes: The modes on which the mapping will be set
 - parameter action: 
 - parameter axis: The axis number on which the action will be mapped.
Set a negative value to unmap the action.
 - parameter buttons: Buttons combination mapped to the action (bitfield).
Can be zero if no buttons are required.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))mapAxisActionEncoder:(NSUInteger)modesBitField action:(ArsdkFeatureMapperMiniAxisAction)action axis:(NSInteger)axis buttons:(NSUInteger)buttons
NS_SWIFT_NAME(mapAxisActionEncoder(modesBitField:action:axis:buttons:));

/**
 Resets the mappings for the given mode(s) to their default value. 

 - parameter modes: The mode(s) to reset.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))resetMappingEncoder:(NSUInteger)modesBitField
NS_SWIFT_NAME(resetMappingEncoder(modesBitField:));

@end

