//
//  Push.h
//  DOT
//
//  Created by Woncheol Heo on 2019. 4. 17..
//  Copyright © 2019년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Push : NSObject

@property (nonatomic) NSString *_pushId;
@property (nonatomic) NSString *_campaignId;
@property (nonatomic) NSString *_title;
@property (nonatomic) NSString *_body;
@property (nonatomic) NSInteger _expireTime;

+ (Push *)sharedInstance;
- (void)setPushId:(NSString *)pushId;
- (void)setCampaignId:(NSString *)campaignId;
- (void)setTitle:(NSString *)title;
- (void)setBody:(NSString *)body;
- (void)setExpireTime:(NSInteger)expireTime;
@end

NS_ASSUME_NONNULL_END
