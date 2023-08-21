//
//  Tracker.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 5..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "SessionJson.h"
#import "InternalCampaign.h"

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 100000
#define IOS10PLUS 1
#import <UserNotifications/UserNotifications.h>
#endif

@interface Tracker : NSObject<WKNavigationDelegate, WKUIDelegate>

+ (Tracker *)sharedInstance;

// 고객사에서 자체적으로 사용하는 WKWebViewConfiguration 이 존재하는 경우,
// 해당 WKWebViewConfiguration 객체를 전달 받아 설정하고, 웹뷰를 생성하여 사용할 수 있도록 함수 추가.
+ (Tracker *)sharedInstanceWithWebViewConfiguration:(WKWebViewConfiguration *)webViewConfiguration;

+ (Tracker *)getSharedInstance;

- (void)initEnd:(NSDictionary *)launchOptions;
 
 
- (void)saveUserLoginInfo;
- (void)setUserLogout;
- (BOOL)sendTransaction;

- (void)parseDeepLink:(NSString *)deepLink;
- (void)parseReferrer:(NSString *)referrer;
- (void)parseReferrer2:(NSString *)referrer;

//facebook deferred deep link
- (void)setFacebookreferrerData:(NSURL *)fbURL;

//Notification Info
//- (void)setPushId:(NSString *)pushId;
- (void)saveDeviceToken:(NSString *)deviceToken;
//- (void)setPushTitle:(NSString *)pushTitle;
//- (void)setPushClickTime:(long long)pushCkTime;
//- (void)setPushPeriod:(NSInteger)pushPeriod;
//- (void)setPushClick:(NSDictionary *)userInfo;

//WebTracker 호출함수
- (BOOL)getDOTInitFlag;
- (BOOL)checkNewSession;
- (void)occurNewSessionWithType:(NSInteger)type;
- (void)createSessionJson;
- (void)createEntireJson;
- (void)createEntireJson2;
- (void)setPairingDataWithDictionary:(NSMutableDictionary *)pairingJsonDict;

//DOT SDK 호출함수
- (NSMutableDictionary *)getSessionData;

//Internal Campaign Setting
- (void)setInternalCampaign:(InternalCampaign *)ic;

//IDFA 저장
- (void)setIDFA:(NSString *)IDFAStr;
- (void)denyATT;

- (NSDictionary *)getAttributedInfo;

- (void)setATTAuthorizationStatus:(NSInteger)authStatus;

- (void)checkDebugMode:(BOOL)debugCheck;
- (NSString *)parseAttributionLinkToGetDeeplinkUrl:(NSString *)attributionUrl;

// Whether to allow logEvent function to be called before SDK is initialized
- (void)setBlockingLogEventCallBeforeSdkInitComplete:(BOOL)value;
- (BOOL)getBlockingLogEventCallBeforeSdkInitComplete;
 
@end

