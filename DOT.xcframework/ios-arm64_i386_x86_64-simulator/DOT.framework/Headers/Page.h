//
//  Page.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 3..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Product.h"
#import "CustomValue.h"
@interface Page : NSObject

@property (nonatomic) NSString *keywordCategory;
@property (nonatomic) NSString *keyword;
@property (nonatomic) CustomValue *customValue;
@property (nonatomic) NSString *contentPath;
@property (nonatomic) NSNumber *searchResult;
@property (nonatomic) NSString *pi;
@property (nonatomic) Product *product;
@property (nonatomic) NSMutableDictionary *pagesJsonDict;

- (void)setIdentity:(NSString *)pageIndetity;
- (void)setSearchResultCount:(NSInteger)searchingResult;
@end

