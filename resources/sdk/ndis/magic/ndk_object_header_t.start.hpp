#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_version_t), "_NDK_OBJECT_HEADER.Version", version, 0x0, 0x20, true, 0xf005987d38a21db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ndk_object_type_t), "_NDK_OBJECT_HEADER.ObjectType", object_type, 0x20, 0x20, true, 0x6cccdee0209a1dab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_reserved_block_t), "_NDK_OBJECT_HEADER.NdkReserved", ndk_reserved, 0x40, 0x0, true, 0x2f60210cf7e6826)
#else
#define _m00
#define _m01
#define _m02
#endif