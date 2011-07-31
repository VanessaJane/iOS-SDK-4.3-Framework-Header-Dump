/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSMutableData, NSCountedSet, SSMutableURLRequestProperties, NSURLResponse, SSURLRequestProperties, NSURLRequest, ISDataProvider, SSAuthenticationContext, NSURLConnection;
@protocol ISURLOperationDelegate;

@interface ISURLOperation : ISOperation {
	NSURLRequest* _activeURLRequest;
	SSAuthenticationContext* _authenticationContext;
	NSURLConnection* _connection;
	long long _contentLength;
	NSMutableData* _dataBuffer;
	ISDataProvider* _dataProvider;
	int _networkRetryCount;
	NSCountedSet* _redirectURLs;
	SSMutableURLRequestProperties* _requestProperties;
	NSURLResponse* _response;
	BOOL _shouldSetCookies;
}
@property(assign) id<ISURLOperationDelegate> delegate;
@property(retain) SSAuthenticationContext* authenticationContext;
@property(retain) ISDataProvider* dataProvider;
@property(retain) NSURLResponse* response;
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;
@property(copy) SSURLRequestProperties* requestProperties;
+(id)copyUserAgent;
-(id)init;
-(void)dealloc;
-(id)request;
-(void)setRequest:(id)request;
-(void)run;
-(BOOL)handleRedirectFromDataProvider:(id)dataProvider;
-(void)handleResponse:(id)response;
-(id)newRequestWithURL:(id)url;
-(BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id*)error;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)connectionDidFinishLoading:(id)connection;
-(void)_networkTypeChanged:(id)changed;
-(id)_accountIdentifier;
-(id)_networkConstraints;
-(id)_requestProperties;
-(void)_handleFinishedLoading;
-(void)_handleReceivedData:(id)data;
-(void)_handleReceivedResponse:(id)response;
-(id)_handleRedirectRequest:(id)request response:(id)response;
-(id)_activeURL;
-(id)_copyAcceptLanguageString;
-(id)_copyConnectionProperties;
-(id)_copyQueryStringDictionaryForRedirect:(id)redirect;
-(long long)_contentLength;
-(void)_logRequest:(id)request;
-(void)_logResponseBody:(id)body;
-(BOOL)_preflightWithURL:(id)url error:(id*)error;
-(void)_retry;
-(void)_run;
-(BOOL)_runRequestWithURL:(id)url;
-(BOOL)_runWithURL:(id)url;
-(void)_sendContentLengthToDelegate:(long long)delegate;
-(void)_sendOutputToDelegate:(id)delegate;
-(void)_sendRequestToDelegate:(id)delegate;
-(void)_sendResponseToDelegate:(id)delegate;
-(void)_setActiveURLRequest:(id)request;
-(void)_setContentLength:(long long)length;
-(void)_stopConnection;
-(void)_updateProgress;
-(BOOL)_validateContentLength:(long long)length error:(id*)error;
@end
