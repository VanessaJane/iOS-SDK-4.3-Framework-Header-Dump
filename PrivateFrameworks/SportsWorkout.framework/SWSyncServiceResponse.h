/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSError, NSMutableString, NSString;

@interface SWSyncServiceResponse : XXUnknownSuperclass <NSXMLParserDelegate> {
	BOOL _hasFoundRootElement;
	NSError* _validationError;
	NSMutableString* _status;
	NSMutableString* _pin;
	NSMutableString* _pinStatus;
	NSMutableString* _email;
	NSMutableString* _screenName;
	NSMutableString* _token;
	NSMutableString* _serviceException;
	NSString* _errorCode;
	NSString* _currentLeafElement;
}
@property(readonly, assign, nonatomic) NSString* status;
@property(readonly, assign, nonatomic) NSString* pin;
@property(readonly, assign, nonatomic) NSString* pinStatus;
@property(readonly, assign, nonatomic) NSString* email;
@property(readonly, assign, nonatomic) NSString* screenName;
@property(readonly, assign, nonatomic) NSString* token;
@property(readonly, assign, nonatomic) NSString* serviceException;
@property(readonly, assign, nonatomic) NSString* errorCode;
-(id)initWithData:(id)data error:(id*)error;
-(void)dealloc;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
@end
