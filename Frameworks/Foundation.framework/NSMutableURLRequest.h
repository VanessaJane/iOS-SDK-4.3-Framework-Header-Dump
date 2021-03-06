/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableURLRequest.h"
#import "NSURLRequest.h"
#import "Foundation-Structs.h"


@interface NSMutableURLRequest : NSURLRequest {
}
-(void)setURL:(id)url;
-(void)setCachePolicy:(unsigned)policy;
-(void)setTimeoutInterval:(double)interval;
-(void)setMainDocumentURL:(id)url;
-(id)copyWithZone:(NSZone*)zone;
-(void)setNetworkServiceType:(unsigned)type;
@end

@interface NSMutableURLRequest (NSMutableHTTPURLRequest)
-(void)setHTTPMethod:(id)method;
-(void)setAllHTTPHeaderFields:(id)fields;
-(void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;
-(void)addValue:(id)value forHTTPHeaderField:(id)httpheaderField;
-(void)setHTTPBody:(id)body;
-(void)setHTTPBodyStream:(id)stream;
-(void)setHTTPContentType:(id)type;
-(void)setHTTPExtraCookies:(id)cookies;
-(void)setHTTPReferrer:(id)referrer;
-(void)setHTTPUserAgent:(id)agent;
-(void)setHTTPShouldHandleCookies:(BOOL)handleCookies;
-(void)setRequestPriority:(unsigned)priority;
-(unsigned)requestPriority;
-(void)setHTTPShouldUsePipelining:(BOOL)usePipelining;
-(void)setContentDispositionEncodingFallbackArray:(id)array;
@end

