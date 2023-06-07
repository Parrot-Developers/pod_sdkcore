/** Generated, do not edit ! */

#import <Foundation/Foundation.h>

extern short const kArsdkFeatureSkyctrlAxisfiltersUid;

struct arsdk_cmd;

@interface ArsdkFeatureSkyctrlAxisfilters : NSObject

/**
 The SkyController will send its full axis filters map. This command is mainly useful for initial synchronization, as every change to the filters map (via the [setAxisFilter](#4-16-2) command) will trigger [currentAxisFilters](#4-17-0) events. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))getCurrentAxisFiltersEncoder
NS_SWIFT_NAME(getCurrentAxisFiltersEncoder());

/**
 The preset list is empty and will never be filled, so this command is flagged as deprecated. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))getPresetAxisFiltersEncoder
NS_SWIFT_NAME(getPresetAxisFiltersEncoder());

/**
 A filter modifies the response curve of an axis.
As the preset filters list is empty, all filters are to be sent using the builder syntax.

The builder syntax supports two types of filters: Multilinear and Exponential.

Multilinear filters create response curves made of multiple linear segments:
* The default filter (ARMF;) is purely linear and create a single segment from the two implicit `[-1; -1]` and `[1; 1]` points.
* Additionnal points can be added to the filter with the following syntax: `ARMF;x1>y1;...;xN>yN;`, where all numbers are floating point numbers in range `[-1; 1]`.
* Additionnal points **must** respect the following constraints : `x(N)>x(N-1)` and `y(N)>=y(N-1)`.

Exponential filters:
* The syntax is `ARXF;CPx;CPy;`, where CPx and CPy are floating point numbers in range `[0; 1]`.
* Best results are achieved when `CPx + CPy == 1` and `CPx > CPy`.
* If the control point is on the diagonal (i.e. `CPx == CPy`), then the resulting filter will be linear. 

 - parameter axis_id: The axiscode to filter
 - parameter filter_uid_or_builder: The mapping preset to associate with the axis
(Or a string to build a new one)
 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))setAxisFilterEncoder:(NSInteger)axisId filterUidOrBuilder:(nonnull NSString *)filterUidOrBuilder
NS_SWIFT_NAME(setAxisFilterEncoder(axisId:filterUidOrBuilder:));

/**
 The default values can change between software versions. 

 - returns: a block that encodes the command
*/
+ (int (^ _Nonnull)(struct arsdk_cmd * _Nonnull))defaultAxisFiltersEncoder
NS_SWIFT_NAME(defaultAxisFiltersEncoder());

@end

