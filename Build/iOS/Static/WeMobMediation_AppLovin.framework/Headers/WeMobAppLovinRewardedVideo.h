//
//  WeMobAppLovinRewardedVideo.h
//  WeMobMediation_AppLovin
//

#import <Foundation/Foundation.h>
#import "WeMobCustomRewardedVideo.h"
#import <AppLovinSDK/AppLovinSDK.h>

@interface WeMobAppLovinRewardedVideo : WeMobCustomRewardedVideo<ALAdLoadDelegate, ALAdRewardDelegate, ALAdDisplayDelegate, ALAdVideoPlaybackDelegate>

@end
