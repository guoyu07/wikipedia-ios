#import <UIKit/UIKit.h>
#import "UIButton+WMFButton.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIBarButtonItem (WMFButtonConvenience)

// Returns bar button item with our UIButton as its customView.
+ (UIBarButtonItem *)wmf_buttonType:(WMFButtonType)type
                            handler:(void (^__nullable)(id sender))action;

// If self.customView is UIButton return it else return nil.
- (UIButton *)wmf_UIButton;

+ (UIBarButtonItem *)wmf_barButtonItemOfFixedWidth:(CGFloat)width;

+ (UIBarButtonItem *)flexibleSpaceToolbarItem;

@end

NS_ASSUME_NONNULL_END
