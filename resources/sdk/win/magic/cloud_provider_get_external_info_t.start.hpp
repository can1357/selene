#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.Version", version, 0x0, 0x0, false, 0x99f9f3ddb4fc4fa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.Flags", flags, 0x0, 0x0, false, 0xde9c31bd26fb12a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.BytesLocallyPresent", bytes_locally_present, 0x0, 0x0, false, 0x525bac3be1aa8440)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.BytesMetadata", bytes_metadata, 0x0, 0x0, false, 0xf72056db6f14c6ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.ServiceIdentityOffset", service_identity_offset, 0x0, 0x0, false, 0x12a9f1f5b75df8c4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.ServiceIdentityLength", service_identity_length, 0x0, 0x0, false, 0x33552afb8cdf6360)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.FileIdentityOffset", file_identity_offset, 0x0, 0x0, false, 0xb10f1d92802b2942)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.FileIdentityLength", file_identity_length, 0x0, 0x0, false, 0xfc3f532ad495cbb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif