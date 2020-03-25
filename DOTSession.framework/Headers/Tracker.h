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

@interface Tracker : NSObject
  

+ (Tracker *)sharedInstance;
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

@end

