//
//  ViewController.h
//  Peeko
//
//  Created by Shahruk Khan on 4/23/14.
//  Copyright (c) 2014 Shahruk Khan and Minling Zhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField *EmailLoginField;
@property (strong, nonatomic) IBOutlet UITextField *PasswordLoginField;

- (IBAction)LoginButtonPressed:(id)sender;
@end
