/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertView;
    id _completionHandler;
}

@property(readonly) int firstOtherButtonIndex;

+ (id)_allHelpersArray;
+ (struct dispatch_queue_s { }*)_workQueue;
+ (id)alertHelperWithHandler:(id)arg1 style:(int)arg2 title:(id)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6;

- (id)_initWithTitle:(id)arg1 style:(int)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)_underlyingAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)dismissWithCancelAnimated:(BOOL)arg1;
- (void)dismissWithClickedButtonIndexAnimated:(int)arg1;
- (int)firstOtherButtonIndex;
- (void)setCompletionHandler:(id)arg1;
- (void)show;

@end
