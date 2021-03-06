/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKPlayer.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"

@class NSArray, NSDictionary, NSMutableArray, NSNumber, GKGame, NSString;

@interface GKPlayer : XXUnknownSuperclass {
	NSString* _playerID;
	NSString* _alias;
	BOOL _isFriend;
	double _lastSeenTime;
	NSString* _status;
	int _rating;
	NSDictionary* _avatarURLs;
	NSDictionary* _avatarDescription;
	NSMutableArray* _achievementsAchievedList;
	NSArray* _achievementListFromServer;
	double _lastPlayedTime;
	int _inviteStatus;
	NSString* _firstName;
	NSString* _lastName;
	BOOL _hasDetailInfo;
	unsigned _numberOfFriends;
	unsigned _numberOfGamesPlayed;
	unsigned _numberOfAchievements;
	NSDictionary* _lastPlayedGameDescriptor;
	NSNumber* _numberAchievedForCurrentGame;
	NSString* _friendRequestID;
	NSMutableArray* _emails;
	id _rateCompletionHandler;
	NSMutableArray* _cachedAvatars;
}
@property(retain, nonatomic) NSString* playerID;
@property(copy, nonatomic) NSString* alias;
@property(assign, nonatomic) BOOL isFriend;
@property(assign, nonatomic) double lastSeenTime;
@property(copy, nonatomic) NSString* status;
@property(assign, nonatomic) int rating;
@property(retain, nonatomic) NSDictionary* avatarURLs;
@property(retain, nonatomic) NSDictionary* avatarDescription;
@property(retain, nonatomic) NSMutableArray* achievementsAchievedList;
@property(retain, nonatomic) NSArray* achievementListFromServer;
@property(assign, nonatomic) double lastPlayedTime;
@property(assign, nonatomic) int inviteStatus;
@property(retain, nonatomic) NSString* firstName;
@property(retain, nonatomic) NSString* lastName;
@property(assign, nonatomic) BOOL hasDetailInfo;
@property(assign, nonatomic) unsigned numberOfFriends;
@property(assign, nonatomic) unsigned numberOfGamesPlayed;
@property(assign, nonatomic) unsigned numberOfAchievements;
@property(retain, nonatomic) NSDictionary* lastPlayedGameDescriptor;
@property(retain, nonatomic) NSNumber* numberAchievedForCurrentGame;
@property(retain, nonatomic) NSString* friendRequestID;
@property(retain, nonatomic) NSMutableArray* emails;
@property(copy, nonatomic) id rateCompletionHandler;
@property(retain, nonatomic) NSMutableArray* cachedAvatars;
+(id)anonymousPlayer;
+(void)loadPlayersForIdentifiers:(id)identifiers withCompletionHandler:(id)completionHandler;
-(id)initWithPlayerID:(id)playerID;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)cacheKey;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
@end

@interface GKPlayer (GKPlayerPrivate)
@property(readonly, assign, nonatomic) int rating;
@property(retain, nonatomic) NSNumber* numberAchievedForCurrentGame;
@property(assign, nonatomic) unsigned numberOfAchievements;
@property(assign, nonatomic) unsigned numberOfGamesPlayed;
@property(assign, nonatomic) unsigned numberOfFriends;
@property(assign, nonatomic) BOOL hasDetailInfo;
@property(assign, nonatomic) int inviteStatus;
@property(readonly, retain, nonatomic) NSString* cacheKey;
@property(readonly, assign, nonatomic) GKGame* lastPlayedGame;
@property(retain, nonatomic) NSArray* achievementListFromServer;
@property(retain, nonatomic) NSMutableArray* achievementsAchievedList;
@property(assign, nonatomic) double lastPlayedTime;
@property(retain, nonatomic) NSArray* emails;
@property(readonly, assign, nonatomic) NSString* email;
@property(assign, nonatomic) double lastSeenTime;
@property(assign, nonatomic) BOOL isFriend;
@property(retain, nonatomic) NSString* alias;
@property(retain, nonatomic) NSDictionary* avatarDescription;
@property(retain, nonatomic) NSDictionary* avatarURLs;
+(void)loadPlayersForIdentifiers:(id)identifiers withDetails:(BOOL)details withCompletionHandler:(id)completionHandler;
+(void)clearCache;
+(void)updatePlayersWithFriendIDs:(id)friendIDs;
+(id)playerWithUniqueID:(id)uniqueID;
+(id)playerWithAlias:(id)alias playerID:(id)anId friendRequestID:(id)anId3;
+(id)playerWithDictionary:(id)dictionary;
-(void)_postChangeNotification;
-(void)postChangeNotification;
-(void)addEmail:(id)email verified:(BOOL)verified;
-(BOOL)populateWithDictionary:(id)dictionary;
-(id)identifiableNameIncludingSurname:(BOOL)surname;
-(void)updateNamesFromAddressBook;
-(void)acceptFriendRequestForHandle:(id)handle withCompletionHandler:(id)completionHandler;
-(void)declineFriendRequest:(id)request;
-(void)loadRecentMatchesForGame:(id)game block:(id)block;
-(void)loadGamesPlayed:(id)played;
-(void)loadGamePlayedRecord:(id)record withCompletionHandler:(id)completionHandler;
-(void)loadGamesPlayedScoreCard:(id)card withCompletionHandler:(id)completionHandler;
-(void)reloadDetails;
-(void)loadInfoDetailed:(BOOL)detailed withCompletionHandler:(id)completionHandler;
-(void)clearDetails;
-(void)submitRating:(int)rating withCompletionHandler:(id)completionHandler;
-(id)avatarURLForSize:(int)size;
-(void)sendFriendRequestWithMessage:(id)message withCompletionHandler:(id)completionHandler;
-(void)_loadAvatarImageForSize:(int)size withCompletionHandler:(id)completionHandler;
-(void)loadAvatarImageForSize:(int)size withCompletionHandler:(id)completionHandler;
-(void)loadAvatarForSize:(int)size withCompletionHandler:(id)completionHandler;
-(void)invalidateCachedProfileWithCompletionHandler:(id)completionHandler;
@end

@interface GKPlayer (GKPlayerUI)
-(id)quotedAlias;
-(id)quotedAliasWithFont:(id)font foreColor:(id)color shadowColor:(id)color3;
-(id)attributedIdentifiableName:(id)name withFont:(id)font foreColor:(id)color shadowColor:(id)color4;
-(id)attributedDisplayName;
-(id)attributedDisplayNameWithIdentifiableName:(BOOL)identifiableName;
-(id)sortName;
-(id)displayNameWithIdentifiableName:(BOOL)identifiableName;
-(id)displayName;
@end

