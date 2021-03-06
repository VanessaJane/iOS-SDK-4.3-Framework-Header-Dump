/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface AVRecorder : XXUnknownSuperclass {
@private
	AVRecorderPrivate* _priv;
}
-(id)init;
-(void)dealloc;
-(void)setFilePath:(id)path;
-(id)filePath;
-(void)setAttribute:(id)attribute forKey:(id)key;
-(id)attributeForKey:(id)key;
-(void)implNotification:(id)notification;
-(BOOL)activate:(id*)activate;
-(BOOL)start;
-(void)stop;
-(BOOL)isRecording;
-(BOOL)isActive;
-(BOOL)takePhoto;
-(BOOL)autoFocusAtPoint:(CGPoint)point;
-(void)deactivate;
-(float)micVolume;
-(void)setMicVolume:(float)volume;
-(long long)recordedFileSizeInBytes;
-(double)recordedDuration;
-(unsigned)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)levels andPeakVolumeLevels:(float*)levels2;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)levels andPeakDecibelLevels:(float*)levels2;
-(void)makeError:(id*)error withDescription:(id)description code:(long)code;
@end

