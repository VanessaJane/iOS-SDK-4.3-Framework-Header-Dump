/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "NSObject.h"


@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
-(void)handleBrailleDriverDidLoad;
-(void)handleBrailleDriverDisconnected;
-(void)configurationDidChange;
-(void)handleFailedToLoadBluetoothDevice:(id)loadBluetoothDevice;
-(void)handleBrailleKeypress:(id)keypress;
-(void)handleBrailleKeyWillMemorize:(id)handleBrailleKey;
-(void)handleBrailleKeyMemorize:(id)memorize;
-(void)handleBrailleDidDisplay:(id)handleBraille;
-(void)handleBrailleDidPanLeft:(id)handleBraille elementToken:(id)token appToken:(id)token3;
-(void)handleBrailleDidPanRight:(id)handleBraille elementToken:(id)token appToken:(id)token3;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)handleBraille;
-(void)handleBrailleDidShowNextAnnouncement:(id)handleBraille;
-(void)handleBrailleTableFailedToLoad:(id)load;
-(void)handleDisplayModeChanged:(id)changed;
@end

