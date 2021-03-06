/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBTVOutController.h"
#import <Foundation/NSObject.h>


@interface SBTVOutController : NSObject {
	int _tvOutMode;
}
@property(assign, nonatomic) int tvOutMode;
@property(readonly, assign, nonatomic) BOOL isTVSignalTypeDigital;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setIntialTVModeIfNeeded;
-(BOOL)updateLayerKitSettings;
-(void)updateSettings;
@end

@interface SBTVOutController (private)
-(void)_handleIapServerConnectionDied;
-(void)_tetherSettingChanged:(id)changed;
-(void)startListeningForSettingsChanges;
-(void)stopListeningForSettingsChanges;
@end

