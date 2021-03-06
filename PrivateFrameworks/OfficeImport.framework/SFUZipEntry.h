/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUZipEntry.h"
#import "SFUDataRepresentation.h"

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipEntry : SFUDataRepresentation {
@private
	SFUDataRepresentation<SFUZipArchiveDataRepresentation>* mArchiveDataRepresentation;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;
	unsigned long long mDataOffset;
	BOOL mHasDataOffset;
	unsigned long long mEncodedLength;
	BOOL mHasEncodedLength;
	SFUCryptoKey* mCryptoKey;
}
-(id)initFromCentralFileHeader:(const char*)centralFileHeader dataRepresentation:(id)representation;
-(id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;
-(void)dealloc;
-(BOOL)isReadable;
-(long long)dataLength;
-(long long)encodedLength;
-(id)inputStream;
-(id)data;
-(void)copyToFile:(id)file;
-(BOOL)isCompressed;
-(BOOL)isEncrypted;
-(BOOL)isBackedByFile;
-(id)backingFilePath;
-(unsigned long long)backingFileDataOffset;
-(unsigned)crc;
-(void)readZip64ExtraField:(const char*)field size:(unsigned long)size;
-(void)setCompressionFlags:(unsigned short)flags;
-(void)setCryptoKey:(id)key;
-(void)setDataLength:(long long)length;
@end

@interface SFUZipEntry (Private)
-(unsigned long long)dataOffset;
-(unsigned long long)calculateEncodedLength;
@end

