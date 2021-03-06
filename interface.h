
#define CGRectZero CGRectMake(0,0,0,0)

typedef enum {
    SSDirectionLeft,
    SSDirectionRight
} SSTabChangeDirection;

@class TabDocument;

@interface BrowserToolbar : UIToolbar
- (void)setActionEnabled:(BOOL)enabled;
@end

@interface TabController : NSObject
- (TabDocument *)activeTabDocument;
- (NSArray *)currentTabDocuments;
- (TabDocument *)tabInDirection:(SSTabChangeDirection)direction;
- (BOOL)canSwitchTabInDirection:(SSTabChangeDirection)direction;
- (void)switchTabInDirection:(SSTabChangeDirection)direction;
- (void)setActiveTabDocument:(TabDocument *)document animated:(BOOL)animated;
@end

@interface BrowserController : NSObject
- (TabController *)tabController;
+ (id)sharedBrowserController;
- (void)setupOverlays;
@end
