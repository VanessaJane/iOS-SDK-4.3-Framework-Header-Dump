/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVCaptureConnectionInternal, NSArray, AVCaptureOutput;

@interface AVCaptureConnection : XXUnknownSuperclass {
@private
	AVCaptureConnectionInternal* _internal;
}
@property(assign, nonatomic) int videoOrientation;
@property(readonly, assign, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property(assign, nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property(readonly, assign, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;
@property(readonly, assign, nonatomic) NSArray* audioChannels;
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, assign, nonatomic) AVCaptureOutput* output;
@property(readonly, assign, nonatomic) NSArray* inputPorts;
+(id)connectionWithInputPorts:(id)inputPorts output:(id)output;
-(id)initWithInputPorts:(id)inputPorts output:(id)output;
-(void)dealloc;
-(void)inputPortFormatDescriptionChanged:(id)changed;
-(void)addInputPort:(id)port;
-(void)removeInputPort:(id)port;
-(void)invalidate;
-(void)setActive:(BOOL)active;
-(id)mediaType;
-(void)updateAudioLevelsArray;
-(float)getAvgAudioLevelForChannel:(id)channel;
-(float)getPeakAudioLevelForChannel:(id)channel;
-(void)updateAudioChannelsArray;
-(float)maxVideoScaleAndCropFactor;
-(float)videoScaleAndCropFactor;
-(void)setVideoScaleAndCropFactor:(float)factor;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
@end
