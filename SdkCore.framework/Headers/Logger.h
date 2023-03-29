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
#import "LogBinRecorderConfig.h"
#import "LogTxtRecorderConfig.h"
#import "LogEventRecorderConfig.h"

typedef NS_ENUM(NSInteger, Level) {
    LOG_CRIT =     2, /* critical conditions */
    LOG_ERR =      3, /* error conditions */
    LOG_WARN =     4, /* warning conditions */
    LOG_NOTICE =   5, /* normal but significant condition */
    LOG_INFO =     6, /* informational message */
    LOG_DEBUG =    7, /* debug-level message */
};

/**
 Ulog tag used to associate log tag and log level.
 */
@interface ULogTag : NSObject

- (nonnull instancetype)initWithName:(nonnull NSString *)name;

/**
 Set the minimum level to log for the tag.

 @param level the minimum level.
 */
- (void)setMinLevel:(Level)level;

/**
 Get the minimum level to log for the tag.

 @param level the minimum level.
 */
- (Level)minLevel;

@end

/** Provides control over a rotating log recorder instance. */
@protocol RotatingLogRecorder <NSObject>

/**
- Closes current log file and starts a new one.
 */
- (void)rotateLogFile;

@end

/** Provides control over a event log recorder instance. */
@protocol EventLogRecorder <RotatingLogRecorder>

/**
 Updates a header property.

 @param key: key
 @param value: value
 */
- (void)updateProperty:(nonnull NSString *)key value:(nonnull NSString *)value
NS_SWIFT_NAME(updateProperty(key:value:));

@end

/** Common logger based on ulog, using. */
@interface ULog : NSObject

/** Tag used to log commands as text. */
@property (class, nonatomic, readonly, nonnull) ULogTag *cmdTag;

/**
 Enables redirecting log messages to binary file `.bin` recorder.

 @param config log recorder configuration

 @return a new LogBinRecorder instance, that allows to control the log recording.
 */
+ (nullable id<RotatingLogRecorder>)redirectToLogBin:(nonnull LogBinRecorderConfig *)config
NS_SWIFT_NAME(redirectToLogBin(config:));

/**
 Enables redirecting log messages to system log.

 @param enabled `YES` to enable redirecting log messages to system log, `NO` to disable it.
 */
+ (void)redirectToSystemLog:(BOOL)enabled
NS_SWIFT_NAME(redirectToSystemLog(enabled:));

/**
 Enables redirecting log messages to textual file `.log` recorder.

 @param config log recorder configuration

 @return a new LogTxtRecorder instance, that allows to control the log recording.
 */
+ (nullable id<RotatingLogRecorder>)redirectToLogTxt:(nonnull LogTxtRecorderConfig *)config
NS_SWIFT_NAME(redirectToLogTxt(config:));

/**
 Enables redirecting log messages to event binary file `.bin` recorder.

 @param config log recorder configuration
 @param roProperties: custom read only header properties
 @param rwProperties: custom read write header properties

 @return a new LogEventRecorder instance, that allows to control the log recording.
 */
+ (nullable id<EventLogRecorder>)redirectToLogEvent:(nonnull LogEventRecorderConfig *)config
                                         roProperties:(nullable NSDictionary<NSString*, NSString*> *)roProperties
                                         rwProperties:(nullable NSDictionary<NSString*, NSString*> *)rwProperties
NS_SWIFT_NAME(redirectToLogEvent(config:roProperties:rwProperties:));

/**
 Send a critical log.

 @param tag tag use to log.
 @param msg message to log.
 */
+ (void)c:(nonnull ULogTag *)tag msg:(nonnull NSString *)msg, ... NS_FORMAT_FUNCTION(2,3);
+ (void)c:(nonnull ULogTag *)tag :(nonnull NSString *)msg;

/**
 Send an error log.

 @param tag tag use to log.
 @param msg message to log.
 */
+ (void)e:(nonnull ULogTag *)tag msg:(nonnull NSString *)msg, ... NS_FORMAT_FUNCTION(2,3);
+ (void)e:(nonnull ULogTag *)tag :(nonnull NSString *)msg;

/**
 Send a warning log.

 @param tag tag use to log.
 @param msg message to log.
 */
+ (void)w:(nonnull ULogTag *)tag msg:(nonnull NSString *)msg, ... NS_FORMAT_FUNCTION(2,3);
+ (void)w:(nonnull ULogTag *)tag :(nonnull NSString *)msg;

/**
 Send a notice log.

 @param tag tag use to log.
 @param msg message to log.
 */
+ (void)n:(nonnull ULogTag *)tag msg:(nonnull NSString *)msg, ... NS_FORMAT_FUNCTION(2,3);
+ (void)n:(nonnull ULogTag *)tag :(nonnull NSString *)msg;

/**
 Send an informational log.

 @param tag tag use to log.
 @param msg message to log.
 */
+ (void)i:(nonnull ULogTag *)tag msg:(nonnull NSString *)msg, ... NS_FORMAT_FUNCTION(2,3);
+ (void)i:(nonnull ULogTag *)tag :(nonnull NSString *)msg;

/**
 Send a debug log.

 @param tag tag use to log.
 @param msg message to log.
 */
+ (void)d:(nonnull ULogTag *)tag msg:(nonnull NSString *)msg, ...;
+ (void)d:(nonnull ULogTag *)tag :(nonnull NSString *)msg;

/**
 Set the minimum level to log for a tag.

 @param minLevel the minimum level to log.
 @param tagName tag name.
 */
+ (int)setLogLevel:(Level) minLevel tagName:(nonnull NSString *)tagName ;

/**
 Check if the critical log will be logged for this tag.

 @param tag tag to check.
 @return true if critical log is enabled otherwise false.
 */
+ (BOOL)c:(nonnull ULogTag *)tag;

/**
 Check if the error log will be logged for this tag.

 @param tag tag to check.
 @return true if error log is enabled otherwise false.
 */
+ (BOOL)e:(nonnull ULogTag *)tag;

/**
 Check if the warning log will be logged for this tag.

 @param tag tag to check.
 @return true if warning log is enabled otherwise false.
 */
+ (BOOL)w:(nonnull ULogTag *)tag;

/**
 Check if the informational log will be logged for this tag.

 @param tag tag to check.
 @return true if informational log is enabled otherwise false.
 */
+ (BOOL)i:(nonnull ULogTag *)tag;

/**
 Check if the notice log will be logged for this tag.

 @param tag tag to check.
 @return true if notice log is enabled otherwise false.
 */
+ (BOOL)n:(nonnull ULogTag *)tag;

/**
 Check if the debug log will be logged for this tag.

 @param tag tag to check.
 @return true if debug log is enabled otherwise false.
 */
+ (BOOL)d:(nonnull ULogTag *)tag;
@end

/** Log error */
#define LOG_ERR(_err) \
    do { \
        int err_LOG_ERR_ = (_err); \
        [ULog e:TAG msg:@"%s:%d: err=%d(%s)", __func__, __LINE__, \
                err_LOG_ERR_, strerror(-err_LOG_ERR_)]; \
    } while(0)

/** Log error if condition fails */
#define LOG_IF_FAILED(_cond, _err) \
    do { \
        if (!(_cond)) { \
            LOG_ERR(_err); \
        } \
    } while (0)

/** Log if error (err < 0) */
#define LOG_IF_ERR(_err) \
    do { \
        int err_LOG_IF_ERR_ = (_err); \
        LOG_IF_FAILED(err_LOG_IF_ERR_ >= 0, err_LOG_IF_ERR_); \
    } while (0)

/** Log error if condition fails and return */
#define RETURN_IF_FAILED(_cond, _err) \
    do { \
        if (!(_cond)) { \
            LOG_ERR(_err); \
            return; \
        } \
    } while (0)

/** Log and return if error (err < 0) */
#define RETURN_IF_ERR(_err) \
    do { \
        int err_RETURN_IF_ERR_ = (_err); \
        RETURN_IF_FAILED(err_RETURN_IF_ERR_ >= 0, err_RETURN_IF_ERR_); \
    } while (0)

/** Log error if condition fails and goto label */
#define GOTO_IF_FAILED(_cond, _err, _label) \
    do { \
        if (!(_cond)) { \
            LOG_ERR(_err); \
            goto _label; \
        } \
    } while (0)

/** Log and goto label if error (err < 0) */
#define GOTO_IF_ERR(_err, _label) \
    do { \
        int err_GOTO_IF_ERR_ = (_err); \
        GOTO_IF_FAILED(err_GOTO_IF_ERR_ >= 0, err_GOTO_IF_ERR_, _label); \
    } while(0)

/** Log error and return error */
#define RETURN_ERR(_err) \
    do { \
        int err_RETURN_ERR_ = (_err); \
        LOG_ERR(err_RETURN_ERR_); \
        return err_RETURN_ERR_; \
    } while (0)

/** Log error if condition fails and and return error */
#define RETURN_ERRNO_IF_FAILED(_cond, _err) \
    do { \
        int err_RETURN_ERRNO_IF_FAILED_ = (_err); \
        if (!(_cond)) { \
            LOG_ERR(err_RETURN_ERRNO_IF_FAILED_); \
            return err_RETURN_ERRNO_IF_FAILED_; \
        } \
    } while (0)

/** Log and return error if error (err < 0) */
#define RETURN_ERRNO_IF_ERR(_err) \
    do { \
        int err_RETURN_ERRNO_IF_ERR_ = (_err); \
        RETURN_ERRNO_IF_FAILED(err_RETURN_ERRNO_IF_ERR_ >= 0, \
                err_RETURN_ERRNO_IF_ERR_); \
    } while (0)

/** Log error if condition fails and return a value */
#define RETURN_VAL_IF_FAILED(_cond, _err, _val) \
    do { \
        if (!(_cond)) { \
            LOG_ERR(_err); \
            return (_val); \
        } \
    } while (0)

/** Log and return a value if error (err < 0) */
#define RETURN_VAL_IF_ERR(_err, _val) \
    do { \
        int err_RETURN_VAL_IF_ERR_ = (_err); \
        RETURN_VAL_IF_FAILED(err_RETURN_VAL_IF_ERR_ >= 0, \
                err_RETURN_VAL_IF_ERR_, (_val)); \
    } while (0)
