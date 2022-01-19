//
//  DOTDebugger.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 9. 4..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DOTDebugger : NSObject

+(Boolean)isDebug;
+(void)debugMode:(BOOL)flagDebug;
+(void)adminLog:(NSString*)message;
+(void)log:(NSString*)message;

@end
