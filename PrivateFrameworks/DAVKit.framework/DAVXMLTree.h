/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVXMLTree.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class DAVXMLNode, NSMutableArray, NSMutableData;

@interface DAVXMLTree : XXUnknownSuperclass {
	DAVXMLNode* root;
	NSMutableArray* stack;
	NSMutableData* contentData;
}
+(id)treeWithXMLData:(id)xmldata;
-(id)initWithXMLData:(id)xmldata;
-(void)dealloc;
-(id)root;
@end

@interface DAVXMLTree (Private)
-(void)_startelement:(const char*)startelement attributes:(const char**)attributes;
-(void)_endelement:(const char*)endelement;
-(void)_data:(const char*)data len:(int)len;
@end
