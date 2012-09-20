/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSString, NSDictionary;

@interface SLFacebookPostPrivacySetting : NSObject <NSCoding> {
    NSString *_identifier;
    NSDictionary *_parameters;
    int _type;
    NSString *_name;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSDictionary * parameters;
@property int type;

+ (id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1;
+ (int)_privacySettingTypeFromTypeIdentifier:(id)arg1;
+ (id)postPrivacySettingsForPrivacyOptions:(id)arg1;
+ (id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4;

- (void)setParameters:(id)arg1;
- (id)identifier;
- (void)setName:(id)arg1;
- (id)name;
- (int)type;
- (id)description;
- (void).cxx_destruct;
- (id)parameters;
- (void)setIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parametersFormValueString;
- (id)_parametersJSONStringRepresentation;

@end