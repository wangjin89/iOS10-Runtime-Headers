/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int storageAvailableBytes : 1; 
    } _has;
    unsigned long long _storageAvailableBytes;
}

@property (nonatomic) BOOL hasStorageAvailableBytes;
@property (nonatomic) unsigned long long storageAvailableBytes;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStorageAvailableBytes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStorageAvailableBytes:(BOOL)arg1;
- (void)setStorageAvailableBytes:(unsigned long long)arg1;
- (unsigned long long)storageAvailableBytes;
- (void)writeTo:(id)arg1;

@end