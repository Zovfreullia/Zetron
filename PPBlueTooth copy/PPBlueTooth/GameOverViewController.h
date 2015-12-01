//
//  GameOverViewController.h
//  PPBlueTooth
//
//  Created by Jamaal Sedayao on 11/21/15.
//  Copyright © 2015 apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@interface GameOverViewController : UIViewController

@property (nonatomic,strong) MCSession *session;
@property (nonatomic) NSString *gameEndStatus;
@property (strong, nonatomic) IBOutlet UILabel *gameEndLabel;

@end
