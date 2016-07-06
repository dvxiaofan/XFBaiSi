//
//  XFAudio.h
//  XFBaisi
//
//  Created by xiaofans on 16/7/6.
//  Copyright © 2016年 xiaofan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XFAudio : NSObject

@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

/** 播放次数 */
@property (nonatomic, assign) NSInteger playcount;
/** 视频长度 */
@property (nonatomic, assign) NSInteger duration;

/** 视频缩略图 */
@property (nonatomic, strong) NSArray *thumbnail;


@end
