//
//  WeMobAppLovinBanner.h
//  WeMobMediation_AppLovin
//

#import <Foundation/Foundation.h>
#import "WeMobCustomBanner.h"
#import <AppLovinSDK/AppLovinSDK.h>

@interface WeMobAppLovinBanner : WeMobCustomBanner<ALAdLoadDelegate, ALAdDisplayDelegate, ALAdViewEventDelegate>

@end
