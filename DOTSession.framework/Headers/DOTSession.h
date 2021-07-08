//
//  DOT.h
//  DOT
//
//  Created by Woncheol Heo on 2019. 3. 27..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"
#import "Referrer.h"
#import "InternalCampaign.h"
#import "SessionJson.h"
#import "SessionController.h"
#import "Tracker.h"
#import "DOTUtil.h"
#import "NSObject+Builder.h"

#import "NSString+AESCrypt.h"
#import "LocalDB.h"
#import "NHNetworkTime.h"
#import "NetworkManager.h"
#import "DOTReachability.h"
#import "DOTDebugger.h"
#import "NSData+AESCrypt.h"
#import "NHNTLog.h"
#import "NHNetAssociation.h"
#import "NHNetworkClock.h"
#import "NSDate+NetworkClock.h"
#import "KeychainWrapper.h"

//Use UserNotifications with iOS 10+
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 100000
#define IOS10PLUS 1
#import <UserNotifications/UserNotifications.h>

#endif
//! Project version number for DOT.
FOUNDATION_EXPORT double DOTVersionNumber;

//! Project version string for DOT.
FOUNDATION_EXPORT const unsigned char DOTVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DOT/PublicHeader.h>

@interface DOTSession : NSObject

//SDK init함수
+ (void)initialization:(NSDictionary *)launchOptions application:(UIApplication *)application;

//native 사용함수
+ (void)setUser:(User *)user;
+ (void)setUserLogout;
+ (void)setDeepLink:(NSString *)deepLink;
+ (void)setInstallReferrer:(Referrer *)refferer;

// 푸시 관련 함수
//+ (void)setPushId:(NSString *)pushId;
+ (void)setPushToken:(NSString *)deviceToken;
//+ (void)setPushClick:(NSDictionary *)userInfo application:(UIApplication *)application;

//서버전송 함수
+ (void)sendTransaction;

//facebook Referrer체크
+ (void)setFacebookReferrer:(NSString *)fbReferrer;
+ (void)setFacebookreferrerData:(NSURL *)fbURL;

//Optional
+ (NSMutableDictionary *)getSessionData;
+ (BOOL)getDOTSessionInitYN;
+ (BOOL)checkNewSession;

//Internal Campaign Setting
+ (void)setInternalCampaign:(InternalCampaign *)ic;

//IDFA 저장
+ (void)setIDFA:(NSString *)IDFAStr;
+ (void)denyATT;

//attribution Info 가져오기
+ (void)getAttributedInfo:(void (^)(NSDictionary *))handler;

// set ATTrackingManager.AuthorizationStatus
+ (void)setATTAuthorizationStatus:(NSInteger)authStatus;


+ (void)checkDebugMode:(BOOL)debugCheck;
+ (NSString *)parseAttributionLinkToGetDeeplinkUrl:(NSString *)attributionUrl;
@end
