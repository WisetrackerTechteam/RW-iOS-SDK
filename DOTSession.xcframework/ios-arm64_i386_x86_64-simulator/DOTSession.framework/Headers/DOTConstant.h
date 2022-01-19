//
//  DOTConstant.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 8. 3..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#define kDOTVersion @"1.1.5"
#define kDOTColletorUrl @"http://trk.analytics.wisetracker.co.kr"

#define DOTLogD(fmt, ...) \
  printf("%s 👉 D%s(%d): [%s]\n", __TIME__, __PRETTY_FUNCTION__, __LINE__, [[NSString stringWithFormat:fmt, ##__VA_ARGS__] UTF8String]);

#define DOTLogI(fmt, ...) \
  printf("%s 😀 I%s(%d): [%s]\n", __TIME__, __PRETTY_FUNCTION__, __LINE__, [[NSString stringWithFormat:fmt, ##__VA_ARGS__] UTF8String]);

#define DOTLogE(fmt, ...) \
  printf("%s 🚨 E%s(%d): [%s]\n", __TIME__, __PRETTY_FUNCTION__, __LINE__, [[NSString stringWithFormat:fmt, ##__VA_ARGS__] UTF8String]);
