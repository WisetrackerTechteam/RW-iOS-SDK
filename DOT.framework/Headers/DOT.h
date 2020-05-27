//
//  DOT.h
//  DOT
//
//  Created by Woncheol Heo on 2019. 3. 28..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Purchase.h"
#import "Click.h"
#import "Page.h"
#import "Conversion.h"
#import "Push.h"

#import <DOTSession/DOTSession.h>
#import "KeyConstant.h"



//! Project version number for DOTAdvance.
FOUNDATION_EXPORT double DOTAdvanceVersionNumber;

//! Project version string for DOTAdvance.
FOUNDATION_EXPORT const unsigned char DOTAdvanceVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DOTAdvance/PublicHeader.h>


@interface DOT : DOTSession
@property (class) KeyConstant *Key;
//SDK init함수
//+ (void)initailization;

//native 사용함수(deprecated)
//+ (void)setPurchase:(Purchase *)purchase;
//+ (void)setConversion:(Conversion *)conversion;
//+ (void)setPage:(Page *)page;
//+ (void)setClick:(Click *)

// 생명주기 관련 함수
+ (void)onStartPage;
+ (void)onStopPage;
+ (void)enterForeground;
+ (void)enterBackground;

//Push분석 함수
+ (void)setPushClick:(NSDictionary *)userInfo application:(UIApplication *)application;

//webview, wkWebView 사용함수
//+ (void)setWebView:(UIWebView *)webView reqeust:(NSURLRequest *)request;
+ (void)setWkWebView:(WKWebView *)wkWebView reqeust:(NSURLRequest *)request;
+ (void)onStartWebPage;
+ (void)onStopWebPage;
//+ (void)setJavascriptInjectionInWebView:(UIWebView *)webView;
+ (void)setJavascriptInjectionInWkWebView:(WKWebView *)wkWebView;

//RW New API
+ (void)logEvent:(NSMutableDictionary *)event;
+ (void)logClick:(NSMutableDictionary *)click;
+ (void)logPurchase:(NSMutableDictionary *)revenue;
+ (void)logScreen:(NSMutableDictionary *)screen;

@end
