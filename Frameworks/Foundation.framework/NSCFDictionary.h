/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCFDictionary.h"


__attribute__((visibility("hidden")))
@interface NSCFDictionary : XXUnknownSuperclass {
}
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(void)finalize;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(unsigned)count;
-(id)objectForKey:(id)key;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)keyEnumerator;
-(void)setObject:(id)object forKey:(id)key;
-(void)removeObjectForKey:(id)key;
-(void)getObjects:(id*)objects andKeys:(id*)keys;
-(void)removeAllObjects;
@end

@interface NSCFDictionary (NSKeyValueObservingCustomization)
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(void)setObservationInfo:(void*)info;
@end

