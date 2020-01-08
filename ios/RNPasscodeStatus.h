//
//  RNPasscodeStatus.h
//  RNPasscodeStatus
//
//  Created by Mark Vayngrib on 12/27/15.
//  Copyright © 2015 Tradle, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#if __has_include("RCTUtils.h")
#import "RCTUtils.h"
#else
#import <React/RCTUtils.h>
#endif
#import "UIDevice+PasscodeStatus.h"

@interface RNPasscodeStatus : NSObject <RCTBridgeModule>

@end
