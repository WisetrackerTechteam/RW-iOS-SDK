//
//  XProperties.h
//  XTestApp
//
//  Created by Woncheol Heo on 2019. 4. 3..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XProperties : NSObject

@property (nonatomic) NSMutableDictionary *data;

- (instancetype)init;
- (void)set:(NSString *)key value:(id) value;
- (NSString *)convertToJsonString;
- (NSMutableDictionary *)getPropertiesDictionary;

@end

NS_ASSUME_NONNULL_END
