/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import "NSObject.h"


@protocol SPSearchDatastore <NSObject>
-(id)displayIdentifierForDomain:(unsigned)domain;
-(id)searchDomains;
-(void)performQuery:(id)query withResultsPipe:(id)resultsPipe;
@optional
-(void*)copyResultForDisplayIdentifier:(id)displayIdentifier;
-(void*)copyResultForIdentifier:(unsigned long long)identifier domain:(unsigned)domain;
-(id)categoryForDomain:(unsigned)domain;
@end

