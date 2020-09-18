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

#import "ThermalProcPictureData.h"

/** define a thermal processor to render pictures. */
@interface ThermalProcPicture : NSObject <ThermalProc>

/**
 Renders the thermal view.

 Must be called in the GL context.

 - parameter textureWidth:  GL texture width
 - parameter textureHeight: GL texture height
 - parameter pictureData: picture data
 - parameter sessionMetadata: session metadata
 - parameter statusUpdateBlock: block called to notify the processing status
 */
- (void) render:(int)textureWidth textureHeight:(int)textureHeight
          pictureData:(ThermalProcPictureData *)pictureData
          statusUpdateBlock:(ThermalProcStatusUpdate)statusUpdateBlock
NS_SWIFT_NAME(render(textureWidth:textureHeight:pictureData:_:));

/**
 Starts the renderer.

 Must be called in the GL context.

 TProc renderer instance MUST be disposed after use to release native resources.

 - parameter thermalCamera:  Thermal camera model used
 - parameter textureWidth:  GL texture width
 - parameter textureHeight: GL texture height
 */
- (void) startRenderer:(ThermalProcThermalCamera)thermalCamera
          textureWidth:(int)textureWidth textureHeight:(int)textureHeight
NS_SWIFT_NAME(startRenderer(thermalCamera:textureWidth:textureHeight:));

/**
 Stops the renderer.

 Must be called in the GL context.
 */
- (void) stopRenderer;

/**
 Retrieves whether the renderer is started.

 - returns: 'YES' is the renderer is started.
 */
- (BOOL) rendererIsStarted;

@end
