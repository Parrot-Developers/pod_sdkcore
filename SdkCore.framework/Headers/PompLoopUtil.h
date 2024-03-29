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

/**
 Utility facilitating the use of a pomp_lomp
 */
@interface PompLoopUtil: NSObject

/**
 Constructor
 @param name String Id used in Logs
 @return instancetype or NIL if error
 */
- (nonnull instancetype)initWithName:(nullable NSString *)name NS_DESIGNATED_INITIALIZER;

/**
 Run the Loop.
 The caller must be in the same thread as the one used during the init
 */
- (void)runLoop;

/**
Stop the loop
The caller must be in the same thread as the one used during the init
 */
- (void)stopRun;

/**
 Queue a block to be executed in the loop thread

 @param block The block to execute.
 */
- (void)dispatch:(void (^ _Nonnull)(void))block;

/**
 Queue a block to be executed in the loop thread

 @param block The block to execute.
 @param queueAssert `YES` to assert than the current queue differs from the pomp loop queue.
 */
- (void)dispatch:(void (^ _Nonnull)(void))block queueAssert:(BOOL)queueAssert;

/**
 Queue a block to be executed in the loop thread and wait until execution

 @param block The block to execute.
 */
- (void)dispatch_sync:(void (^ _Nonnull)(void))block;

/**
 Retrieves the internal pomp loop
 */
@property (nonatomic, readonly, nonnull) struct pomp_loop *internalPompLoop NS_RETURNS_INNER_POINTER;

@end
