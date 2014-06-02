//
//  ViewController.h
//  Asynchronous Get
//
//  Created by shu ghosh on 4/14/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <NSURLConnectionDataDelegate>

{NSMutableData *_responseData;

    __weak IBOutlet UIImageView *imageviewer;
}

@end
