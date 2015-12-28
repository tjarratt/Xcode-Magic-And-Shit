#import <Foundation/Foundation.h>

@class XMASAlert;
@class XMASLogger;
@class XMASSelectedTextProxy;
@class XMASFakeProtocolPersister;
@class XMASCurrentSourceCodeDocumentProxy;

@protocol XMASSelectedTextProxy;

@interface XMASGenerateFakeAction : NSObject

- (instancetype)initWithAlerter:(XMASAlert *)alerter
                         logger:(XMASLogger *)logger
              selectedTextProxy:(id<XMASSelectedTextProxy>)selectedTextProxy
          fakeProtocolPersister:(XMASFakeProtocolPersister *)fakeProtocolPersister
        sourceCodeDocumentProxy:(XMASCurrentSourceCodeDocumentProxy *)sourceCodeDocumentProxy NS_DESIGNATED_INITIALIZER;
- (void)safelyGenerateFakeForSelectedProtocol;

@property (nonatomic, strong, readonly) XMASAlert *alerter;
@property (nonatomic, strong, readonly) XMASLogger *logger;
@property (nonatomic, strong, readonly) id<XMASSelectedTextProxy> selectedTextProxy;
@property (nonatomic, strong, readonly) XMASFakeProtocolPersister *fakeProtocolPersister;
@property (nonatomic, strong, readonly) XMASCurrentSourceCodeDocumentProxy *sourceCodeDocumentProxy;

@end

@interface XMASGenerateFakeAction (UnavailableInitializers)
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
@end
