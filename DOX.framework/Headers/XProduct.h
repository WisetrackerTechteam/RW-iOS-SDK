//
//  Product.h
//  XTestApp
//
//  Created by Woncheol Heo on 2019. 4. 2..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XProperties.h"
NS_ASSUME_NONNULL_BEGIN

@interface XProduct : NSObject

@property (nonatomic) NSString *pg1;
@property (nonatomic) NSString *pg2;
@property (nonatomic) NSString *pg3;
@property (nonatomic) NSString *pg4;
@property (nonatomic) NSString *pnc;
@property (nonatomic) double amt;
@property (nonatomic) NSInteger ea;
@property (nonatomic) NSString *ordPno;
@property (nonatomic) XProperties *xProperties;

- (void)setFirstCategory:(NSString *)pg1;
- (void)setSecondCategory:(NSString *)pg2;
- (void)setThirdCategory:(NSString *)pg3;
- (void)setDetailCategory:(NSString *)pg4;
- (void)setProductCode:(NSString *)pnc;
- (void)setOrderAmount:(double)amt;
- (void)setOrderQuantity:(NSInteger)ea;
- (void)setProductOrderNo:(NSString *)productOrderNo;
- (NSMutableDictionary *)convertToProductDictionary;
- (void)setProperties:(XProperties *)xProperties;
@end

NS_ASSUME_NONNULL_END
