//
//  AppDelegate.h
//  MyDemo
//
//  Created by Hui Liu on 2019/04/29.
//  Copyright © 2019 far. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

