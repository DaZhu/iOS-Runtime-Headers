/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSData *_data;
    } _range;
}

@property(readonly) NSString * UUIDString;
@property(readonly) NSData * data;

+ (id)UUIDWithCFUUID:(struct __CFUUID { }*)arg1;
+ (id)UUIDWithData:(id)arg1;
+ (id)UUIDWithNSUUID:(id)arg1;
+ (id)UUIDWithString:(id)arg1;
+ (void)initialize;

- (id)UUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithCFUUID:(struct __CFUUID { }*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithNSUUID:(id)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
