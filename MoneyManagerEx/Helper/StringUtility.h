//
//  StringUtility.h
//  MoneyManagerEx
//
//  Created by taotao on 16/7/9.
//  Copyright © 2016年 taotao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StringUtility : NSObject

+ (NSString *)getPinYinFromString:(NSString *)str;

+ (NSString *)getFirstLetterOfChineseString:(NSString *)str;

@end
