#import <Foundation/Foundation.h>
#import <ClangKit/ClangKit.h>

@interface XMASObjcSelector : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithTokens:(NSArray *)tokens;

- (NSArray *)parameters;
- (NSString *)selectorString;
- (NSArray *)components;
- (NSString *)returnType;
- (NSRange)range;

- (instancetype)deleteComponentAtIndex:(NSUInteger)index;
- (instancetype)insertComponentAtIndex:(NSUInteger)index;
- (instancetype)swapComponentAtIndex:(NSUInteger)index withComponentAtIndex:(NSUInteger)otherIndex;

@end
