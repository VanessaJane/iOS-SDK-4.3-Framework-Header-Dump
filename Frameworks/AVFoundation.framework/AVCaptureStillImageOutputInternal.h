/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSMutableArray;

@interface AVCaptureStillImageOutputInternal : XXUnknownSuperclass {
	NSMutableArray* stillImageRequests;
	CGSize previewImageSize;
	unsigned imageDataFormatType;
	long long imageMaxDataSize;
	BOOL HDRCaptureEnabled;
	BOOL EV0CaptureEnabled;
	BOOL chromaNoiseReductionEnabled;
	BOOL suspendsVideoProcessingDuringCapture;
	NSDictionary* outputSettings;
	BOOL isCapturingPhoto;
}
-(id)init;
-(void)dealloc;
@end
