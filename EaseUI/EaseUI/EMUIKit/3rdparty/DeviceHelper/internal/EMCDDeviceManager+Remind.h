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

#import "EMCDDeviceManager.h"
#import <AudioToolbox/AudioToolbox.h>
@interface EMCDDeviceManager (Remind)
// 播放接收到新消息时的声音
- (SystemSoundID)playNewMessageSound;

// 震动
- (void)playVibration;
@end
