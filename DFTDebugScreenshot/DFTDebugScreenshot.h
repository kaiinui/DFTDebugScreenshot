//
//  DFTDebugScreenshot.h
//  DFTDebugScreenshotDemo
//
//  Created by Toshihiro Morimoto on 8/14/14.
//  Copyright (c) 2014 Toshihiro Morimoto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DFTDebugScreenshot : NSObject

+ (BOOL)getTracking;

+ (void)setTraking:(BOOL)value;

+ (NSDateFormatter *)getDateFormatter;

+ (void)setDateFomatter:(NSDateFormatter *)formatter;

+ (void)configureDrawAttributes:(void (^)(NSMutableDictionary *))block;

+ (void)completionBlock:(void (^)(NSString *, UIImage *))block;

+ (void)capture;

@end