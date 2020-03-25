//
//  User.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 6. 22..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject
@property (nonatomic) NSString *member;
@property (nonatomic) NSString *gender;
@property (nonatomic) NSString *age;
@property (nonatomic) NSString *attribute1;
@property (nonatomic) NSString *attribute2;
@property (nonatomic) NSString *attribute3;
@property (nonatomic) NSString *attribute4;
@property (nonatomic) NSString *attribute5;
@property (nonatomic) NSString *memberGrade;
@property (nonatomic) NSString *memberId;
@property (nonatomic) NSString *isLogin;

- (void)setUser;
@end
