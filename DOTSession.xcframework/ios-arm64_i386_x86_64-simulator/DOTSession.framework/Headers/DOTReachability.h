//
//  DOTReachability.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 6. 25..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum DOTReachablityType:NSInteger{
    WWAN,
    WiFi,
    NotConnected
} DOTReachablityType;

@interface DOTReachability : NSObject
+ (BOOL)isConnectedToNetwork;
+ (DOTReachablityType)isConnectedToNetworkOfType;
@end
