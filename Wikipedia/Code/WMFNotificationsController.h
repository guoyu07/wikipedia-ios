#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const WMFInTheNewsNotificationCategoryIdentifier;
extern NSString *const WMFInTheNewsNotificationReadNowActionIdentifier;
extern NSString *const WMFInTheNewsNotificationSaveForLaterActionIdentifier;
extern NSString *const WMFInTheNewsNotificationShareActionIdentifier;

extern NSString *const WMFNotificationInfoStoryHTMLKey;
extern NSString *const WMFNotificationInfoArticleTitleKey;
extern NSString *const WMFNotificationInfoArticleURLStringKey;
extern NSString *const WMFNotificationInfoThumbnailURLStringKey;
extern NSString *const WMFNotificationInfoArticleExtractKey;
extern NSString *const WMFNotificationInfoViewCountsKey;

@interface WMFNotificationsController : NSObject

+ (WMFNotificationsController *)sharedNotificationsController;

@property (nonatomic, readonly, getter=isAuthorized) BOOL authorized;

- (void)requestAuthenticationIfNecessaryWithCompletionHandler:(void (^)(BOOL granted, NSError *__nullable error))completionHandler;

- (void)sendNotificationWithTitle:(NSString *)title body:(NSString *)body categoryIdentifier:(NSString *)categoryIdentifier userInfo:(NSDictionary *)userInfo atDateComponents:(nullable NSDateComponents *)dateComponents; //null date components will send the notification ASAP

@end

NS_ASSUME_NONNULL_END
