//
//  SessionJson.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 6. 22..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"
#import "LocalDB.h"
@interface SessionJson : NSObject
@property (nonatomic) NSString *sdk_version;
//사용자
@property (nonatomic) NSString *mbr;
@property (nonatomic) NSString *sx;
@property (nonatomic) NSString *ag;
@property (nonatomic) NSString *ut1;
@property (nonatomic) NSString *ut2;
@property (nonatomic) NSString *ut3;
@property (nonatomic) NSString *ut4;
@property (nonatomic) NSString *ut5;
@property (nonatomic) NSString *mbl;
@property (nonatomic) NSString *mbid;
@property (nonatomic) NSString *isLogin;
@property (nonatomic) NSString *loginTp;
@property (nonatomic) NSString *signupTp;

//접속환경
@property (nonatomic) NSString *lng;
@property (nonatomic) NSString *cntr;
@property (nonatomic) NSString *ip;
@property (nonatomic) NSString *tz;
@property (nonatomic) NSString *os;
@property (nonatomic) NSString *osvr;
@property (nonatomic) NSString *sr;
@property (nonatomic) NSString *phone;
@property (nonatomic) NSString *apVr;
@property (nonatomic) NSString *gps;
@property (nonatomic) NSString *cari;
@property (nonatomic) NSInteger isWifi;
@property (nonatomic) double inch;
@property (nonatomic) NSString *plat;
@property (nonatomic) NSString *dSource;

//사용자 식별
@property (nonatomic) NSString *advtId;
@property (nonatomic) NSString *uptAfv;
@property (nonatomic) NSString *keychainUUID;
@property (nonatomic) NSString *imei;
@property (nonatomic) NSString *vendorId;
@property (nonatomic) NSString *uuid;
@property (nonatomic) NSInteger advtFlag;
@property (nonatomic) NSString *aidChange;
@property (nonatomic) NSString *buildMode;
@property (nonatomic) NSString *pkg;
@property (nonatomic) NSString *appId;
//방문행동
//new session후 변경값
@property (nonatomic) NSString *sid;
@property (nonatomic) NSInteger udVt;
@property (nonatomic) NSInteger ltvt;
@property (nonatomic) NSInteger ltVi;

@property (nonatomic) NSString *isVisitNew;
@property (nonatomic) NSString *isDf;
@property (nonatomic) NSString *isWf;
@property (nonatomic) NSString *isMf;
@property (nonatomic) NSString *isWfUs;
@property (nonatomic) NSInteger pageKey;

//구매 이벤트 후 변경값
@property (nonatomic) NSInteger udRvnc;
@property (nonatomic) NSInteger ltRvnc;
@property (nonatomic) NSInteger csRvnVs;
@property (nonatomic) NSInteger ltrvni;
@property (nonatomic) NSString *lastOrderNo;
@property (nonatomic) NSString *firstOrd;
@property (nonatomic) NSInteger ltRvnVt;
@property (nonatomic) NSInteger ltrvn;

//페이지 이벤트 후 변경값
@property (nonatomic) NSString *piTrace;
@property (nonatomic) NSString *isSFail;

//유입경로(광고분석)
//DeepLink
@property (nonatomic) NSString *wts;
@property (nonatomic) NSString *wtm;
@property (nonatomic) NSString *wtc;
@property (nonatomic) NSString *wtw;
@property (nonatomic) NSInteger wtp;
@property (nonatomic) NSString *wtaffid;
@property (nonatomic) NSString *wtbffid;
@property (nonatomic) NSString *wtref;
@property (nonatomic) long long wtclkTime;
@property (nonatomic) NSString *isDrUpdate;
@property (nonatomic) NSString *openDl;
@property (nonatomic) NSString *latestGcmpid;

//Referrer
@property (nonatomic) NSString *its;
@property (nonatomic) NSString *itm;
@property (nonatomic) NSString *itc;
@property (nonatomic) NSString *itw;
@property (nonatomic) NSInteger itp;
@property (nonatomic) NSString *itaffid;
@property (nonatomic) NSString *itbffid;
@property (nonatomic) long long itclkTime;
@property (nonatomic) long long installTime;
@property (nonatomic) NSString *installReferrer;
@property (nonatomic) NSString *isIrUpdate;

//푸시관련 정보
@property (nonatomic) NSString *pushtk;
@property (nonatomic) NSString *pushNo;
@property (nonatomic) long long pushCkTime;
@property (nonatomic) NSInteger pushPeriod;
@property (nonatomic) NSString *pushTitle;
@property (nonatomic) NSString *saveToken;
@property (nonatomic) long long pushExpiredTime;
//App Info
@property (nonatomic) NSString *_wthst;
@property (nonatomic) NSInteger _wtno;
@property (nonatomic) NSInteger _wtUdays;
@property (nonatomic) BOOL _wtDebug;
@property (nonatomic) BOOL _wtUseRetention;
@property (nonatomic) BOOL _wtUseFingerPrint;
@property (nonatomic) NSString *_accessToken;
@property (nonatomic) NSInteger useMode;

//시간
@property (nonatomic) long long vtTz;
@property (nonatomic) NSTimeInterval networkTime;
@property (nonatomic) NSTimeInterval deviceTime;
@property (nonatomic) NSNumber *timeOffset;

//앱 광고
@property (nonatomic) NSDictionary *sarInfo;

//내부캠페인
@property (nonatomic) NSString *inrc1;
@property (nonatomic) long long inrcTime1;
@property (nonatomic) NSInteger inrcDt1;

@property (nonatomic) NSString *inrc2;
@property (nonatomic) long long inrcTime2;
@property (nonatomic) NSInteger inrcDt2;

@property (nonatomic) NSString *inrc3;
@property (nonatomic) long long inrcTime3;
@property (nonatomic) NSInteger inrcDt3;

@property (nonatomic) NSString *inrc4;
@property (nonatomic) long long inrcTime4;
@property (nonatomic) NSInteger inrcDt4;

@property (nonatomic) NSString *inrc5;
@property (nonatomic) long long inrcTime5;
@property (nonatomic) NSInteger inrcDt5;

@property (nonatomic) NSString *inrc6;
@property (nonatomic) long long inrcTime6;
@property (nonatomic) NSInteger inrcDt6;

@property (nonatomic) NSString *inrc7;
@property (nonatomic) long long inrcTime7;
@property (nonatomic) NSInteger inrcDt7;

@property (nonatomic) NSString *inrc8;
@property (nonatomic) long long inrcTime8;
@property (nonatomic) NSInteger inrcDt8;

@property (nonatomic) NSString *inrc9;
@property (nonatomic) long long inrcTime9;
@property (nonatomic) NSInteger inrcDt9;

@property (nonatomic) NSString *inrc10;
@property (nonatomic) long long inrcTime10;
@property (nonatomic) NSInteger inrcDt10;
//네이버 wcslog pairing 분석항목
//@property (nonatomic) NSString *nvr_nnb;
//@property (nonatomic) NSString *nvr_nid_ses;
//@property (nonatomic) NSString *nvr_nwb;
//@property (nonatomic) long long nvr_timestamp;

//인앱메세지
@property (nonatomic) NSString *alreadySeenCampaignId;
@property (nonatomic) NSString *inamId;
@property (nonatomic) long long inamClkTime;
@property (nonatomic) long long inamExpireTime;

// ATTAuthStatus
@property (nonatomic) NSInteger ATTAuthStatus;

//SKAdNetwork conversion value
@property (nonatomic) NSInteger latestSkAdCurValue;

+ (instancetype)sharedInstance;
+ (instancetype)getSharedInstance;
+ (void)clearInstance;
@end








