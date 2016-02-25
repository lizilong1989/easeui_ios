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

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
@interface EMAudioRecorderUtil : NSObject

// 当前是否正在录音
+(BOOL)isRecording;

// 开始录音
+ (void)asyncStartRecordingWithPreparePath:(NSString *)aFilePath
                                completion:(void(^)(NSError *error))completion;
// 停止录音
+(void)asyncStopRecordingWithCompletion:(void(^)(NSString *recordPath))completion;

// 取消录音
+(void)cancelCurrentRecording;

// current recorder
+(AVAudioRecorder *)recorder;
@end
