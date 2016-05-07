//
//  ViewController.m
//  LSActionSheet
//
//  Created by LiuShuang on 16/5/7.
//  Copyright © 2016年 LiuShuang. All rights reserved.
//

#import "ViewController.h"
#import "LSActionSheet.h"

@interface ViewController ()<LSActionSheetDelegate>

@property (nonatomic, strong) NSArray *dataArray;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

#pragma mark - 按钮事件 监听
- (IBAction)actionSheetBtnAction:(UIButton *)sender {
    
    LSActionSheet *actionSheet = [LSActionSheet showActionSheetWithDelegate:self cancleButtonTitle:@"取消" itemsButtonTitle:self.dataArray];
    [actionSheet show];
}

#pragma mark - LSActionSheetDelegate
- (void)LSActionSheet:(LSActionSheet *)LSActionSheet didClickButtonAtIndex:(NSInteger)index {
    
    NSLog(@"%ld",index);
}

#pragma mark - lazy
- (NSArray *)dataArray {
    
    if (_dataArray == nil) {
        self.dataArray = @[@"请选择服务",@"预约专家",@"主刀医生",@"病情分析",@"会诊服务",@"离院跟踪"];
    }
    return _dataArray;
}

@end
