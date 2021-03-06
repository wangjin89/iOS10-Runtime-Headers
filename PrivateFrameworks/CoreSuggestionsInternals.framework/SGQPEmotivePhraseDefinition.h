/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQPEmotivePhraseDefinition : NSObject {
    bool  _anchoredAtWordBoundaries;
    bool  _matchReceived;
    bool  _matchSent;
    NSString * _pattern;
    unsigned short  _phraseId;
    NSString * _predictions;
    long long  _type;
    float  _weight;
}

@property (nonatomic, readonly) bool matchReceived;
@property (nonatomic, readonly) bool matchSent;
@property (nonatomic, readonly) long long type;

+ (id)phraseDefinitionFromRawPhrase:(id)arg1;
+ (void)seedRng:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)existsInString:(id)arg1 wordBoundaries:(id)arg2;
- (id)init;
- (id)initWithPattern:(id)arg1 predictions:(id)arg2 type:(long long)arg3 matchSent:(bool)arg4 matchReceived:(bool)arg5 phraseId:(unsigned long long)arg6 weight:(double)arg7 anchoredAtWordBoundaries:(bool)arg8;
- (bool)matchReceived;
- (bool)matchSent;
- (id)predictionWithScore:(double)arg1;
- (id)randomPrediction;
- (long long)type;

@end
