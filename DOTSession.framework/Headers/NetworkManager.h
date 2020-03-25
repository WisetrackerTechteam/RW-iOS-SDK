//
//  NetworkManager.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 30..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CompletionBlock)(BOOL isSuccess, NSData *data, id respons);

@interface NetworkManager : NSObject
@property (nonatomic) NSDictionary *dotAuthorizationKey;
@property (nonatomic) NSString *DOTApiUrl;

- (void)requestFingerPrintWithWtno:(NSInteger)wtno firstExcuteYN:(BOOL)firstExcuteYN completion:(CompletionBlock)completion;- (void)requestAccessTokenWithServiceNumber:(NSInteger)serviceNumber package:(NSString *)pagckage completion:(CompletionBlock)completion;
- (void)sendDocument:(NSString *)fianlJsonListString completion:(CompletionBlock)completion;
- (void)sendErrorLogWithErrParams:(NSMutableDictionary *)errParams completion:(CompletionBlock)completion;
- (void)receiveNotificationWithParams:(NSMutableDictionary *)params completion:(CompletionBlock)completion;
@end




