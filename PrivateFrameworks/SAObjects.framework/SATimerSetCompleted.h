/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SATimerSetCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setCompleted;
+ (id)setCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;

@end