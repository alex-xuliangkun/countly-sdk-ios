// CountlyFeedbackWidget.h
//
// This code is provided under the MIT License.
//
// Please visit www.count.ly for more information.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString* CLYFeedbackWidgetType NS_EXTENSIBLE_STRING_ENUM;
extern CLYFeedbackWidgetType const CLYFeedbackWidgetTypeSurvey;
extern CLYFeedbackWidgetType const CLYFeedbackWidgetTypeNPS;


@interface CountlyFeedbackWidget : NSObject
#if (TARGET_OS_IOS)

@property (nonatomic, readonly) CLYFeedbackWidgetType type;
@property (nonatomic, readonly) NSString* ID;
@property (nonatomic, readonly) NSString* name;


/**
 * Modally presents the feedback widget above the top visible view controller.
 * @discussion Calls to this method will be ignored if consent for @c CLYConsentFeedback is not given
 * while @c requiresConsent flag is set on initial configuration.
 */
- (void)present;

/**
 * Modally presents the feedback widget above the top visible view controller and executes given blocks.
 * @param appearBlock Block to be executed when widget is displayed.
 * @param dismissBlock Block to be executed when widget is dismissed.
 * @discussion Calls to this method will be ignored if consent for @c CLYConsentFeedback is not given
 * while @c requiresConsent flag is set on initial configuration.
 */
- (void)presentWithAppearBlock:(void(^ __nullable)(void))appearBlock andDismissBlock:(void(^ __nullable)(void))dismissBlock;

#endif
@end

NS_ASSUME_NONNULL_END
