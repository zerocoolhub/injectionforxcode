//
//  $Id: //depot/injectionforxcode/InjectionPluginLite/Classes/INPluginClientController.h#1 $
//  InjectionPluginLite
//
//  Created by John Holdsworth on 15/01/2013.
//  Copyright (c) 2012 John Holdsworth. All rights reserved.
//
//  Manages interaction with client application and runs UNIX scripts.
//
//  This file is copyright and may not be re-distributed, whole or in part.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
//  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
//  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
//  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import <Cocoa/Cocoa.h>

@class INPluginMenuController;

@interface INPluginClientController : NSObject

@property (nonatomic,retain) IBOutlet NSPanel *consolePanel;
@property (nonatomic,retain) IBOutlet NSPanel *paramsPanel;

@property (nonatomic,retain) NSMutableDictionary *sourceFiles;
@property (nonatomic,retain) NSString *scriptPath;
@property (nonatomic) BOOL withReset;

- (void)alert:(NSString *)msg;
- (void)setConnection:(int)clientConnection;
- (void)runScript:(NSString *)script withArg:(NSString *)selectedFile;
- (void)writeString:(NSString *)string;
- (BOOL)connected;

- (void)awakeFromNib;

@end
