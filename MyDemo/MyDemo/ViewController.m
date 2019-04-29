//
//  ViewController.m
//  MyDemo
//
//  Created by Hui Liu on 2019/04/29.
//  Copyright © 2019 far. All rights reserved.
//

#import "ViewController.h"
#import "Person.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    Person *p = [Person new];
    p.name = @"小米";
    [p doSomething];
}


@end
