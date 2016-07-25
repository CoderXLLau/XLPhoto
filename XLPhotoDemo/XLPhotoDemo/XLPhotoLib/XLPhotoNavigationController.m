//
//  XLPhotoNavigationController.m
//  XLPhotoTool
//
//  Created by Liushannoon on 16/5/24.
//  Copyright © 2016年 Liushannoon. All rights reserved.
//

#import "XLPhotoNavigationController.h"

@interface XLPhotoNavigationController ()

@end

@implementation XLPhotoNavigationController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setNavigationBarHidden:YES animated:YES];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

@end
