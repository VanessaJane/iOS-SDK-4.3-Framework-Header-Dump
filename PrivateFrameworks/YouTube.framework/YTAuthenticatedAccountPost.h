/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableURLRequest, NSURLConnection, NSMutableData;

@interface YTAuthenticatedAccountPost : XXUnknownSuperclass {
	id _delegate;
	NSMutableURLRequest* _postRequest;
	NSURLConnection* _connection;
	int _type;
	BOOL _validResponse;
	NSMutableData* _rawData;
}
-(void)_listenForAuthenticationNotifications:(BOOL)authenticationNotifications;
-(id)init;
-(void)_cleanup;
-(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)failWithError:(id)error;
-(void)submitRequestOfType:(id)type;
-(void)submitRequest;
-(void)_didAuthenticate:(id)authenticate;
-(void)_failedToAuthenticate:(id)authenticate;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)setRating:(BOOL)rating forVideo:(id)video;
-(void)postComment:(id)comment forVideo:(id)video;
-(void)fileComplaintForVideo:(id)video;
-(void)addVideoToFavorites:(id)favorites;
-(void)_deleteVideo:(id)video;
-(void)removeVideoFromFavorites:(id)favorites;
-(void)removeVideoFromPlaylist:(id)playlist;
-(void)_removePS:(id)ps;
-(void)unsubscribeToSubscription:(id)subscription;
-(void)removePlaylist:(id)playlist;
@end

