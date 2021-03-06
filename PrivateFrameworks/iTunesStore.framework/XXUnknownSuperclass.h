/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (ISAdditions)
-(id)copyUTF8StringOfLength:(unsigned)length;
@end

@interface XXUnknownSuperclass (ISAdditions)
+(id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;
+(id)escapedStringForString:(id)string;
+(id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;
+(id)unescapedStringForString:(id)string;
-(id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;
-(id)urlBySettingQueryStringDictionary:(id)dictionary;
-(BOOL)isSafeExternalURL;
-(id)schemeSwizzledURL;
-(void)enumerateQueryWithBlock:(id)block;
@end

@interface XXUnknownSuperclass (ISInvocationAdditions)
-(id)blockingMainThreadProxy;
-(id)delayedProxy:(double)proxy;
-(id)mainThreadProxy;
@end

@interface XXUnknownSuperclass (ISURLBagAdditions)
-(id)sanitizedURL;
@end

@interface XXUnknownSuperclass (ISPropertyListAdditions)
-(BOOL)shouldTriggerDownloadQueueCheck;
@end

@interface XXUnknownSuperclass (ISAdditions)
-(id)errorBySettingFatalError:(BOOL)error;
-(BOOL)isEqual:(id)equal compareUserInfo:(BOOL)info;
-(BOOL)isFatalError;
@end

@interface XXUnknownSuperclass (ISAdditions)
+(id)cacheDirectoryPathWithName:(id)name;
+(BOOL)ensureDirectoryExists:(id)exists;
+(BOOL)_storeMovePath:(id)path toPath:(id)path2;
@end

@interface XXUnknownSuperclass (ISAdditions)
-(long long)maxExpectedContentLength;
-(int)statusCode;
-(id)allHeaderFields;
@end

@interface XXUnknownSuperclass (ISAdditions)
-(BOOL)_getCacheControlMaxAge:(double*)age;
-(id)_dateFromExpires;
-(id)expirationDate;
-(double)expirationInterval;
-(BOOL)getAppleMaxAge:(double*)age;
-(long long)maxExpectedContentLength;
@end

@interface XXUnknownSuperclass (ISAdditions)
-(id)copyAccountDictionaryForDomain:(CFStringRef)domain;
-(void)removeAccountFromDomain:(CFStringRef)domain;
@end

@interface XXUnknownSuperclass (ISAdditions)
+(id)pathForITunesStoreResource:(id)itunesStoreResource ofType:(id)type;
@end

