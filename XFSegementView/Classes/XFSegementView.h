//
//  XFSegement.h
//  XFSegementLabel
//
//  Created by 李雪峰 on 16/1/29.
//  Copyright © 2016年 hfuu. All rights reserved.
//


#import <UIKit/UIKit.h>
typedef void (^TouchLabelIndexBlock)(NSInteger index);

@protocol XFTouchLabelDelegate <NSObject>

- (void)touchLabelWithIndex:(NSInteger)index;


@end

@interface XFSegementView : UIView
/**
 *  标题数组
 */
@property ( nonatomic, strong) NSArray *titleArray;

/**
 *  标题颜色
 */
@property ( nonatomic, strong) UIColor *titleColor;

/**
 *  标题被选中的颜色
 */
@property ( nonatomic, strong) UIColor *titleSelectedColor;

/**
 *  滚动条
 */
@property ( nonatomic, strong) UIView *scrollLine;

/**
 *  滚动条颜色
 */
@property ( nonatomic, strong) UIColor *scrollLineColor;

/**
 *  分割线颜色
 */
@property ( nonatomic, strong) UIColor *separateColor;

/**
 *  分割线
 */
@property ( nonatomic, strong) UIView *separateLine;

/**
 *  滚动条高度
 */
@property ( nonatomic, assign) float scrollLineHeight;

/**
 *  滚动条宽度
 */
@property ( nonatomic, assign) float scrollLineWidth;

/**
 *  分割线高度
 */
@property ( nonatomic, assign) float separateHeight;

/**
 *  标题字体大小
 */
@property ( nonatomic, assign) CGFloat titleFont;

/**
 *  标题字体
 */
@property ( nonatomic, strong) UIFont *customFont;

/**
 *  是否有竖直分割线
 */
@property ( nonatomic, assign) BOOL haveRightLine;

@property (nonatomic, assign) NSInteger curIndex;


@property ( nonatomic, weak) id<XFTouchLabelDelegate>touchDelegate;

@property ( nonatomic, copy) TouchLabelIndexBlock touchBlock;

// 根据titleArray配置label
- (void)configSubLabel;

// 选中指定位置label
- (void)selectLabelWithIndex:(NSInteger)index;

// 外部逻辑控制选中指定位置label
- (void)selectLabelNoEventWithIndex:(NSInteger)index;
@end
