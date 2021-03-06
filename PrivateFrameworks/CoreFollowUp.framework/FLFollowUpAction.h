/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLFollowUpAction : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _label;
    NSData * _launchActionArguments;
    NSURL * _launchActionURL;
    unsigned int  _sqlID;
    NSURL * _url;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSData *_userInfoData;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSString *label;
@property (nonatomic, copy) NSData *launchActionArguments;
@property (copy) NSURL *launchActionURL;
@property (nonatomic) unsigned int sqlID;
@property (copy) NSURL *url;
@property (copy) NSDictionary *userInfo;

+ (id)actionWithLabel:(id)arg1 url:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_loadActionURL;
- (id)_userInfoData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 url:(id)arg2;
- (id)label;
- (id)launchActionArguments;
- (id)launchActionURL;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLaunchActionArguments:(id)arg1;
- (void)setLaunchActionURL:(id)arg1;
- (void)setSqlID:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_userInfoData:(id)arg1;
- (unsigned int)sqlID;
- (id)url;
- (id)userInfo;

@end
