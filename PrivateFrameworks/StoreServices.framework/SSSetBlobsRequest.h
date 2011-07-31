/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "SSBlobsRequest.h"

@class SSSetBlobsRequestContext;

@interface SSSetBlobsRequest : SSBlobsRequest <SSCoding> {
}
@property(readonly, assign) SSSetBlobsRequestContext* blobsRequestContext;
-(id)initWithBlobsRequestContext:(id)blobsRequestContext;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
-(BOOL)issueRequestForIdentifier:(id)identifier error:(id*)error;
@end
