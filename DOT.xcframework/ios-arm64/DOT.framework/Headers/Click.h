//
//  Click.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 8. 6..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CustomValue.h"
#import "Product.h"

@interface Click : NSObject

@property (nonatomic) CustomValue *customValue;
@property (nonatomic) Product *product;
@property (nonatomic) NSMutableArray <Product *> *productList;
@property (nonatomic) NSString *ckTp;
@property (nonatomic) NSString *ckData;
@property (nonatomic) NSMutableArray <NSMutableDictionary *> *productDicList;

- (void)setSearchClickEvent:(NSString *)value;
- (void)setClickEvent:(NSString *)value;
- (void)setPushClickEvent:(NSString *)value;
- (void)addCartProduct:(Product *)product;
- (void)addCartProductList:(NSMutableArray <Product *> *)productList;
@end

