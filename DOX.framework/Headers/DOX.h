//
//  DOX.h
//  DOX
//
//  Created by Woncheol Heo on 2019. 4. 9..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <Foundation/Foundation.h>
#import "XIdentify.h"
#import "XEvent.h"
#import "XConversion.h"
#import "XRevenue.h"
#import "XProduct.h"
#import "XProperties.h"
#import "XArray.h"

//! Project version number for DOX.
FOUNDATION_EXPORT double DOXVersionNumber;

//! Project version string for DOX.
FOUNDATION_EXPORT const unsigned char DOXVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DOX/PublicHeader.h>

@interface DOX : NSObject

//+ (void)initialization;
+ (void)setUserId:(NSString *)userId;
+ (void)setDeepLink:(NSString *)referrer;
+ (void)setPushId:(NSString *)pid;
+ (void)logEvent:(XEvent *)event;
+ (void)userIdentify:(XIdentify *)identify;
+ (void)groupIdentify:(NSString *)key value:(NSString *)value identify:(XIdentify *)identify;
+ (void)logConversion:(XConversion *)conversion;
+ (void)logRevenue:(XRevenue *)revenue;
+ (void)changeKeyInSessionDataWith:(NSString *)oldKey newKey:(NSString *)newKey;

//wkWebView 사용함수
//+ (void)setWebView:(UIWebView *)webView reqeust:(NSURLRequest *)request;
+ (void)setWkWebView:(WKWebView *)wkWebView reqeust:(NSURLRequest *)request;
//+ (void)setJavascriptInjectionInWebView:(UIWebView *)webView;
+ (void)setJavascriptInjectionInWkWebView:(WKWebView *)wkWebView;

//unity 사용함수
+ (void)userIdentifyWith:(NSDictionary *)identify;
+ (void)groupIdentifyWith:(NSDictionary *)group identify:(NSDictionary *)identify;
+ (void)logEventWith:(NSDictionary *)event;
+ (void)logConversionWith:(NSDictionary *)conversion;
+ (void)logRevenueWith:(NSDictionary *)revenue;


@end

