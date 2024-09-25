#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.Version", version, 0x0, 0x0, false, 0x2986d428ebfc2e0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.MessageCode", message_code, 0x0, 0x0, false, 0x9cd66fe23d016c7e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.FileId", file_id, 0x0, 0x0, false, 0x89431f1c2d5bf037)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.ContainingOffset", containing_offset, 0x0, 0x0, false, 0xbdab0abd95b89af8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.ContainingLength", containing_length, 0x0, 0x0, false, 0xc25e53b2686f0872)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.RequiredOffset", required_offset, 0x0, 0x0, false, 0x14b7f6c8ee7e1b2c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.RequiredLength", required_length, 0x0, 0x0, false, 0x4d62d6dec9869036)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.Flags", flags, 0x0, 0x0, false, 0x90560e805e893f2c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.Alignment", alignment, 0x0, 0x0, false, 0xa48db28cd94a799a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.FileIdentityOffset", file_identity_offset, 0x0, 0x0, false, 0x15ac8cd32b5f2542)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.FileIdentityLength", file_identity_length, 0x0, 0x0, false, 0x62577442cb5beb5e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.ServiceIdentityOffset", service_identity_offset, 0x0, 0x0, false, 0x5cfb60db1443d21f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROVIDER_MESSAGE.FetchData.ServiceIdentityLength", service_identity_length, 0x0, 0x0, false, 0x7ca3e555c590d702)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_fetch_data_t), "_CLOUD_PROVIDER_MESSAGE.FetchData", fetch_data, 0x0, 0x0, false, 0xfbccad7ab0fc560a)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif