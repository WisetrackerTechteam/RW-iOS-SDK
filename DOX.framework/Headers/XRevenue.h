//
//  XRevenue.h
//  XTestApp
//
//  Created by Woncheol Heo on 2019. 4. 2..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XProduct.h"
#import "XProperties.h"

NS_ASSUME_NONNULL_BEGIN

@interface XRevenue : NSObject

@property (nonatomic) NSString *_ordNo;
@property (nonatomic) NSString *_eventType;
@property (nonatomic) NSString *_curcy;
//@property (nonatomic) XProduct *product;
@property (nonatomic) NSMutableArray <NSMutableDictionary *> *productDicList;
@property (nonatomic) XProperties *xProperties;
@property (nonatomic) NSMutableDictionary *entireJson;
@property (nonatomic) NSMutableDictionary *revenueJsonDict;

- (void)setOrdNo:(NSString *)ordNo;
- (void)setEventType:(NSString *)eventType;
- (void)setCurcy:(NSString *)curcy;
- (void)setProperties:(XProperties *)xProperties;
- (NSDictionary *)convertToRevenueDictionary;
- (void)addProduct:(XProduct *)product;
- (void)setProductList:(NSMutableArray<XProduct *> *)productList;


@end

NS_ASSUME_NONNULL_END

