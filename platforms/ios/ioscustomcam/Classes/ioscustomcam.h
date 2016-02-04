//
//  ioscustomcam.h
//  ioscustomcam
//
//  Created by Wisemen on 4/02/2016.
//
//
#import <Cordova/CDV.h>

// Import the CustomCameraViewController class
#import "ioscustomcamViewController.h"

@interface ioscustomcam : CDVPlugin

// Cordova command method
-(void) openCamera:(CDVInvokedUrlCommand*)command;

// Create and override some properties and methods (these will be explained later)
-(void) capturedImageWithPath:(NSString*)imagePath;
@property (strong, nonatomic) ioscustomcamViewController* overlay;
@property (strong, nonatomic) CDVInvokedUrlCommand* latestCommand;
@property (readwrite, assign) BOOL hasPendingOperation;

@end

