/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, NSMutableDictionary, SBProcess, NSDictionary, NSMutableSet, CPDistributedNotificationCenter, NSLock, NSTimer;

@interface SBApplicationController : XXUnknownSuperclass {
	NSDictionary* _pendingApplicationDictionaries;
	NSMutableDictionary* _applications;
	NSMutableDictionary* _applicationsByBundleIdentifer;
	NSMutableSet* _applicationsUsingLocation;
	NSTimer* _locationIconTimer;
	BOOL _locationIconRemovalPending;
	SBProcess* _processCurrentlyRecordingAudio;
	NSDictionary* _backgroundDisplayDict;
	unsigned _ignoreUninstallationEventCount;
	CPDistributedNotificationCenter* _appStateNotificationCenter;
	NSOperationQueue* _backgroundOperationQueue;
	NSLock* _applicationsLock;
}
@property(retain) NSDictionary* pendingApplicationDictionaries;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)dealloc;
-(void)_unregisterForAudioRecordingNotifications;
-(void)_registerForAudioRecordingNotifications;
-(void)_mediaServerConnectionDied:(id)died;
-(void)_recordingStateChanged:(id)changed;
-(void)_registerForAwayControllerDidLockNotification;
-(void)_awayControllerDidLock:(id)_awayController;
-(void)_setLocationIconTimer;
-(void)_removeLocationIconTimer;
-(void)_locationIconTimerFired:(id)fired;
-(BOOL)_locationActiveForAppWithDetails:(id)details;
-(void)_updateLocationState;
-(void)buildLocationState;
-(BOOL)appsAreUsingLocation;
-(id)allApplications;
-(id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
-(id)applicationsWithPid:(int)pid;
-(id)processWithPid:(int)pid;
-(id)applicationWithDisplayIdentifier:(id)displayIdentifier;
-(id)applicationWithPid:(int)pid;
-(id)primaryRoleApplicationWithPid:(int)pid;
-(id)iPod;
-(id)applicationCurrentlyRecordingAudio;
-(id)dataActivation;
-(id)loadApplications;
-(void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons4;
-(void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
-(void)uninstallApplication:(id)application;
-(void)waitForOperationsToComplete;
-(Class)applicationClassForBundleIdentifier:(id)bundleIdentifier;
-(void)loadRolesWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables;
-(BOOL)_hasRequiredCapabilities:(id)capabilities;
-(void)updateSchemesForRoleDefinition:(id)roleDefinition displayIdentifier:(id)identifier application:(id)application;
-(id)rolesForInfoPlist:(id)infoPlist;
-(id)rolesForRoleDefinitions:(id)roleDefinitions;
-(id)displayNameForInfoDictionary:(id)infoDictionary inBundle:(id)bundle atPath:(id)path;
-(id)widgetRoles;
-(void)_applicationInstallationCallback:(id)callback;
-(void)_handleInstalledApplicationDictionaryIfReceived;
-(void)processPendingInstalls;
-(void)applicationStateChanged:(id)changed state:(unsigned)state;
-(void)setApplicationRoles:(id)roles withProcess:(id)process;
-(void)_reloadBackgroundIDsDict;
-(void)_setSuspendTypeForApp:(id)app;
-(void)updateBackgroundAppPrefs;
-(id)_defaultRoleForApplication:(id)application;
-(BOOL)aquireInstallationAssertionForDisplayIdentifier:(id)displayIdentifier clientPort:(unsigned)port;
@end

