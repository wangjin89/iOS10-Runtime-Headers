/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLMultiKeyEntry : PLEntry {
    NSMutableDictionary *_multiKeys;
}

@property (retain) NSMutableDictionary *multiKeys;

+ (void)load;

- (void).cxx_destruct;
- (id)init;
- (id)keysForSubKey:(id)arg1 ofSubKeyType:(id)arg2;
- (id)multiKeys;
- (id)objectsForSubKey:(id)arg1 ofSubKeyType:(id)arg2;
- (id)serializedForJSON;
- (void)setMultiKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end