//    Copyright (C) 2022 Parrot Drones SAS
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

/**
 Binary log file recorder configuration.
 */
@interface LogBinRecorderConfig: NSObject
/**
 Directory where log files will be recorded.
 The provided `File` must point to an existing and write accessible directory.
 Preferably, the provided directory should be solely dedicated to log recording.
 */
@property (nonatomic, strong, nullable) NSURL *outputDir;
/**
 Maximum space that may be used by recorded log files.
 Value in bytes; 0 disables limit
 Default value 20971520
 */
@property (nonatomic, assign) unsigned long maxUsedSpace;
/**
 Maximum allowed count of recorded log files; 0 disables limit
 */
@property (nonatomic, assign) unsigned int maxLogCount;
/**
 Maximum allowed size for a single log file
 Value in bytes; 0 disables limit
 Default value 262144
 */
@property (nonatomic, assign) unsigned long maxLogSize;
/**
 Minimum free space that must be available on the device for log recording to be allowed.
 Value in bytes; 0 disables limit
 */
@property (nonatomic, assign) unsigned long minFreeSpace;

/**
 Size reserved for a new log file when old files are removed by rotation
 Value in bytes; 0 disables limit
 Default value 262144UL
 */
@property (nonatomic, assign) unsigned long minLogSize;

/**
 Constructor.

 @param directory : Directory where log files will be recorded.
 The provided `File` must point to an existing and write accessible directory.
 Preferably, the provided directory should be solely dedicated to log recording.
 */
- (nonnull instancetype)initWith:(nonnull NSURL *)directory;

@end
