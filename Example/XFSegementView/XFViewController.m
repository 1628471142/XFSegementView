//
//  XFViewController.m
//  XFSegementView
//
//  Created by 953894805@qq.com on 05/30/2019.
//  Copyright (c) 2019 953894805@qq.com. All rights reserved.
//

#import "XFViewController.h"
#import <XFSegementView.h>
@interface XFViewController ()

@end

@implementation XFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    XFSegementView * segementView = [[XFSegementView alloc] initWithFrame:CGRectMake(0, 100, 300, 40)];
    segementView.titleArray = @[@"小说",@"情感",@"家庭",@"生活",@"职场"];
    segementView.scrollLineWidth = 40;
    segementView.separateLine.hidden = YES;
    segementView.titleSelectedColor = [UIColor redColor];
    [self.view addSubview:segementView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
