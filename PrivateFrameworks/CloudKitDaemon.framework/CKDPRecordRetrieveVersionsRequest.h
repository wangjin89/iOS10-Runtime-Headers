/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying> {
    NSString *_minimumVersionEtag;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
}

@property (nonatomic, readonly) BOOL hasMinimumVersionEtag;
@property (nonatomic, readonly) BOOL hasRecordIdentifier;
@property (nonatomic, readonly) BOOL hasRequestedFields;
@property (nonatomic, retain) NSString *minimumVersionEtag;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMinimumVersionEtag;
- (BOOL)hasRecordIdentifier;
- (BOOL)hasRequestedFields;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minimumVersionEtag;
- (BOOL)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setMinimumVersionEtag:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end