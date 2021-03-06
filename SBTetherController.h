/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBTetherController : NSObject {
	int _tetherState;
	unsigned _demoCardConnection;
	int _lastOrientationCode;
}
+(id)sharedInstance;
-(id)init;
-(unsigned)_demoCardConnection;
-(void)_postDisplayPortNotificationCode:(int)code;
-(void)_setTetherState:(int)state;
-(BOOL)isTethered;
-(BOOL)usesDisplayPortTethering;
-(void)_handleDemoModeChanged;
-(void)noteInterfaceOrientationChanged;
-(void)setDitheringEnabled:(int)enabled;
-(void)updatePreferencesIfNeeded;
-(void)dealloc;
@end

