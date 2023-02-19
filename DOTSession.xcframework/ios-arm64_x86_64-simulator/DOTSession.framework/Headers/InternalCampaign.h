//
//  InternalCampaign.h
//  DOTSession
//
//  Created by Woncheol Heo on 2020/08/13.
//  Copyright © 2020 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InternalCampaign : NSObject
@property (nonatomic) NSString* inrc1;
@property (nonatomic) NSInteger inrcDt1;

@property (nonatomic) NSString* inrc2;
@property (nonatomic) NSInteger inrcDt2;

@property (nonatomic) NSString* inrc3;
@property (nonatomic) NSInteger inrcDt3;

@property (nonatomic) NSString* inrc4;
@property (nonatomic) NSInteger inrcDt4;

@property (nonatomic) NSString* inrc5;
@property (nonatomic) NSInteger inrcDt5;

@property (nonatomic) NSString* inrc6;
@property (nonatomic) NSInteger inrcDt6;

@property (nonatomic) NSString* inrc7;
@property (nonatomic) NSInteger inrcDt7;

@property (nonatomic) NSString* inrc8;
@property (nonatomic) NSInteger inrcDt8;

@property (nonatomic) NSString* inrc9;
@property (nonatomic) NSInteger inrcDt9;

@property (nonatomic) NSString* inrc10;
@property (nonatomic) NSInteger inrcDt10;

- (void)setInternalCampaign1:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign2:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign3:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign4:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign5:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign6:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign7:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign8:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign9:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
- (void)setInternalCampaign10:(NSString *)inrcStr inrcPeriod:(NSInteger)inrcPeriod;
@end
