//
//  XEvent.h
//  XTestApp
//
//  Created by Woncheol Heo on 2019. 4. 3..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XProperties.h"
NS_ASSUME_NONNULL_BEGIN

@interface XEvent : NSObject

@property (nonatomic) NSString *evtname;
@property (nonatomic) XProperties *xProperties;

- (void)setEventName:(NSString *)name;
- (void)setProperties:(XProperties *)xProperties;
- (NSDictionary *)convertToEventDictionary;


@end

NS_ASSUME_NONNULL_END

