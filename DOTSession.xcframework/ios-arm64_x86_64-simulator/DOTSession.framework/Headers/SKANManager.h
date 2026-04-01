//
//  SKANManager.h
//  DOTSession
//
//  Created by kimkunsoo on 2023/01/25.
//  Copyright © 2023 wisetracker. All rights reserved.
//
#import "SessionController.h" 
@interface SKANManager : NSObject
    +(void)updatePostbackConversionValue:(NSDictionary *)response sessionController:(SessionController *)sessionController;
@end
