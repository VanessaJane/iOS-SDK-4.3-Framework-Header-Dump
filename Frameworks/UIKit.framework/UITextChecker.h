/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UITextChecker : XXUnknownSuperclass {
@private
	id _checker;
	id _reserved;
	int _usdt;
}
+(int)uniqueSpellDocumentTag;
+(id)availableLanguages;
+(CFSetRef)createDictHashTable:(BOOL)table;
+(id)openUserDictionary:(id)dictionary;
+(id)dictionaryInfo:(id)info;
+(BOOL)_learnWord:(id)word inDictionary:(id)dictionary;
+(BOOL)_forgetWord:(id)word inDictionary:(id)dictionary;
+(BOOL)_isWord:(id)word inDictionary:(id)dictionary;
+(id)_wordsInDictionary:(id)dictionary;
+(void)_setWords:(id)words inDictionary:(id)dictionary;
+(void)learnWord:(id)word;
+(BOOL)hasLearnedWord:(id)word;
+(void)unlearnWord:(id)word;
-(id)_nameOfDictionaryForDocumentTag:(int)documentTag;
-(void)_setLanguageDictionaryName:(id)name;
-(void)_setDocumentDictionaryName:(id)name;
-(void)initUserAddressBook;
-(void)initUserDictionaries;
-(void)initGlobals;
-(id)init;
-(id)_initWithAsynchronousLoading:(BOOL)asynchronousLoading;
-(BOOL)_doneLoading;
-(void)dealloc;
-(id)_checker;
-(int)adjustOffsetToNextWordBoundaryInString:(id)string startingAt:(int)at;
-(NSRange)_chunkAndCheckGrammarInString:(id)string language:(id)language usingChecker:(id)checker details:(id*)details;
-(NSRange)_chunkAndFindMisspelledWordInString:(id)string language:(id)language learnedDictionaries:(id)dictionaries wordCount:(int*)count correction:(id*)correction usingChecker:(id)checker;
-(NSRange)rangeOfMisspelledWordInString:(id)string range:(NSRange)range startingAt:(int)at wrap:(BOOL)wrap language:(id)language;
-(NSRange)checkSpellingOfString:(id)string startingAt:(int)at language:(id)language wrap:(BOOL)wrap correction:(id*)correction;
-(NSRange)checkGrammarOfString:(id)string startingAt:(int)at language:(id)language wrap:(BOOL)wrap details:(id*)details;
-(id)correctionForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;
-(id)guessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;
-(id)completionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;
-(id)suggestWordInLanguage:(id)language;
-(id)stringForInputString:(id)inputString language:(id)language;
-(void)ignoreWord:(id)word;
-(id)ignoredWords;
-(void)setIgnoredWords:(id)words;
-(BOOL)isWordInUserDictionaries:(id)userDictionaries caseSensitive:(BOOL)sensitive;
@end
