/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSDictionary, NSNumber, NSString, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {
    NSString *_accountName;
    BOOL _accountNameEditable;
    int _accountScope;
    BOOL _allowsBioAuthentication;
    BOOL _allowsBootstrapCellularData;
    BOOL _allowsRetry;
    BOOL _canCreateNewAccount;
    BOOL _canSetActiveAccount;
    NSString *_clientIdentifierHeader;
    BOOL _demoAccount;
    NSDictionary *_httpHeaders;
    NSString *_initialPassword;
    BOOL _persistsAcrossDeviceLock;
    BOOL _persistsPasswordFallback;
    NSString *_preferredITunesStoreClient;
    int _promptStyle;
    NSString *_reasonDescription;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    BOOL _shouldCreateNewSession;
    BOOL _shouldFollowAccountButtons;
    BOOL _shouldIgnoreProtocol;
    BOOL _shouldSuppressDialogs;
    NSDictionary *_signupRequestParameters;
    int _tokenType;
    NSArray *_userAgentComponents;
}

@property(readonly) NSDictionary * HTTPHeaders;
@property(readonly) SSURLBagContext * URLBagContext;
@property(readonly) NSString * accountName;
@property(getter=isAccountNameEditable,readonly) BOOL accountNameEditable;
@property(readonly) int accountScope;
@property(readonly) BOOL allowsBioAuthentication;
@property(readonly) BOOL allowsBootstrapCellularData;
@property(readonly) BOOL allowsRetry;
@property(readonly) BOOL canCreateNewAccount;
@property(readonly) BOOL canSetActiveAccount;
@property(readonly) NSString * clientIdentifierHeader;
@property(getter=isDemoAccount,readonly) BOOL demoAccount;
@property(readonly) NSString * initialPassword;
@property(readonly) BOOL persistsAcrossDeviceLock;
@property(readonly) BOOL persistsPasswordFallback;
@property(readonly) NSString * preferredITunesStoreClient;
@property(readonly) int promptStyle;
@property(readonly) NSString * reasonDescription;
@property(readonly) NSDictionary * requestParameters;
@property(readonly) NSNumber * requiredUniqueIdentifier;
@property(readonly) BOOL shouldCreateNewSession;
@property(readonly) BOOL shouldFollowAccountButtons;
@property(readonly) BOOL shouldIgnoreProtocol;
@property(readonly) BOOL shouldSuppressDialogs;
@property(readonly) NSDictionary * signupRequestParameters;
@property(readonly) int tokenType;
@property(readonly) NSArray * userAgentComponents;

+ (id)contextForSignIn;

- (id)HTTPHeaders;
- (id)URLBagContext;
- (BOOL)_allowCreateAccount;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_initSSAuthenticationContext;
- (id)accountName;
- (int)accountScope;
- (BOOL)allowsBioAuthentication;
- (BOOL)allowsBootstrapCellularData;
- (BOOL)allowsRetry;
- (BOOL)canCreateNewAccount;
- (BOOL)canSetActiveAccount;
- (id)clientIdentifierHeader;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initialPassword;
- (BOOL)isAccountNameEditable;
- (BOOL)isDemoAccount;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)persistsAcrossDeviceLock;
- (BOOL)persistsPasswordFallback;
- (id)preferredITunesStoreClient;
- (int)promptStyle;
- (id)reasonDescription;
- (id)requestParameters;
- (id)requiredUniqueIdentifier;
- (BOOL)shouldCreateNewSession;
- (BOOL)shouldFollowAccountButtons;
- (BOOL)shouldIgnoreProtocol;
- (BOOL)shouldSuppressDialogs;
- (id)signupRequestParameters;
- (int)tokenType;
- (id)userAgentComponents;

@end
