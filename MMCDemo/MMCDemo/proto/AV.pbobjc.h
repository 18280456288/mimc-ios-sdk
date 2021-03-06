// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: a_v.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum MIMC_RTS_TYPE

typedef GPB_ENUM(MIMC_RTS_TYPE) {
  MIMC_RTS_TYPE_Audio = 1,
  MIMC_RTS_TYPE_Video = 2,
};

GPBEnumDescriptor *MIMC_RTS_TYPE_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL MIMC_RTS_TYPE_IsValidValue(int32_t value);

#pragma mark - Enum MIMC_RTS_CODEC_TYPE

typedef GPB_ENUM(MIMC_RTS_CODEC_TYPE) {
  MIMC_RTS_CODEC_TYPE_OsCodec = 1,
  MIMC_RTS_CODEC_TYPE_Ffmpeg = 2,
  MIMC_RTS_CODEC_TYPE_Speex = 3,
};

GPBEnumDescriptor *MIMC_RTS_CODEC_TYPE_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL MIMC_RTS_CODEC_TYPE_IsValidValue(int32_t value);

#pragma mark - AVRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface AVRoot : GPBRootObject
@end

#pragma mark - MIMCRtsPacket

typedef GPB_ENUM(MIMCRtsPacket_FieldNumber) {
  MIMCRtsPacket_FieldNumber_Type = 1,
  MIMCRtsPacket_FieldNumber_CodecType = 2,
  MIMCRtsPacket_FieldNumber_Sequence = 3,
  MIMCRtsPacket_FieldNumber_Payload = 4,
};

@interface MIMCRtsPacket : GPBMessage

@property(nonatomic, readwrite) MIMC_RTS_TYPE type;

@property(nonatomic, readwrite) BOOL hasType;
@property(nonatomic, readwrite) MIMC_RTS_CODEC_TYPE codecType;

@property(nonatomic, readwrite) BOOL hasCodecType;
@property(nonatomic, readwrite) uint64_t sequence;

@property(nonatomic, readwrite) BOOL hasSequence;
@property(nonatomic, readwrite, copy, null_resettable) NSData *payload;
/** Test to see if @c payload has been set. */
@property(nonatomic, readwrite) BOOL hasPayload;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
