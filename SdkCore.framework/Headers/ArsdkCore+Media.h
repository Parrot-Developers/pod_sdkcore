//    Copyright (C) 2019 Parrot Drones SAS
//
//    Redistribution and use in source and binary forms, with or without
//    modification, are permitted provided that the following conditions
//    are met:
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//    * Neither the name of the Parrot Company nor the names
//      of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written
//      permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//    PARROT COMPANY BE LIABLE FOR ANY DIRECT, INDIRECT,
//    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
//    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
//    AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
//    OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
//    SUCH DAMAGE.

#import <Foundation/Foundation.h>
#import "ArsdkCore.h"
#import "ArsdkRequest.h"

/** media types. Numerical values must be kept in sync with C code (arsdk_media_type)*/
typedef NS_ENUM(NSInteger, ArsdkMediaType) {
    ArsdkMediaTypePhoto = (1 << 0),
    ArsdkMediaTypeVideo = (1 << 1),
    ArsdkMediaTypeAll = ArsdkMediaTypePhoto | ArsdkMediaTypeVideo
};

/** media resource format. Numerical values must be kept in sync with C code (arsdk_media_res_format) */
typedef NS_ENUM(NSInteger, ArsdkMediaResourceFormat) {
    ArsdkMediaResourceFormatJpg = 0,
    ArsdkMediaResourceFormatDng = 1,
    ArsdkMediaResourceFormatMp4 = 2
};

/** media status code */
typedef NS_ENUM(NSInteger, ArsdkMediaStatus) {
    // Numerical values must be kept in sync with C code (arsdk_media_req_status)
    /** request succeeded */
    ArsdkMediaStatusOk = 0,
    /** request canceled by the user */
    ArsdkMediaStatusCanceled = 1,
    /** request failed */
    ArsdkMediaStatusFailed = 2,
    /** request aborted by disconnection, no more requests can be sent */
    ArsdkMediaStatusAborted = 3
};

/** Wrapper around arsdk_media */
@protocol ArsdkMedia <NSObject>

/** The media type */
@property  (nonatomic, readonly) ArsdkMediaType type;
/** The media name */
@property  (nonatomic, readonly, strong, nonnull) NSString *name;
/** The media run uid */
@property  (nonatomic, readonly, strong, nonnull) NSString *runUid;
/** The media creation date */
@property  (nonatomic, readonly, strong, nonnull) NSDate *creationDate;

- (void)iterateResources:(void (NS_NOESCAPE ^ _Nonnull)(NSString *_Nonnull resourceUid,
                                                        ArsdkMediaResourceFormat format,
                                                        size_t size))block;
@end

/** Wrapper around arsdk_media_list */
@protocol ArsdkMediaList <NSObject>

/** get next item, `nil` if there is no more items */
- (nullable id<ArsdkMedia>)next;

@end

/** list request callback */
typedef void(^ArsdkMediaListCompletion)(ArsdkMediaStatus status, id<ArsdkMediaList> _Nullable mediaList);

/** download thumbnail request callback */
typedef void(^ArsdkMediaDownloadThumbnailCompletion)(ArsdkMediaStatus status, NSData * _Nullable thumbnailData);

typedef void(^ArsdkMediaDownloadProgress)(NSInteger progress);
typedef void(^ArsdkMediaDownloadCompletion)(ArsdkMediaStatus status, NSURL * _Nullable filePath);

/** delete media callback */
typedef void(^ArsdkMediaDeleteCompletion)(ArsdkMediaStatus status);


/**
 Arsdk Controller, Media related functions
 */
@interface ArsdkCore (Media)

/** List medias */
- (nonnull ArsdkRequest *)listMedia:(int16_t)handle
                         deviceType:(NSInteger)deviceType
                         completion:(nonnull ArsdkMediaListCompletion)completionBlock;

/** Download media thumbnail */
- (nonnull ArsdkRequest *)downloadMediaThumnail:(int16_t)handle
                                     deviceType:(NSInteger)deviceType
                                          media:(nonnull id<ArsdkMedia>)media
                                     completion:(nonnull ArsdkMediaDownloadThumbnailCompletion)completionBlock;

/** Download media */
- (nonnull ArsdkRequest *)downloadMedia:(int16_t)handle
                             deviceType:(NSInteger)deviceType
                                  media:(nonnull id<ArsdkMedia>)media
                                 format:(ArsdkMediaResourceFormat)fomat
                      destDirectoryPath:(nonnull NSString *)destDirectoryPath
                               progress:(nonnull ArsdkMediaDownloadProgress)progressBlock
                             completion:(nonnull ArsdkMediaDownloadCompletion)completionBlock;

/** Delete media */
- (nonnull ArsdkRequest *)deleteMedia:(int16_t)handle
                           deviceType:(NSInteger)deviceType
                                media:(nonnull id<ArsdkMedia>)media
                           completion:(nonnull ArsdkMediaDeleteCompletion)completionBlock;

@end

