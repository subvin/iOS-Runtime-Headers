/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOListResultItem : PBCodable <NSCopying> {
    unsigned long long  _businessId;
    BOOL  _eventuallyVisible;
    struct { 
        unsigned int businessId : 1; 
        unsigned int latency : 1; 
        unsigned int resultType : 1; 
        unsigned int tappedCount : 1; 
        unsigned int eventuallyVisible : 1; 
        unsigned int initiallyVisible : 1; 
    }  _has;
    BOOL  _initiallyVisible;
    long long  _latency;
    int  _resultType;
    int  _tappedCount;
}

@property (nonatomic) unsigned long long businessId;
@property (nonatomic) BOOL eventuallyVisible;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) BOOL hasEventuallyVisible;
@property (nonatomic) BOOL hasInitiallyVisible;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) BOOL hasTappedCount;
@property (nonatomic) BOOL initiallyVisible;
@property (nonatomic) long long latency;
@property (nonatomic) int resultType;
@property (nonatomic) int tappedCount;

- (int)StringAsResultType:(id)arg1;
- (unsigned long long)businessId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)eventuallyVisible;
- (BOOL)hasBusinessId;
- (BOOL)hasEventuallyVisible;
- (BOOL)hasInitiallyVisible;
- (BOOL)hasLatency;
- (BOOL)hasResultType;
- (BOOL)hasTappedCount;
- (unsigned int)hash;
- (BOOL)initiallyVisible;
- (BOOL)isEqual:(id)arg1;
- (long long)latency;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)resultType;
- (id)resultTypeAsString:(int)arg1;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setEventuallyVisible:(BOOL)arg1;
- (void)setHasBusinessId:(BOOL)arg1;
- (void)setHasEventuallyVisible:(BOOL)arg1;
- (void)setHasInitiallyVisible:(BOOL)arg1;
- (void)setHasLatency:(BOOL)arg1;
- (void)setHasResultType:(BOOL)arg1;
- (void)setHasTappedCount:(BOOL)arg1;
- (void)setInitiallyVisible:(BOOL)arg1;
- (void)setLatency:(long long)arg1;
- (void)setResultType:(int)arg1;
- (void)setTappedCount:(int)arg1;
- (int)tappedCount;
- (void)writeTo:(id)arg1;

@end
