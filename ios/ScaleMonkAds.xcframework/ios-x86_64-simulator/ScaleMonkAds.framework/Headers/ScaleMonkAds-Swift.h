// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef SCALEMONKADS_SWIFT_H
#define SCALEMONKADS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ScaleMonkAds",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_PROTOCOL("_TtP12ScaleMonkAds8AdPolicy_")
@protocol AdPolicy
@end


SWIFT_CLASS("_TtC12ScaleMonkAds24AnalyticsListenerWrapper")
@interface AnalyticsListenerWrapper : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP12ScaleMonkAds19BannerEventListener_")
@protocol BannerEventListener
@optional
- (void)onBannerFailWithTag:(NSString * _Nonnull)tag;
- (void)onBannerCompletedWithTag:(NSString * _Nonnull)tag;
@end

@protocol SMBannerAdEventListener;

SWIFT_CLASS("_TtC12ScaleMonkAds26BannerEventListenerWrapper")
@interface BannerEventListenerWrapper : NSObject <BannerEventListener>
- (nonnull instancetype)initWithListener:(id <SMBannerAdEventListener> _Nonnull)listener OBJC_DESIGNATED_INITIALIZER;
- (void)onBannerFailWithTag:(NSString * _Nonnull)tag;
- (void)onBannerCompletedWithTag:(NSString * _Nonnull)tag;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// This Policy should be used when Ads must be regulated for underage users (COPPA compliance).
/// This is designed as a state machine. It will have one method to enable ads and a second one that will allow to disable and specify the reason of the AdsDisabling.
/// To use this Policy it should be added to the<code> ScaleMonk SDK</code> initialization by calling the <code>withPolicies</code> method of the <code>ScaleMonkAdsBuilder</code> and passing an instance of <code>CoppaCompliancePolicy</code>
/// The policy brings two helpers to initialize:
/// <ul>
///   <li>
///     <code>CoppaCompliancePolicy.enabledByDefault()</code>: creates a new policy which will always allow to show ads until the <code>disable()</code> method is called
///   </li>
///   <li>
///     <code>CoppaCompliancePolicy.disabledByDefault()</code>: creates a new policy which will newver allow to show ads until the <code>enable()</code> method is called
///     The reason parameter is optional both for the <code>disabledByDefault</code> initializer and <code>disable</code> method. If no reason is specified a generic <code>AdsDisplayDisabled</code> will be set.
///     Use Case Example: a game may want to show ads only for users that are older than some age. It will be able to enable/disable each time the reported age of the user changes.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC12ScaleMonkAds21CoppaCompliancePolicy")
@interface CoppaCompliancePolicy : NSObject
+ (CoppaCompliancePolicy * _Nonnull)enabledByDefault SWIFT_WARN_UNUSED_RESULT;
+ (CoppaCompliancePolicy * _Nonnull)disabledByDefault SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP12ScaleMonkAds25InterstitialEventListener_")
@protocol InterstitialEventListener
@optional
- (void)onInterstitialClickWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialFailWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialViewWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialViewStartWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialReady;
- (void)onInterstitialNotReady;
@end

@protocol SMInterstitialAdEventListener;

SWIFT_CLASS("_TtC12ScaleMonkAds34InterstitialAdEventListenerWrapper")
@interface InterstitialAdEventListenerWrapper : NSObject <InterstitialEventListener>
- (nonnull instancetype)initWithListener:(id <SMInterstitialAdEventListener> _Nonnull)listener OBJC_DESIGNATED_INITIALIZER;
- (void)onInterstitialClickWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialFailWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialViewWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialViewStartWithTag:(NSString * _Nonnull)tag;
- (void)onInterstitialReady;
- (void)onInterstitialNotReady;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_PROTOCOL("_TtP12ScaleMonkAds28RewardedVideoAdEventListener_")
@protocol RewardedVideoAdEventListener
@optional
- (void)onRewardedClickWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedViewStartWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedFinishWithNoRewardWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedFinishWithRewardWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedFailWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedReady;
- (void)onRewardedNotReady;
@end

@protocol SMRewardedVideoAdEventListener;

SWIFT_CLASS("_TtC12ScaleMonkAds35RewardedVideoAdEventListenerWrapper")
@interface RewardedVideoAdEventListenerWrapper : NSObject <RewardedVideoAdEventListener>
- (nonnull instancetype)initWithListener:(id <SMRewardedVideoAdEventListener> _Nonnull)listener OBJC_DESIGNATED_INITIALIZER;
- (void)onRewardedClickWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedFailWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedFinishWithNoRewardWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedFinishWithRewardWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedViewStartWithTag:(NSString * _Nonnull)tag;
- (void)onRewardedReady;
- (void)onRewardedNotReady;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@class UIViewController;
@class SMBannerView;

SWIFT_CLASS("_TtC12ScaleMonkAds12ScaleMonkAds")
@interface ScaleMonkAds : NSObject
/// \param applicationId The id defined on the <a href="http://example.net/">ScaleMonk back-office.</a>
///
/// \param extraParameters <em>Do not use</em>: This map defines internal test modes and other functionality.
///
- (nonnull instancetype)initWithApplicationId:(NSString * _Nonnull)applicationId extraParameters:(NSDictionary<NSString *, id> * _Nullable)extraParameters OBJC_DESIGNATED_INITIALIZER;
/// This method initializes the SDK.
/// note:
/// Make sure to call this and wait for the <code>done</code> block before calling any other method.
/// \param done This callback is executed when the sdk finishes initializing with a value indicating success.
///
- (void)initialize:(void (^ _Nullable)(BOOL))done;
/// Reload the configuration and restart the SDK.
/// note:
/// Do not use this unless you know what you are doing.
- (void)forceReloadConfiguration;
/// Add a listener to the video callbacks.
/// Make sure to remove it using <code>clearVideoListeners</code>.
- (void)addVideoListener:(id <RewardedVideoAdEventListener> _Nonnull)listener;
/// Add a listener to the interstitial callbacks.
/// Make sure to remove it using <code>clearInterstitialListeners</code>.
- (void)addInterstitialListener:(id <InterstitialEventListener> _Nonnull)listener;
/// Add a listener to the banner callbacks.
/// Make sure to remove it using <code>clearBannerListeners</code>.
- (void)addBannerListener:(id <BannerEventListener> _Nonnull)listener;
/// Removes all listeners for this ad type.
- (void)clearVideoListeners;
/// Removes all listeners for this ad type.
- (void)clearInterstitialListeners;
/// Removes all listeners for this ad type.
- (void)clearBannerListeners;
/// Shows an interstitial ad above the passed viewcontroller.
/// \param viewController A <code>UIViewController</code> that is currently in the view hierarchy,
///
/// \param tag An optional string value to know in which screen the ad was shown in. (For example: <code>Main-Menu</code>, <code>Lost-Screen</code>)
///
- (void)showInterstitialAdWithViewController:(UIViewController * _Nonnull)viewController tag:(NSString * _Nonnull)tag;
/// Shows an rewarded video ad above the passed viewcontroller.
/// \param viewController A <code>UIViewController</code> that is currently in the view hierarchy,
///
/// \param tag An optional string value to know in which screen the ad was shown in. (For example: <code>Main-Menu</code>, <code>Lost-Screen</code>)
///
- (void)showRewardedVideoAdWithViewController:(UIViewController * _Nonnull)viewController tag:(NSString * _Nonnull)tag;
/// Shows an rewarded video ad above the passed viewcontroller.
/// \param viewController A <code>UIViewController</code> that is currently in the view hierarchy,
///
/// \param tag An optional string value to know in which screen the ad was shown in. (For example: <code>Main-Menu</code>, <code>Lost-Screen</code>)
///
- (void)showBannerAdWithViewController:(UIViewController * _Nonnull)viewController bannerView:(SMBannerView * _Nonnull)bannerView tag:(NSString * _Nonnull)tag;
/// This removes the current banner from the <code>SMBannerView</code> and stops loading more banners.
- (void)stopLoadingBanners;
/// This tag the user as under age or not to complain with COPPA regulation
/// \param childDirectedTreatment set true if the user is under age, otherwise false. If the age is not tagged we assume the user is not under age.
///
- (void)setIsApplicationChildDirectedWithChildDirectedTreatment:(BOOL)childDirectedTreatment;
/// Call this method when the user is under age of consent. It means that the user is not able to give a consent to see targeted ads (GDPR)
- (void)setUserCantGiveGDPRConsentWithStatus:(BOOL)status;
/// Call this method <em>after</em> the user as granted consent or not. (GDPR).
- (void)setHasGDPRConsentWithStatus:(BOOL)status;
/// Tells if an interstitial is ready to be shown
- (BOOL)isInterstitialReadyToShowWithTag:(NSString * _Nonnull)tag SWIFT_WARN_UNUSED_RESULT;
/// Tells if a rewarded ad is ready to be shown
- (BOOL)isRewardedReadyToShowWithTag:(NSString * _Nonnull)tag SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
