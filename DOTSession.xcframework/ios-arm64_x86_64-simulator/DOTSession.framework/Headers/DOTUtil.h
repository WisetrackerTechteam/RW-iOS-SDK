//
//  DOTUtil.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 4..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DOTUtil : NSObject

+ (NSString *)getCurrentDateString;
+ (NSTimeInterval)convertStringToMills:(NSString *)dateString;
+ (NSTimeInterval)currentTimeSec;
+ (NSTimeInterval)currentTimeSecMulti1000;
+ (NSMutableDictionary *)parseUrlString:(NSString *)urlString;
+ (NSTimeInterval)getExpireLongTime:(NSTimeInterval)recentSessionTime type:(NSString *)type;
+ (NSTimeInterval)getExpireLongTimeForWeeklyUSType:(NSTimeInterval)recentSessionTime;
+ (NSTimeInterval)getCurrentNTPTimeSec;
@end
