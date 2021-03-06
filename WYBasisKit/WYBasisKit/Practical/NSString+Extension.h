//
//  NSString+Extension.h
//  WYBasisKit
//
//  Created by jacke-xu on 17/2/12.
//  Copyright © 2017年 com.jacke-xu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Extension)

/** 获取手机号运营商 */
+ (NSString *)mobilePhoneOperators:(NSString *)string;

/** 根据银行卡号获取所属银行 */
+ (NSString *)getBankName:(NSString *)string;

/** 返回一个计算好的字符串的高度和宽度 */
- (CGSize)boundingRectWithSize:(CGSize)size withFont:(UIFont *)font lineSpacing:(NSInteger)lineSpacing;

/** 将中文转换成UTF8编码格式 */
+ (NSString *)UTF8StrFromChinese:(NSString *)chineseStr;

/** 将UTF8编码解码 */
+ (NSString *)chineseStrFromUTF8Str:(NSString *)UTF8Str;

/** 时间戳--->年月日 小时-分 */
+ (NSString *)convertToDateTime:(NSString *)timestamp;

/** 时间戳--->年月日 小时-分-秒 */
+ (NSString *)convertToDateTimer:(NSString *)timestamp;

/** 时间戳--->日期 */
+ (NSString *)convertToDate:(NSString *)timestamp;

//** 时间戳--->时间 */
+ (NSString *)convertToTime:(NSString *)timestamp;

/** 时间---->时间戳 */
+ (NSString *)convertTotimeSp:(NSString *)timeStr;

/**
 *  获得与当前时间的差距
 */
+ (NSString *)timeDifferenceWithNowTimer:(NSString *)timerSp;

/** 获取手机时间戳 */
+ (NSString *)getCurrentTimeSp;

/** 获取网路时间戳*/
+ (NSString *)getNetworkTimeSp;

/** 图片转字符串 */
+ (NSString *)UIImageToBase64Str:(UIImage *)image;

/** 去除字符串中的空格 */
+ (NSString *)wipeSpaceFromStr:(NSString *)str;

/** 去除字符串两端的空格 */
+ (NSString *)wipeBothEndsSpaceFromStr:(NSString *)str;

/**
 
 *  去除字符串中的特定符号
 
 *  @param str 需要去除指定字符的字符串
 
 *  @param appointSymbol  指定的字符,如#、!
 
 *  @param replacement  要替换的字符(可以为空)
 
 */
+ (NSString *)wipeAppointSymbolFromStr:(NSString *)str AppointSymbol:(NSString *)appointSymbol WithStr:(NSString *)replacement;

/** 获取设备ip地址*/
+ (NSString *)getDeviceIpAddress;

/**
 返回一个包含匹配正则表达式的新字符串替换为模版字符串。
 
 @param regex       正则表达式
 @param options     上报的匹配选项.
 @param replacement 用来替换匹配到的内容.
 @param  string 需要匹配的字符串
 
 @return 返回一个用指定字符串替换匹配字符串后的字符串.
 */
+ (NSString *)stringByReplacingRegex:(NSString *)regex
                             options:(NSRegularExpressionOptions)options
                          withString:(NSString *)replacement content:(NSString *)string;

/**
 匹配正则表达式，并使用匹配的每个对象执行给定的块。
 
 @param regex    正则表达式
 @param options  上报的匹配选项.
 @param block    应用于在数组元素中匹配的块.
 该块需要四个参数:
 match: 匹配的子串.
 matchRange: 匹配选项.
 stop: 一个布尔值的引用。块可以设置YES来停止处理阵列。stop参数是一个唯一的输出。你应该给块设置YES。
 @param  string 需要匹配的字符串
 */
+ (void)enumerateRegexMatches:(NSString *)regex
                      options:(NSRegularExpressionOptions)options
                   usingBlock:(void (^)(NSString *match, NSRange matchRange, BOOL *stop))block content:(NSString *)string;

/**
 获取苹果设备型号
 */
+ (NSString *)appleDiviceType;


/**
 验证非空字符串
 */
+ (NSString *)emptyStr:(NSString *)str;

@end
