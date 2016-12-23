//
//  Header.h
//  IOSHorienMallProject
//
//  Created by 敲代码mac1号 on 2016/12/22.
//  Copyright © 2016年 敲代码mac1号. All rights reserved.
//

#ifndef Header_h
#define Header_h



#define AColor(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]

#define Color(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]

#define kCOLOR_HEX(hexValue) [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 green:((float)((hexValue & 0xFF00) >> 8))/255.0 blue:((float)(hexValue & 0xFF))/255.0 alpha:1.0]


#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

#define APPGreenColor Color(14 , 178, 181)

#define TheW [UIScreen mainScreen].bounds.size.width

#define TheH [UIScreen mainScreen].bounds.size.height

#define MyLog(...) NSLog(__VA_ARGS__)

#define userDef [NSUserDefaults standardUserDefaults]


// Storyboard通过名字获取
#define kStoryboard(StoryboardName)     [UIStoryboard storyboardWithName:StoryboardName bundle:nil]

// AppDelegate
#define kAppDelegate ((AppDelegate*)([UIApplication sharedApplication].delegate))

#pragma mark - 定义字体大小
#define kFONT_TITLE(X)     [UIFont systemFontSize:X]


#pragma mark - GCD
#define BACK(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define MAIN(block) dispatch_async(dispatch_get_main_queue(),block)

// Docment文件夹目录
#pragma mark - Docment文件夹目录
#define kDocumentPath NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject

#endif /* Header_h */
