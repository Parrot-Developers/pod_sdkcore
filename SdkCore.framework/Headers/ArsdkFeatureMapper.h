/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureMapperUid;

struct arsdk_cmd;

/** The action (mapped on a button) */
typedef NS_ENUM(NSInteger, ArsdkFeatureMapperButtonAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMapperButtonActionSdkCoreUnknown = -1,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp0 = 0,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp1 = 1,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp2 = 2,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp3 = 3,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp4 = 4,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp5 = 5,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp6 = 6,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp7 = 7,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp8 = 8,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp9 = 9,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp10 = 10,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp11 = 11,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp12 = 12,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp13 = 13,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp14 = 14,

    /** Action handled by the application */
    ArsdkFeatureMapperButtonActionApp15 = 15,

    /** Return to home */
    ArsdkFeatureMapperButtonActionReturnHome = 16,

    /** Take off or land */
    ArsdkFeatureMapperButtonActionTakeoffLand = 17,

    /** Start/stop video record */
    ArsdkFeatureMapperButtonActionVideoRecord = 18,

    /** Take a picture */
    ArsdkFeatureMapperButtonActionTakePicture = 19,

    /** Increment camera exposition */
    ArsdkFeatureMapperButtonActionCameraExpositionInc = 20,

    /** Decrement camera exposition */
    ArsdkFeatureMapperButtonActionCameraExpositionDec = 21,

    /** Flip left */
    ArsdkFeatureMapperButtonActionFlipLeft = 22,

    /** Flip right */
    ArsdkFeatureMapperButtonActionFlipRight = 23,

    /** Flip front */
    ArsdkFeatureMapperButtonActionFlipFront = 24,

    /** Flip back */
    ArsdkFeatureMapperButtonActionFlipBack = 25,

    /** Emergency motors shutdown */
    ArsdkFeatureMapperButtonActionEmergency = 26,

    /** Reset camera to its default position */
    ArsdkFeatureMapperButtonActionCenterCamera = 27,

    /** Cycle between different hud configurations on HDMI
(Skycontroller 1 only) */
    ArsdkFeatureMapperButtonActionCycleHud = 28,

    /** In picture mode: take a picture
In record mode: start/stop record */
    ArsdkFeatureMapperButtonActionCameraAuto = 29,

    /** Add a debug tag to logs, and send it to the drone */
    ArsdkFeatureMapperButtonActionDebugTag = 30,

    /** Smart take off or land (Drone will decide what to do) */
    ArsdkFeatureMapperButtonActionSmartTakeoffLand = 31,

    /** toggle between internal and external antenna */
    ArsdkFeatureMapperButtonActionToggleAntenna = 32,

};
#define ArsdkFeatureMapperButtonActionCnt 33

/** The action (mapped on an axis) */
typedef NS_ENUM(NSInteger, ArsdkFeatureMapperAxisAction) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMapperAxisActionSdkCoreUnknown = -1,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp0 = 0,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp1 = 1,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp2 = 2,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp3 = 3,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp4 = 4,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp5 = 5,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp6 = 6,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp7 = 7,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp8 = 8,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp9 = 9,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp10 = 10,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp11 = 11,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp12 = 12,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp13 = 13,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp14 = 14,

    /** Action handled by the application */
    ArsdkFeatureMapperAxisActionApp15 = 15,

    /** roll */
    ArsdkFeatureMapperAxisActionRoll = 16,

    /** pitch */
    ArsdkFeatureMapperAxisActionPitch = 17,

    /** yaw */
    ArsdkFeatureMapperAxisActionYaw = 18,

    /** gaz */
    ArsdkFeatureMapperAxisActionGaz = 19,

    /** camera pan */
    ArsdkFeatureMapperAxisActionCameraPan = 20,

    /** camera tilt */
    ArsdkFeatureMapperAxisActionCameraTilt = 21,

    /** camera zoom */
    ArsdkFeatureMapperAxisActionCameraZoom = 22,

};
#define ArsdkFeatureMapperAxisActionCnt 23

/** Button event */
typedef NS_ENUM(NSInteger, ArsdkFeatureMapperButtonEvent) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMapperButtonEventSdkCoreUnknown = -1,

    /** button released */
    ArsdkFeatureMapperButtonEventRelease = 0,

    /** button pressed */
    ArsdkFeatureMapperButtonEventPress = 1,

};
#define ArsdkFeatureMapperButtonEventCnt 2

/** Expo type */
typedef NS_ENUM(NSInteger, ArsdkFeatureMapperExpoType) {
    /**
     Unknown value from SdkCore.
     Only used if the received value cannot be matched with a declared value.
     This might occur when the drone or rc has a different sdk base from the controller.
     */
    ArsdkFeatureMapperExpoTypeSdkCoreUnknown = -1,

    /** No expo applied, axis is linear */
    ArsdkFeatureMapperExpoTypeLinear = 0,

    /** Light exponential curve */
    ArsdkFeatureMapperExpoTypeExpo0 = 1,

    /** Medium exponential curve */
    ArsdkFeatureMapperExpoTypeExpo1 = 2,

    /** Heavy exponential curve */
    ArsdkFeatureMapperExpoTypeExpo2 = 3,

    /** Maximum exponential curve */
    ArsdkFeatureMapperExpoTypeExpo4 = 4,

};
#define ArsdkFeatureMapperExpoTypeCnt 5

@protocol ArsdkFeatureMapperCallback<NSObject>

@optional

/**
 Grabbed buttons are sent to the app and are not handled by the mapper 

 - parameter buttons: Grabbed buttons (bitfield)
 - parameter axes: Grabbed axes (bitfield)
 - parameter buttons_state: For grabbed buttons only.
State of the button when the grab starts (bitfield)
*/
- (void)onGrabState:(NSUInteger)buttons axes:(NSUInteger)axes buttonsState:(NSUInteger)buttonsState
NS_SWIFT_NAME(onGrabState(buttons:axes:buttonsState:));

/**
 The state of a grabbed button changes 

 - parameter button: Button id
 - parameter event: 
*/
- (void)onGrabButtonEvent:(NSUInteger)button event:(ArsdkFeatureMapperButtonEvent)event
NS_SWIFT_NAME(onGrabButtonEvent(button:event:));

/**
 The state of a grabbed axis changes 

 - parameter axis: Axis id
 - parameter value: Value in range [-100; 100].
*/
- (void)onGrabAxisEvent:(NSUInteger)axis value:(NSInteger)value
NS_SWIFT_NAME(onGrabAxisEvent(axis:value:));

/**
 The resulting map describes all active button mappings of the mapper.
Each action can only be mapped once per product. 

 - parameter uid: Unique ID of the mapping.
 - parameter product: Product (see libARDiscovery for list)
 - parameter action: 
 - parameter buttons: Buttons combination mapped to the action (bitfield).
 - parameter list_flags: 
*/
- (void)onButtonMappingItem:(NSUInteger)uid product:(NSUInteger)product action:(ArsdkFeatureMapperButtonAction)action buttons:(NSUInteger)buttons listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onButtonMappingItem(uid:product:action:buttons:listFlagsBitField:));

/**
 The resulting map describes all active axis mappings of the mapper.
Each action can only be mapped once per product. 

 - parameter uid: Unique ID of the mapping.
 - parameter product: Product (see libARDiscovery for list)
 - parameter action: 
 - parameter axis: The axis number on which the action is mapped.
 - parameter buttons: Buttons combination mapped to the action (bitfield).
 - parameter list_flags: 
*/
- (void)onAxisMappingItem:(NSUInteger)uid product:(NSUInteger)product action:(ArsdkFeatureMapperAxisAction)action axis:(NSInteger)axis buttons:(NSUInteger)buttons listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onAxisMappingItem(uid:product:action:axis:buttons:listFlagsBitField:));

/**
 This event signals the controller application when an application specific axis_event is triggered.
Application specific actions are typically used for UI interaction which does not involves the drone. 

 - parameter action: 
 - parameter value: The current value of the axis.
*/
- (void)onApplicationAxisEvent:(ArsdkFeatureMapperAxisAction)action value:(NSInteger)value
NS_SWIFT_NAME(onApplicationAxisEvent(action:value:));

/**
 This event signals the controller application when an application specific button_event is triggered.
Application specific actions are typically used for UI interaction which does not involves the drone. 

 - parameter action: 
*/
- (void)onApplicationButtonEvent:(ArsdkFeatureMapperButtonAction)action
NS_SWIFT_NAME(onApplicationButtonEvent(action:));

/**
 By default, each axis can have a different expo value.
For some products/mappings configuration, the expo values of two axes belonging to the same physical joystick can be locked to the same value. In this case, setting the value for one axis will automatically change both values. 

 - parameter uid: Unique ID (for MAP_ITEM type)
 - parameter product: Product (see libARDiscovery for list)
 - parameter axis: Axis number
 - parameter expo: 
 - parameter list_flags: 
*/
- (void)onExpoMapItem:(NSUInteger)uid product:(NSUInteger)product axis:(NSInteger)axis expo:(ArsdkFeatureMapperExpoType)expo listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onExpoMapItem(uid:product:axis:expo:listFlagsBitField:));

/**
 Axis inversion has no effect on grabbed axes, nor on virtual buttons that might be generated from axes. 

 - parameter uid: Unique ID (for MAP_ITEM type)
 - parameter product: Product (see libARDiscovery for list)
 - parameter axis: Axis number
 - parameter inverted: 0 : Axis not inverted.
1 : Axis inverted
 - parameter list_flags: 
*/
- (void)onInvertedMapItem:(NSUInteger)uid product:(NSUInteger)product axis:(NSInteger)axis inverted:(NSUInteger)inverted listFlagsBitField:(NSUInteger)listFlagsBitField
NS_SWIFT_NAME(onInvertedMapItem(uid:product:axis:inverted:listFlagsBitField:));

/**
 This event notifies the application about the currently active product, thus allowing the application to diplay and edit the current mapping without having to guess from other sources. 

 - parameter product: Product (see libARDiscovery for list)
*/
- (void)onActiveProduct:(NSUInteger)product
NS_SWIFT_NAME(onActiveProduct(product:));

/**
 Volatile mapping state 

 - parameter active: 0 : Volatile mapping is not active.
1 : Volatile mapping is active.
*/
- (void)onVolatileMappingState:(NSUInteger)active
NS_SWIFT_NAME(onVolatileMappingState(active:));


@end

@interface ArsdkFeatureMapper : NSObject

+ (NSInteger)decode:(struct arsdk_cmd*)command callback:(id<ArsdkFeatureMapperCallback>)callback;

/**
 Grabbed buttons are sent to the app and are not handled by the mapper 

 - parameter buttons: Buttons to grab/ungrab (bitfield)
 - parameter axes: Axes to grab/ungrab (bitfield)
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))grabEncoder:(NSUInteger)buttons axes:(NSUInteger)axes
NS_SWIFT_NAME(grabEncoder(buttons:axes:));

/**
 An action can only be mapped to one button set.
Each action can be mapped to different buttons for different products. 

 - parameter product: Product (see libARDiscovery for list)
 - parameter action: 
 - parameter buttons: Buttons combination mapped to the action (bitfield).
Set 0 (no button) to unmap an action
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))mapButtonActionEncoder:(NSUInteger)product action:(ArsdkFeatureMapperButtonAction)action buttons:(NSUInteger)buttons
NS_SWIFT_NAME(mapButtonActionEncoder(product:action:buttons:));

/**
 An action can only be mapped to one axis/button set.
Each action can be mapped to different axes/buttons for different products. 

 - parameter product: Product (see libARDiscovery for list)
 - parameter action: 
 - parameter axis: The axis number on which the action will be mapped.
Set a negative value to unmap the action.
 - parameter buttons: Buttons combination mapped to the action (bitfield).
Can be zero if no buttons are required.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))mapAxisActionEncoder:(NSUInteger)product action:(ArsdkFeatureMapperAxisAction)action axis:(NSInteger)axis buttons:(NSUInteger)buttons
NS_SWIFT_NAME(mapAxisActionEncoder(product:action:axis:buttons:));

/**
 Resets the mappings, axis exponential parameters, and axis inversion for the given product.
If the product is given as 0 (zero), the all products are reset. 

 - parameter product: The product to reset, or 0 to reset all products.
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))resetMappingEncoder:(NSUInteger)product
NS_SWIFT_NAME(resetMappingEncoder(product:));

/**
 By default, each axis can have a different expo value.
For some products/mappings configuration, the expo values of two axes belonging to the same physical joystick can be locked to the same value. In this case, setting the value for one axis will automatically change both values. 

 - parameter product: Product (see libARDiscovery for list).
Set to 0 to apply to all products
 - parameter axis: Axis number. Set to -1 to apply to all axes.
 - parameter expo: 
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setExpoEncoder:(NSUInteger)product axis:(NSInteger)axis expo:(ArsdkFeatureMapperExpoType)expo
NS_SWIFT_NAME(setExpoEncoder(product:axis:expo:));

/**
 Axis inversion has no effect on grabbed axes, nor on virtual buttons that might be generated from axes. 

 - parameter product: Product (see libARDiscovery for list).
Set to 0 to apply to all products
 - parameter axis: Axis number
 - parameter inverted: 0 : Axis not inverted.
1 : Axis inverted
 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))setInvertedEncoder:(NSUInteger)product axis:(NSInteger)axis inverted:(NSUInteger)inverted
NS_SWIFT_NAME(setInvertedEncoder(product:axis:inverted:));

/**
 All mappings in this mode will disappear when exit will be called or when device is unplugged. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))enterVolatileMappingEncoder
NS_SWIFT_NAME(enterVolatileMappingEncoder());

/**
 Destroy volatile mapping.
Any current action is canceled, for example PCMD will become null even if PCMD axis are pushed, the user has to release the axis to recover PCMD control. 

 - returns: a block that encodes the command
*/
+ (int (^)(struct arsdk_cmd *))exitVolatileMappingEncoder
NS_SWIFT_NAME(exitVolatileMappingEncoder());

@end

