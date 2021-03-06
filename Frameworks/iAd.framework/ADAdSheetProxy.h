/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class <ADSSession_RPC>, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface ADAdSheetProxy : NSObject {
    unsigned int _adSheetBootstrapAttempts;
    NSXPCConnection *_adSheetConnection;
    int _bootstrapState;
    int _classicUnavailableToken;
    NSMutableSet *_connectionAssertions;
    double _lastBootstrap;
    double _lastTermination;
    NSMutableArray *_performWhenConnectedBlocks;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    BOOL _serviceLaunchThrottled;
}

@property unsigned int adSheetBootstrapAttempts;
@property(retain) NSXPCConnection * adSheetConnection;
@property int bootstrapState;
@property int classicUnavailableToken;
@property(retain) NSMutableSet * connectionAssertions;
@property(readonly) BOOL connectionAvailable;
@property double lastBootstrap;
@property double lastTermination;
@property(retain) NSMutableArray * performWhenConnectedBlocks;
@property(readonly) NSObject<OS_dispatch_queue> * proxyQueue;
@property(readonly) <ADSSession_RPC> * rpcProxy;
@property BOOL serviceLaunchThrottled;

+ (id)sharedInstance;

- (void)_adSheetConnectionLost;
- (void)_considerConnectingToAdSheet;
- (void)_considerLaunchingAdSheet;
- (unsigned int)adSheetBootstrapAttempts;
- (id)adSheetConnection;
- (int)bootstrapState;
- (int)classicUnavailableToken;
- (id)connectionAssertions;
- (BOOL)connectionAvailable;
- (id)init;
- (double)lastBootstrap;
- (double)lastTermination;
- (void)performWhenConnected:(id)arg1;
- (id)performWhenConnectedBlocks;
- (id)proxyQueue;
- (void)releaseConnectionAssertion:(id)arg1;
- (void)resetAdSheetThrottle;
- (id)rpcProxy;
- (BOOL)serviceLaunchThrottled;
- (void)setAdSheetBootstrapAttempts:(unsigned int)arg1;
- (void)setAdSheetConnection:(id)arg1;
- (void)setBootstrapState:(int)arg1;
- (void)setClassicUnavailableToken:(int)arg1;
- (void)setConnectionAssertions:(id)arg1;
- (void)setLastBootstrap:(double)arg1;
- (void)setLastTermination:(double)arg1;
- (void)setPerformWhenConnectedBlocks:(id)arg1;
- (void)setServiceLaunchThrottled:(BOOL)arg1;
- (void)takeConnectionAssertion:(id)arg1;

@end
