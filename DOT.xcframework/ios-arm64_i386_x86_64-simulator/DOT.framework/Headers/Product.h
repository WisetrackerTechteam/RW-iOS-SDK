//
//  Product.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 6. 28..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject

@property (nonatomic) NSString *firstCategory;
@property (nonatomic) NSString *secondCategory;
@property (nonatomic) NSString *thirdCategory;
@property (nonatomic) NSString *detailCategory;
@property (nonatomic) NSString *productCode;
@property (nonatomic) NSString *attribute1;
@property (nonatomic) NSString *attribute2;
@property (nonatomic) NSString *attribute3;
@property (nonatomic) NSString *attribute4;
@property (nonatomic) NSString *attribute5;
@property (nonatomic) NSString *attribute6;
@property (nonatomic) NSString *attribute7;
@property (nonatomic) NSString *attribute8;
@property (nonatomic) NSString *attribute9;
@property (nonatomic) NSString *attribute10;
@property (nonatomic) double orderAmount;
@property (nonatomic) NSInteger orderQuantity;
@property (nonatomic) double refundAmount;
@property (nonatomic) NSInteger refundQuantity;
@property (nonatomic) NSString *productOrderNo;
@property (nonatomic) NSMutableDictionary *optAmt;

- (void)setOptionalAmount:(NSString *)key value:(double)value;

@end



