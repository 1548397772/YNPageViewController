//
//  YNPageScrollMenuView.h
//  YNPageViewController
//
//  Created by ZYN on 2018/4/22.
//  Copyright © 2018年 yongneng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YNPageConfigration;

@protocol YNPageScrollMenuViewDelegate <NSObject>

@optional

/// 点击item
- (void)pagescrollMenuViewItemOnClick:(UIButton *)label index:(NSInteger)index;

/// 点击Add按钮
- (void)pagescrollMenuViewAddButtonAction:(UIButton *)button;

@end

@interface YNPageScrollMenuView : UIView
/// + 按钮
@property (nonatomic, strong) UIButton *addButton;

+ (instancetype)new UNAVAILABLE_ATTRIBUTE;

- (instancetype)init UNAVAILABLE_ATTRIBUTE;

/**
 初始化YNPageScrollMenuView

 @param frame 大小
 @param titles 标题
 @param configration 配置信息
 @param delegate 代理
 @param currentIndex 当前选中下标
 */
+ (instancetype)pagescrollMenuViewWithFrame:(CGRect)frame
                                     titles:(NSArray *)titles
                               configration:(YNPageConfigration *)configration
                                   delegate:(id<YNPageScrollMenuViewDelegate>)delegate
                               currentIndex:(NSInteger)currentIndex;

- (void)adjustItemPositionWithCurrentIndex:(NSInteger)index;

- (void)adjustItemWithProgress:(CGFloat)progress
                     lastIndex:(NSInteger)lastIndex
                  currentIndex:(NSInteger)currentIndex;

- (void)selectedItemIndex:(NSInteger)index
                 animated:(BOOL)animated;

- (void)adjustItemWithAnimated:(BOOL)animated;

- (void)adjustItemAnimate:(BOOL)animated;

@end
