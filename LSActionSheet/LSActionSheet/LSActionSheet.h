//
//  LSActionSheet.h
//  BeiYi
//
//  Created by LiuShuang on 16/3/24.
//  Copyright © 2016年 LiuShuang. All rights reserved.
//  自定义actionSheet

#import <UIKit/UIKit.h>
@class LSActionSheet;

@protocol LSActionSheetDelegate <NSObject>

- (void)LSActionSheet:(LSActionSheet *)LSActionSheet didClickButtonAtIndex:(NSInteger)index;

@end

@interface LSActionSheet : UIView

@property (nonatomic, assign) id<LSActionSheetDelegate> delegate;
/**
 *  重写初始化
 *
 *  @param delegate          设置代理
 *  @param cancelButtonTitle 设置取消按钮的title
 *  @param itemsButtonTitle  功能按钮数组
 *
 *  @return LSActionSheet
 */
- (instancetype)initWithDelegate:(id)delegate cancelButtonTitle:(NSString *)cancelButtonTitle itemsButtonTitle:(NSArray *)itemsButtonTitle;
/**
 *  工厂方法
 */
+ (instancetype)showActionSheetWithDelegate:(id)delegate cancleButtonTitle:(NSString *)cancleButtonTitle itemsButtonTitle:(NSArray *)itemsButtonTitle;

/**
 *  调用此方法展示actionSheet
 */
- (void)show;

@end
