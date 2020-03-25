//
//  XIdentity.h
//  XTestApp
//
//  Created by Woncheol Heo on 2019. 4. 1..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XIdentify : NSObject

@property (nonatomic) NSMutableDictionary *userPropertyOperations;

- (void)set:(NSString *)key value:(id)value;
- (void)setOnce:(NSString *)key value:(id)value;
- (void)unset:(NSString *)key;
- (void)add:(NSString *)key increment:(NSInteger)increment;
- (void)append:(NSString *)key value:(id)value;
- (void)prepend:(NSString *)key value:(id)value;

@end

NS_ASSUME_NONNULL_END
