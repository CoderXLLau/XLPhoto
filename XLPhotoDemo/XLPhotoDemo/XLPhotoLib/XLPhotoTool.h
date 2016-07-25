//
//  XLPhotoTool.h
//  XLPhotoTool
//
//  Created by Liushannoon on 16/5/20.
//  Copyright © 2016年 Liushannoon. All rights reserved.
//

/**
 *  整个SDK的入口,调用showXLPhotoWithCompleteBlock 完成的时候会调用一个包含结果图片的block,     需要注意的是,这个类是单例类
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

#define XLDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

typedef void(^XLPhotoBlock)(UIImage *editedImage);

@interface XLPhotoTool : NSObject

/**
 *  是否强制添加贴纸 , 默认是YES
 */
@property (nonatomic , assign ,readonly) BOOL needAddDefaultLogo;

/**
 *  获取单例工具类
 */
+ (instancetype)sharedPhotoTool;
/**
 *  进入XLPhotoTool,完成后会返回一张图片
 */
- (void)xl_showXLPhotoWithCompleteBlock:(XLPhotoBlock)completeBlock XLDeprecated("请调用xl_showXLPhotoWithCompleteBlock:sourceViewController:方法");
/**
 * 进入XLPhotoTool,完成后调用完成回调block传回处理结果图片
 *
 *  @param completeBlock  完成回调block
 *  @param sourceViewController 要弹出XLPhotoTool的控制器
 */
- (void)xl_showXLPhotoWithCompleteBlock:(XLPhotoBlock)completeBlock sourceViewController:(UIViewController *)sourceViewController;
/**
 * 进入XLPhotoTool,完成后调用完成回调block传回处理结果图片 , 可以强制是否前置添加标签接口
 *
 *  @param completeBlock        完成回调block
 *  @param sourceViewController 要弹出XLPhotoTool的控制器
 *  @param needAddDefaultLogo   是否强制添加标签接口
 */
- (void)xl_showXLPhotoWithCompleteBlock:(XLPhotoBlock)completeBlock sourceViewController:(UIViewController *)sourceViewController needAddDefaultLogo:(BOOL)needAddDefaultLogo;


#pragma mark -------
#pragma mark 保存图片相关方法
/**
 *  保存一张图片到指定的相册
 *
 *  @param image      要保存的图片
 *  @param album      相册名字,没有会创建
 *  @param completion 完成后的block回调
 *  @param failure    失败后的block回调
 */
- (void)xl_saveImage:(UIImage *)image toAlbum:(NSString *)album completion:(ALAssetsLibraryWriteImageCompletionBlock)completion
             failure:(ALAssetsLibraryAccessFailureBlock)failure;
@end
