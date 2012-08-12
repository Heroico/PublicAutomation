//
//  UIAutomationBridge.h
//  PublicAutomation
//
//  Created by Pete Hodgson on 8/12/12.
//  Copyright (c) 2012 ThoughtWorks. All rights reserved.
//
#import "UIAutomation.h"

@interface UIAutomationBridge : NSObject

+ (BOOL) checkForKeyboard;

+ (UIASyntheticEvents *) uia;

@end
