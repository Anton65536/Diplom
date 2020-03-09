//
//  APViewController.h
//  Diploma
//
//  Created by Антон Пераш on 8/16/19.
//  Copyright © 2019 Антон Пераш. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface APViewController : UIViewController

@property(weak,nonatomic) UITextField *cityNameProperty;
@property(weak,nonatomic) UILabel* previousCityProperty;
@property(weak,nonatomic) UILabel* letterLabelProperty;
@property(weak,nonatomic) UIButton* buttonProperty;
@property(weak,nonatomic) UIButton* buttonHelpWithCityProperty;
@property(strong,nonatomic) NSMutableSet *citiesSet;
@property(strong,nonatomic) NSMutableSet *usedCitiesSet;
@property(assign,nonatomic) NSUInteger countdownForHelpAttempts;
@property(strong,nonatomic) UILabel *cityInfo;
@property(strong,nonatomic) NSDictionary *citiesAndDescription;

@end

NS_ASSUME_NONNULL_END

