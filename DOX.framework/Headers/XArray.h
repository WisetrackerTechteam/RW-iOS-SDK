//
//  XArray.h
//  XTestApp
//
//  Created by Woncheol Heo on 2019. 4. 3..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XArray : NSObject
@property (nonatomic) NSMutableArray *XArray;

- (instancetype)init;
- (void)add:(id)value;

@end

NS_ASSUME_NONNULL_END
