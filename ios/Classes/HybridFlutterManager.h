#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>
#import "HybridFlutterNavigator.h"

@interface HybridFlutterManager : NSObject

@property(nonatomic, strong) id<HybridFlutterNavigator> navigator;

+(instancetype)sharedInstance;

-(void)preloadEngine:(nullable FlutterDartProject *)project;
-(void)releasePreload;

-(FlutterEngine *)shareEngine:(nullable FlutterDartProject *)project;

-(FlutterEngine *)spawnEngine:(nullable FlutterDartProject *)project;

-(int)newRoute:(NSString *)route flutterViewController:(FlutterViewController *)flutterViewController;

-(FlutterViewController *)getFlutterViewControllerWithRouteId:(NSNumber*)routeId;

-(void)removeRoute:(NSNumber*)routeId;

-(void)releaseSharedEngine;

@end
