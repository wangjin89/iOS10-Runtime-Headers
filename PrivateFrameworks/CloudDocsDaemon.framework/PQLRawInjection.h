/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface PQLRawInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSData *sql;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)rawInjection:(const char *)arg1 length:(unsigned long)arg2;

- (int)bindWithStatement:(struct sqlite3_stmt { }*)arg1 startingAtIndex:(int)arg2;
- (id)description;
- (id)initWithUTF8String:(const char *)arg1 length:(unsigned long)arg2;

@end