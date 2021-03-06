/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SportsWorkout-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileHandle, NSTimer;

@interface SWBluetoothMessageHandler : XXUnknownSuperclass {
	CFRunLoopRef _btRunLoop;
	CFRunLoopTimerRef _futureTimer;
	BOOL _shouldCancelBTThread;
	BOOL _isActive;
	BOOL _isActivating;
	BOOL _isConnecting;
	unsigned _btSensorDeviceCount;
	NSTimer* _multiSensorTimer;
	int _deviceVirtualType;
	unsigned _serviceMask;
	BTSessionImplRef _btSession;
	BTLocalDeviceImplRef _btLocalDevice;
	BTDiscoveryAgentImplRef _btDiscoveryAgent;
	BTDeviceImplRef _btSensorDevice;
	NSFileHandle* _btSensorDeviceInputHandle;
	BOOL _rssi;
}
@property(readonly, assign, nonatomic) BOOL rssi;
+(id)newMessageHandler;
-(id)init;
-(void)_btThreadMain;
-(void)_cancelBTThread;
-(const char*)__btSessionName;
-(BOOL)isActive;
-(void)activate;
-(void)deactivate;
-(void)beginDeviceDiscovery:(int)discovery serviceMask:(unsigned)mask;
-(BOOL)isSensorDeviceDiscovered;
-(void)forgetSensorDevice;
-(void)connectToDeviceWithAddress:(XXStruct_BfdK7C)address;
-(void)cancelConnectToDevice;
-(BOOL)isSensorDeviceConnected;
-(XXStruct_BfdK7C)deviceAddressForSensor;
-(void)startReadingInput;
-(void)_attachToSession;
-(void)_detachSession;
-(void)_getLocalDevice;
-(void)_clearLocalDevice;
-(void)_setupLocalDeviceCallbacks;
-(void)_clearLocalDeviceCallbacks;
-(void)_setupServiceCallbacks;
-(void)_clearServiceCallbacks;
-(void)_createDiscoveryAgent;
-(void)_beginDiscoveryAgentScan;
-(void)_getDiscoveredDevicesFromAgent;
-(void)_handleDeviceFound:(BTDeviceImplRef)found;
-(void)_handleDeviceLost:(BTDeviceImplRef)lost;
-(void)_stopDiscoveryAgentScan;
-(void)_destroyDiscoveryAgent;
-(void)_setSensorDeviceVirtualType;
-(BOOL)_isPowerOnForLocalDeviceModule:(unsigned)localDeviceModule;
-(void)_setPowerOn:(BOOL)on forLocalDeviceModule:(unsigned)localDeviceModule;
-(void)_handleMultiSensorTimer:(id)timer;
-(void)_handleScanDidEnd;
-(void)_setDeviceForAddress:(XXStruct_BfdK7C)address;
-(void)_connectToDevice:(BTDeviceImplRef)device;
-(void)_disconnectFromDevice:(BTDeviceImplRef)device;
-(void)_handleDataAvailableNotification:(id)notification;
-(void)_openInputPort;
-(void)_closeInputPort;
-(void)_handleApplicationWillTerminateNotification:(id)_handleApplication;
-(void)_bluetoothSessionDidAttach:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_bluetoothSessionDidDetach:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_bluetoothSessionDidTerminate:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_bluetoothSessionDidFail:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangePowerState:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangeName:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangeDiscoverability:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangeConnectability:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangePairingStatus:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangeConnectionStatus:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_retryConnectToDevice;
-(void)_bluetoothLocalDeviceDiscoveryDidStart:(BTLocalDeviceImplRef)_bluetoothLocalDeviceDiscovery withResult:(int)result;
-(void)_bluetoothLocalDeviceDiscoveryDidEnd:(BTLocalDeviceImplRef)_bluetoothLocalDeviceDiscovery withResult:(int)result;
-(void)_bluetoothServicesDidConnect:(unsigned)_bluetoothServices device:(BTDeviceImplRef)device forEvent:(unsigned)event withResult:(int)result;
-(void)_bluetoothServicesDidDisconnect:(unsigned)_bluetoothServices device:(BTDeviceImplRef)device forEvent:(unsigned)event withResult:(int)result;
-(void)_bluetoothServicesDidIndicateServiceSpecificEvent:(unsigned)_bluetoothServices device:(BTDeviceImplRef)device forEvent:(unsigned)event withResult:(int)result;
-(void)_bluetoothDiscoveryAgentScanDidBegin:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentScan forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothDiscoveryAgentScanDidEnd:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentScan forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothDiscoveryAgentQueryDidBegin:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentQuery forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothDiscoveryAgentQueryDidEnd:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentQuery forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothDiscoveryAgent:(BTDiscoveryAgentImplRef)agent didFindDevice:(BTDeviceImplRef)device withAttributes:(unsigned)attributes;
-(void)_bluetoothDiscoveryAgent:(BTDiscoveryAgentImplRef)agent didLoseDevice:(BTDeviceImplRef)device withAttributes:(unsigned)attributes;
-(void)_bluetoothDiscoveryAgent:(BTDiscoveryAgentImplRef)agent deviceDidChange:(BTDeviceImplRef)device withAttributes:(unsigned)attributes;
-(void)requestRSSI;
@end

