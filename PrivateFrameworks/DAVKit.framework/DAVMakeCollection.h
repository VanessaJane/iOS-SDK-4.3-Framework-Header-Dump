/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "DAVRequest.h"


@interface DAVMakeCollection : DAVRequest {
}
+(id)makeCollectionRequestWithURL:(id)url;
+(id)makeCollectionRequestWithSession:(id)session path:(id)path;
-(id)initMakeCollectionWithURL:(id)url;
-(id)initMakeCollectionWithSession:(id)session path:(id)path;
-(id)initMakeCollectionWithSession:(id)session URI:(id)uri;
@end
