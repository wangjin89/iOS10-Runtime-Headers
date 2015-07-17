/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {
    NSData *_continuationMarker;
    struct { 
        unsigned int limit : 1; 
    } _has;
    unsigned int _limit;
    CKDPQuery *_query;
    CKDPRequestedFields *_requestedFields;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property (nonatomic, retain) NSData *continuationMarker;
@property (nonatomic, readonly) BOOL hasContinuationMarker;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic, readonly) BOOL hasQuery;
@property (nonatomic, readonly) BOOL hasRequestedFields;
@property (nonatomic, readonly) BOOL hasZoneIdentifier;
@property (nonatomic) unsigned int limit;
@property (nonatomic, retain) CKDPQuery *query;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContinuationMarker;
- (BOOL)hasLimit;
- (BOOL)hasQuery;
- (BOOL)hasRequestedFields;
- (BOOL)hasZoneIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)limit;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setContinuationMarker:(id)arg1;
- (void)setHasLimit:(BOOL)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end