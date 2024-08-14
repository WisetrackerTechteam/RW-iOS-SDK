//
//  CustomWKWebViewConfiguration.h
//  DOTSession
//
//  Created by kimkunsoo on 2023/08/24.
//  Copyright © 2023 wisetracker. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface CustomWKWebViewConfiguration : NSObject {
}
+ (CustomWKWebViewConfiguration *)sharedObject;
- (void)setConfiguration:(WKWebViewConfiguration *) configuration;
- (WKWebViewConfiguration *)getConfiguration;
@property (nonatomic) WKWebViewConfiguration *customWebViewConfiguration;

- (void)setClientUserAgentString:(WKWebView *) wkWebView;
@property (nonatomic) NSString *clientUserAgent;
@end
