#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.Version", version, 0x0, 0x0, false, 0x60adc6e0cb95a61e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.Flags", flags, 0x0, 0x0, false, 0xccd69e8353aa2044)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.FileSize", file_size, 0x0, 0x0, false, 0x642f7ad6ed2ca7dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.CreationTime", creation_time, 0x0, 0x0, false, 0xcc7dec961af0d2b7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.ModifiedTime", modified_time, 0x0, 0x0, false, 0x896897ad617a71a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.AccessedTime", accessed_time, 0x0, 0x0, false, 0xe34cdec0a8ef5ad9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.FileAttributes", file_attributes, 0x0, 0x0, false, 0xacf8b0eb733b4ac0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.FileIdentityOffset", file_identity_offset, 0x0, 0x0, false, 0xd0e3af240ad06475)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.FileIdentityLength", file_identity_length, 0x0, 0x0, false, 0x9777ecd07e1397b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif