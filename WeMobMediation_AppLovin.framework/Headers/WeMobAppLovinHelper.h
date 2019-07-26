//
//  WeMobAppLovinHelper.h
//  WeMobMediation_AppLovin
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@interface WeMobAppLovinHelper : NSObject

+(void)init;

+(void)setGdprConsent;

+ (NSString *)getZoneId:(NSDictionary *)serverExtras;

// 将 AppLovin 的 Error 转为 SDK 的 Error。
+(WeMobAdError *)getAdError:(int)appLovinErrorCode;

@end
