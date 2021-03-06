//
//  CBAddRecipeViewController.h
//  CookBook
//Email: xiaoxida@usc.edu
//  Created by Xiaoxi Dai on 12/2/17.
//  Copyright © 2017 Xiaoxi Dai. All rights reserved.
//

#import <UIKit/UIKit.h>

//for transfer data between addviewcontroller and tableviewcontroller
typedef void(^AddRecipe)(NSString *title, NSString *content, NSString *image);

@interface CBAddRecipeViewController : UIViewController
@property (copy, nonatomic) AddRecipe addRecipe;
@property (strong, nonatomic) NSString* titleText;
@property (strong, nonatomic) NSString* contentText;    
@property (strong, nonatomic) NSString* imageText;  //the name of the imagefile
@end
