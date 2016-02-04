//
//  ioscustomcamViewController.h
//  ioscustomcam
//
//  Created by Wisemen on 4/02/2016.
//
//
#import <UIKit/UIKit.h>

// We can't import the CustomCamera class because it would make a circular reference, so "fake" the existence of the class like this:
@class ioscustomcam;

@interface ioscustomcamViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (IBAction)takePhotoButtonPressed:(id)sender forEvent:(UIEvent*)event;
// Action method
//-(IBAction) takePhotoButtonPressed:(id)sender forEvent:(UIEvent*)event;

// Declare some properties (to be explained soon)
@property (strong, nonatomic) ioscustomcam* plugin;
@property (strong, nonatomic) UIImagePickerController* picker;

@end