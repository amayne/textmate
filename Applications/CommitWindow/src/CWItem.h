@interface CWItem : NSObject <NSCopying>
@property (nonatomic) NSString* path;
@property (nonatomic) BOOL state;
@property (nonatomic) NSString* scmStatus;
+ (CWItem*)itemWithPath:(NSString*)aPath andSCMStatus:(NSString*)aStatus;
- (NSComparisonResult)compare:(CWItem*)item;
@end