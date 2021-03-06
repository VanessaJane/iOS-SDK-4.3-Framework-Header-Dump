/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVVideoCompositionInstruction.h"
#import "AVFoundation-Structs.h"

@class NSArray, AVMutableVideoCompositionInstructionInternal;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
@private
	AVMutableVideoCompositionInstructionInternal* _mutableInstruction;
}
@property(assign, nonatomic) BOOL enablePostProcessing;
@property(copy, nonatomic) NSArray* layerInstructions;
@property(retain, nonatomic) CGColorRef backgroundColor;
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;
+(id)videoCompositionInstruction;
@end

