/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@class PLXPCConection;

@interface PLXPCConnectionClient : NSObject {
    PLXPCConection *xpcConnection;
}

- (BOOL)PLXPCSendMessage:(id)arg1;
- (id)PLXPCSendMessageWithReply:(id)arg1;
- (void)PLXPCinterruptedHandler;
- (void)PLXPCinvalidationHandler;
- (id)init;

@end
