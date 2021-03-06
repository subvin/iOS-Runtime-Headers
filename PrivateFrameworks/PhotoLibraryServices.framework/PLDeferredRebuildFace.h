/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>

@property (nonatomic, copy) NSString *assetCloudGUID;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic, readonly) double centerX;
@property (nonatomic) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic) double centerY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int faceAlgorithmVersion;
@property (nonatomic) int faceAlgorithmVersion;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (nonatomic) BOOL hidden;
@property (getter=isManual, nonatomic, readonly) BOOL manual;
@property (nonatomic) BOOL manual;
@property (getter=isNameSourceAuto, nonatomic, readonly) BOOL nameSourceAuto;
@property (nonatomic) BOOL nameSourceAuto;
@property (nonatomic, copy) NSString *personUUID;
@property (nonatomic) BOOL rejected;
@property (getter=isRepresentative, nonatomic, readonly) BOOL representative;
@property (nonatomic) BOOL representative;
@property (nonatomic, readonly) double size;
@property (nonatomic) double size;
@property (readonly) Class superclass;

+ (id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

- (BOOL)isHidden;
- (BOOL)isManual;
- (BOOL)isNameSourceAuto;
- (BOOL)isRepresentative;

@end
