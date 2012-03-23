//
//  Exercise14ViewController.h
//  Excercise14
//
//  Created by Gabriel Aliotta on 3/20/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Exercise14ViewController : UIViewController{
    
}


@property (retain, nonatomic) IBOutlet UIButton *sendTweetButton;

- (IBAction)sendTweet:(id)sender;
- (void)checkTweetingStatus;

@end
