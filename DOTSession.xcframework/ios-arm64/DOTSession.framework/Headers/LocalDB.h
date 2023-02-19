//
//  LocalDB.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 11..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CouchbaseLite/CouchbaseLite.h"

//#import "CouchbaseLite.h"
@interface LocalDB : NSObject

@property ( nonatomic) CBLDatabase *database;

+ (instancetype)sharedInstance;

@end
