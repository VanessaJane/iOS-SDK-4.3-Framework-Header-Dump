/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterInputHelper.h"


@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper {
@private
	int _terminalStatus;
	BOOL _didRequestMediaDataOnce;
}
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;
-(int)status;
-(void)transitionToTerminalStatus:(int)terminalStatus;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s*)queue usingBlock:(id)block;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBuffer*)buffer;
-(BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;
-(void)markAsFinished;
@end

