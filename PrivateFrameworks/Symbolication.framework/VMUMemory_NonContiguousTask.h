/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMUMemory_Base.h"
#import "VMUMemory.h"

@class VMUMachTaskContainer, VMUArchitecture;

@interface VMUMemory_NonContiguousTask : VMUMemory_Base <VMUMemory> {
	VMUMachTaskContainer* _machTaskContainer;
	VMURange _addressRange;
	VMUArchitecture* _architecture;
}
+(id)memoryWithPid:(int)pid;
+(id)memoryWithPid:(int)pid addressRange:(VMURange)range architecture:(id)architecture;
+(id)memoryWithMachTaskContainer:(id)machTaskContainer;
+(id)memoryWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;
-(id)initWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;
-(id)machTaskContainer;
-(VMURange)regionAtAddress:(unsigned long long)address minProtection:(int)protection;
-(VMURange)addressRange;
-(id)architecture;
-(BOOL)isContiguous;
-(id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;
-(id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;
-(id)view;
-(id)swappedView;
-(id)description;
-(void)dealloc;
@end

