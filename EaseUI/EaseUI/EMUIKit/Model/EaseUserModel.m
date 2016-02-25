/************************************************************
 *  * Hyphenate CONFIDENTIAL
 * __________________
 * Copyright (C) 2015-2016 Hyphenate Technologies. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Hyphenate Technologies.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Hyphenate Technologies.
 */

#import "EaseUserModel.h"

@implementation EaseUserModel

- (instancetype)initWithBuddy:(NSString *)buddy
{
    self = [super init];
    if (self) {
        _buddy = buddy;
        _nickname = @"";
        _avatarImage = [UIImage imageNamed:@"EaseUIResource.bundle/user"];
    }
    
    return self;
}

@end
