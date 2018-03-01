//
//  YWLogisticsView.h
//  YWLogisticsQueryDemo
//
//  Created by Candy on 17/12/19.
//  Copyright © 2017年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "YWTableHeaderView.h"
#import "YWLogisticCellModel.h"
#import "YWLogisticModel.h"
#import "YWConfigFile.h"

@interface YWLogisticsView : UIView

@property (nonatomic, strong) NSArray                   * dataSource;

@property (nonatomic, strong) YWLogisticModel           * logisticModel;

- (instancetype)initWithDataSource:(NSArray*)array;
- (void)reloadDataWithDataSource:(NSArray *)array;

@end
