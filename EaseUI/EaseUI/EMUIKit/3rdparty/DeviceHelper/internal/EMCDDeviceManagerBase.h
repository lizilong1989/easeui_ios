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
#import "EMCDDeviceManagerDelegate.h"

@interface EMCDDeviceManager : NSObject{
    // recorder
    NSDate              *_recorderStartDate;
    NSDate              *_recorderEndDate;
    NSString            *_currCategory;
    BOOL                _currActive;

    // proximitySensor
    BOOL _isSupportProximitySensor;
    BOOL _isCloseToUser;
}

@property (nonatomic, assign) id <EMCDDeviceManagerDelegate> delegate;

+(EMCDDeviceManager *)sharedInstance;


@end
