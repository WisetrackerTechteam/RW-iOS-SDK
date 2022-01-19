//
//  SessionController.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 9..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SessionJson.h"
#import "LocalDB.h"
@interface SessionController : NSObject

@property (nonatomic) SessionJson *sessionJson;
@property (nonatomic) CBLDatabase *database;
@property (nonatomic) CBLMutableDocument *behaviorDoc;
@property (nonatomic) CBLMutableDocument *enviromentDoc;

- (instancetype)init;
- (void)updateUdVt;
- (void)updateLtvt;
- (void)updateLtVi;

// 일/주/월순수 체크
- (void)updateIsDf;
- (void)updateIsWf;
- (void)updateIsMf;
- (void)updateIsWfUs;

//재방문 체크
- (void)updateUdRvnc;
- (void)checkToResetUdRvnc;
- (void)updateLtRvnc;

- (void)updateCsRvnVsWithRevenueJsonVtTz:(NSTimeInterval)revenueJsonVtTz;
- (void)updateLtrvnWithRevenuJsonProducts:(id)productList;

- (void)updateLtrvni;

- (void)updateLastOrderNoWithOrderNo:(NSString *)orderNo;
- (void)updateFirstOrd;
- (void)resetFirstOrd;
- (void)resetLtRvnVt;
- (void)updateLtRvnVt;

- (void)updatePiTraceWithPi:(NSString *)pi;

- (void)saveRecentSessionTimeSec;
- (void)saveEnviromentData;
- (void)saveAppInfo:(NSDictionary *)appInfo;

- (void)updateIsVisitNew;
- (void)resetAboutNewVisitInfo;

- (void)saveSessionExpireTime;

- (void)resetSid;
- (void)resetVtTz;
- (void)resetIrUpdate;
- (void)resetDrUpdate;
- (void)resetAidChange;
- (void)resetOpenDl;

- (void)resetPageKey;

- (void)resetSaveToken;
- (void)resetUptAfv;

// InappMessage
- (void)updateAlreadySeenMessageId:(NSString *) alreadySeenMeesageId;
- (void)updateInamId:(NSString *)inamId;
- (void)updateInamClkTime:(long long)inamClkTime;
- (void)updateInamExpireTime:(long long)inamClkTime;

// iOS 14.5 대응
- (void)updateSesssionAboutEnvironment;

// skadnework update conversion value
- (void)updateSkAdadCurValue:(NSInteger)conversionValue;
@end



