//
//  WeMobAppLovinInterstitial.h
//  WeMobMediation_AppLovin
//

#import <Foundation/Foundation.h>
#import "WeMobInterstitialAdapter.h"
#import <AppLovinSDK/AppLovinSDK.h>

@interface WeMobAppLovinInterstitial : WeMobInterstitialAdapter<ALAdLoadDelegate, ALAdDisplayDelegate, ALAdVideoPlaybackDelegate>

@end
