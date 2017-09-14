//
//  AppDelegate.m
//  InjectionApp
//
//  Created by Varun Samuel on 9/12/17.
//
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;

@end

@implementation AppDelegate

- (IBAction)open:(id)sender {
    NSOpenPanel * panel = [NSOpenPanel openPanel];
    [panel setAllowsMultipleSelection:NO];
    [panel setCanChooseDirectories:NO];
    [panel setCanChooseFiles:YES];
    [panel setFloatingPanel:YES];
    NSInteger result = [panel runModalForDirectory:NSHomeDirectory() file:nil
                                             types:nil];
    NSURL *fileURL = panel.URL;
    
//    [self.clientController runScript:@"injectSource.pl" withArg:fileURL.path];
    
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {

    // Insert code here to initialize your application
}


- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}


@end
