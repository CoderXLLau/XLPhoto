//
//  ViewController.m
//  TestLibXLPhoto
//
//  Created by Liushannoon on 16/7/22.
//  Copyright © 2016年 LiuShannoon. All rights reserved.
//

#import "ViewController.h"
#import "XLPhotoTool.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIButton *button = [[UIButton alloc] init];
    [button setTitle:@"整体项目" forState:UIControlStateNormal];
    button.frame = CGRectMake(100, 100, 200, 50);
    button.backgroundColor = [UIColor grayColor];
    [self.view addSubview:button];
    button.backgroundColor = [UIColor greenColor];
    [button addTarget:self action:@selector(clickButton) forControlEvents:UIControlEventTouchUpInside];
}

- (void)clickButton
{
    [[XLPhotoTool sharedPhotoTool] xl_showXLPhotoWithCompleteBlock:^(UIImage *editedImage) {
        self.imageView.image = editedImage;
    } sourceViewController:self needAddDefaultLogo:YES];

}

@end
