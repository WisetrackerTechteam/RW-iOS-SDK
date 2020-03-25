//
//  XConversion.h
//  XTestApp
//
//  Created by Woncheol Heo on 2019. 4. 2..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XProperties.h"

NS_ASSUME_NONNULL_BEGIN

@interface XConversion : NSObject
@property (nonatomic) NSString *cvrname;
@property (nonatomic) XProperties *xProperties;

- (void)setConversionName:(NSString *)name;
- (void)setProperties:(XProperties *)xProperties;
- (NSDictionary *)convertToConversionDictionary;

@end



NS_ASSUME_NONNULL_END

