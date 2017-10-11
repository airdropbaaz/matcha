#import <UIKit/UIKit.h>
#import "MatchaView.h"
@class MatchaViewNode;
@class GPBInt64Array;
@class MatchaiOSPBStackBarItem;

@interface MatchaStackView : UINavigationController <MatchaChildViewController, UINavigationControllerDelegate>
- (id)initWithViewNode:(MatchaViewNode *)viewNode;
@property (nonatomic, weak) MatchaViewNode *viewNode;
@property (nonatomic, strong) NSData *nativeState;

//Internal
@property (nonatomic, strong) NSArray<NSNumber *> *prevIds;
@property (nonatomic, strong) NSArray *prev;
@end

@interface MatchaStackBar : UIViewController <MatchaChildViewController>
- (id)initWithViewNode:(MatchaViewNode *)viewNode;
@property (nonatomic, weak) MatchaViewNode *viewNode;
@property (nonatomic, strong) NSData *nativeState;

//Internal
@property (nonatomic, strong) NSString *titleString;
@property (nonatomic, assign) BOOL backButtonHidden;
@property (nonatomic, assign) BOOL customBackButtonTitle;
@property (nonatomic, assign) NSString *backButtonTitle;
@property (nonatomic, strong) UIView *titleView;
@property (nonatomic, strong) NSArray<UIBarButtonItem *> *rightViews;
@property (nonatomic, strong) NSArray<UIBarButtonItem *> *leftViews;
@end

@interface UIBarButtonItem (Protobuf)
@property (nonatomic, strong) NSString *onPress;
- (id)initWithProtobuf:(MatchaiOSPBStackBarItem *)proto;
@end
