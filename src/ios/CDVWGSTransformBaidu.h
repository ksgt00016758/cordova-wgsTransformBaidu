#import <Cordova/CDV.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface CDVWGSTransformBaidu : CDVPlugin

- (void)echo:(CDVInvokedUrlCommand*)command;
-(BOOL)isLocationOutOfChina:(CLLocationCoordinate2D)location;
//转GCJ-02
-(CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc;

@end
