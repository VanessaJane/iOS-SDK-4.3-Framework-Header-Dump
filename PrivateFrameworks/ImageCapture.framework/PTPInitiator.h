/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PTPEventPacket, NSString, PTPWrappedBytes, PTPTransport, PTPDeviceInfoDataset, PTPOperationResponsePacket, NSMutableArray, NSMutableDictionary;

@interface PTPInitiator : XXUnknownSuperclass {
	PTPTransport* _transport;
	PTPOperationResponsePacket* _response;
	PTPEventPacket* _event;
	unsigned _transactionID;
	unsigned short _operationCode;
	BOOL _responseReceived;
	BOOL _requestPending;
	unsigned _lastAddedObject;
	id _delegate;
	BOOL _sessionOpen;
	BOOL _needToReopenSession;
	NSMutableArray* _storages;
	PTPDeviceInfoDataset* _deviceInfo;
	NSMutableArray* _eventQueue;
	unsigned short _deviceVendorID;
	unsigned short _deviceProductID;
	NSString* _UUIDString;
	NSString* _deviceSerialNumberString;
	unsigned _estimatedNumOfDownloadableObjects;
	unsigned _numOfDownloadableObjectsPlusFolders;
	unsigned _contentCatalogPercentCompleted;
	NSString* _userAssignedDeviceName;
	BOOL _appleDeviceHasNewFW;
	BOOL _deviceIsPairedWithThisHost;
	BOOL _deviceIsPasscodeLocked;
	BOOL _deviceIsDummyPTPDevice;
	NSMutableDictionary* _arrayOf64BitFileSizes;
	PTPWrappedBytes* _dataForTransaction;
	unsigned long long _excessReceivedDataSize;
	unsigned long long _totalFDFileSize;
	unsigned long long _totalFDReceivedSize;
	unsigned _totalFDReportedProgress;
	double _currentFDNoteTime;
	char* _metadataBuffer;
	unsigned _maxMetadataBufferSize;
}
-(id)initWithHostLocationID:(unsigned long)hostLocationID;
-(void)dealloc;
-(id)itemForObjectHandle:(unsigned long)objectHandle;
-(void)setDelegate:(id)delegate;
-(id)initiator;
-(id)transport;
-(char*)metadataBuffer;
-(unsigned long)maxMetadataBufferSize;
-(unsigned short)deviceVendorID;
-(unsigned short)deviceProductID;
-(id)deviceSerialNumberString;
-(id)UUIDString;
-(BOOL)appleDeviceHasNewFW;
-(BOOL)deviceIsPairedWithThisHost;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)deviceIsDummyPTPDevice;
-(unsigned long)numOfDownloadableObjectsPlusFolders;
-(unsigned long)contentCatalogPercentCompleted;
-(void)setContentCatalogPercentCompleted:(unsigned long)completed;
-(BOOL)start;
-(void)stop;
-(void)cancel;
-(int)transportConnectionStatus;
-(id)refreshAssignedDeviceName;
-(id)userAssignedDeviceName;
-(void)handleStartData:(id)data;
-(void)appendDataBuffer:(void*)buffer length:(unsigned long)length;
-(void)handleData:(id)data;
-(void)handleResponse:(id)response;
-(void)handleEvent:(id)event;
-(void)handleReroutedEvent:(id)event;
-(void)handleDeviceRemoval;
-(void)processUnhandledEvents;
-(BOOL)waitForResponseWithTimeout:(double)timeout notifyProgressForFile:(id)file;
-(void)issueCancelEvent:(unsigned long)event;
-(void)issueCancelRequest:(unsigned long)request;
-(id)sendRequest:(id)request excessReceivedDataSize:(unsigned long long*)size timeout:(unsigned long)timeout;
-(id)sendRequest:(id)request andTransmitData:(id)data;
-(id)sendRequest:(id)request andReceiveData:(id)data maxDataSize:(unsigned long)size excessReceivedDataSize:(unsigned long long*)size4 timeout:(unsigned long)timeout notifyProgressForFile:(id)file;
-(id)sendRequest:(id)request andReceiveData:(id)data excessReceivedDataSize:(unsigned long long*)size timeout:(unsigned long)timeout;
-(void)sentData:(id)data responseCode:(id)code timeout:(unsigned long)timeout;
-(id)deviceInfo;
-(id)devicePropertyDescDatasetForProperty:(unsigned short)property;
-(id)devicePropertyValueForProperty:(unsigned short)property;
-(BOOL)setDevicePropertyValue:(id)value forProperty:(unsigned short)property;
-(BOOL)resetDevicePropertyValueForProperty:(unsigned short)property;
-(BOOL)openSession;
-(BOOL)closeSession;
-(id)storageIDs;
-(id)storageInfo:(unsigned long)info;
-(void)readStorages;
-(id)storageForStorageID:(unsigned long)storageID;
-(unsigned long)numObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;
-(id)objectHandlesInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;
-(id)objectHandlesInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;
-(id)objectInfo:(unsigned long)info;
-(id)objectInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;
-(id)objectInfosForObjectsInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;
-(unsigned long long)objectInfo64BitSize:(unsigned long)size;
-(id)objectFilesystemInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;
-(id)dataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned*)size3 useBuffer:(char*)buffer notifyProgress:(BOOL)progress;
-(id)partialDataFromFile:(id)file fromOffset:(unsigned long)offset maxSize:(unsigned long)size actualSize:(unsigned*)size4 useBuffer:(char*)buffer notifyProgress:(BOOL)progress;
-(id)thumbDataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned*)size3 useBuffer:(char*)buffer;
-(BOOL)saveFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned*)size3 fileDescriptor:(int)descriptor notifyProgress:(BOOL)progress;
-(BOOL)savePartialFile:(id)file fromOffset:(unsigned long long)offset maxSize:(unsigned long long)size actualSize:(unsigned long long*)size4 fileDescriptor:(int)descriptor notifyProgress:(BOOL)progress;
-(BOOL)initiateCapture;
-(BOOL)deleteFile:(id)file;
-(id)deviceDateTime;
-(double)timeOffset;
-(BOOL)setDeviceDateTime:(id)time;
-(void)transportActivated;
-(void)transportDeactivated;
-(unsigned short)deviceStatus;
-(void)deviceReset;
-(BOOL)requestPending;
-(BOOL)isAccessRestrictedAppleDevice;
-(BOOL)allowKeepAwake;
@end

