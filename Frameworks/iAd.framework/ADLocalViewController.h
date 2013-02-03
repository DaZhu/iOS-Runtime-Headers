/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ADAdRecipientRecord, UIViewController, _UIRemoteViewController;

@interface ADLocalViewController : UIViewController {
    BOOL _modalPresentationInProgress;
    UIViewController *_modalRemoteViewController;
    int _oldOrientation;
    BOOL _reattemptPresentStoryboard;
    ADAdRecipientRecord *_recipient;
    _UIRemoteViewController *_remoteViewController;
    id _storyboardDismissalHandler;
    BOOL _storyboardDismissalRequested;
    int _supportedOrientations;
}

@property BOOL modalPresentationInProgress;
@property(retain) UIViewController * modalRemoteViewController;
@property(retain) _UIRemoteViewController * remoteViewController;
@property(copy) id storyboardDismissalHandler;
@property BOOL storyboardDismissalRequested;
@property int supportedOrientations;

- (void)_restoreStatusBar;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (void)dismissModalAnimated:(BOOL)arg1;
- (void)dismissStoryboardAnimated:(BOOL)arg1 completion:(id)arg2;
- (id)initWithRecipient:(id)arg1;
- (BOOL)modalPresentationInProgress;
- (id)modalRemoteViewController;
- (void)presentStoryboard;
- (id)remoteViewController;
- (void)requestAndPresentModalAnimated:(BOOL)arg1;
- (void)requestStoryboard;
- (void)setModalPresentationInProgress:(BOOL)arg1;
- (void)setModalRemoteViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setStatusBarVisible:(BOOL)arg1;
- (void)setStoryboardDismissalHandler:(id)arg1;
- (void)setStoryboardDismissalRequested:(BOOL)arg1;
- (void)setSupportedOrientations:(int)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)storyboardDismissalHandler;
- (BOOL)storyboardDismissalRequested;
- (void)storyboardDismissedLocalViewController;
- (unsigned int)supportedInterfaceOrientations;
- (int)supportedOrientations;

@end