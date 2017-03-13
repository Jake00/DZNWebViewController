//
//  DZNWebView.h
//  DZNWebViewController
//  https://github.com/dzenbot/DZNWebViewController
//
//  Created by Ignacio Romero Zurbuchen on 11/21/14.
//  Copyright (c) 2014 DZN Labs. All rights reserved.
//  Licence: MIT-Licence
//

@import WebKit;

NS_ASSUME_NONNULL_BEGIN

@protocol DZNNavigationDelegate;

@interface DZNWebView : WKWebView

@property (nonatomic, weak, nullable) id <DZNNavigationDelegate> navDelegate;

@end


@protocol DZNNavigationDelegate <WKNavigationDelegate>

- (void)webView:(DZNWebView *)webView didUpdateProgress:(CGFloat)progress;

@end

NS_ASSUME_NONNULL_END
