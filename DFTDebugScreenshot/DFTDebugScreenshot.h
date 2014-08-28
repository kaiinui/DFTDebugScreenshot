//
//  DFTDebugScreenshot.h
//  DFTDebugScreenshotDemo
//
//  Created by Toshihiro Morimoto on 8/14/14.
//  Copyright (c) 2014 Toshihiro Morimoto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIViewController (DFTDebugScreenshotAdditions)

- (id)dft_debugObjectOfScreenshot;

@end

@interface DFTDebugScreenshot : NSObject

+ (BOOL)isTracking;

+ (void)setTraking:(BOOL)value;

+ (BOOL)getAnalyzeAutoLayout;

+ (void)setAnalyzeAutoLayout:(BOOL)value;

+ (BOOL)getEnableAlert;

+ (void)setEnableAlert:(BOOL)value;

+ (void)completionBlock:(void (^)(UIViewController *, id, UIImage *))block;

+ (void)capture;

@end
