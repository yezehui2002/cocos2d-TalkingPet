//
//  AppDelegate.h
//  TalkingPet
//
//  Created by Alexey Kinyov on 10/4/11.
//  Copyright 05Bit 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
