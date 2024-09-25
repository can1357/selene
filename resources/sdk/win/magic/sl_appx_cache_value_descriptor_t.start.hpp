#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_SL_APPX_CACHE_VALUE_DESCRIPTOR.HashedName", hashed_name, 0x0, 0x0, true, 0x20fa9c60ca865121)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SL_APPX_CACHE_VALUE_DESCRIPTOR.Expiration", expiration, 0x100, 0x40, true, 0xa9858a8adc20021c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_APPX_CACHE_VALUE_DESCRIPTOR.DataSize", data_size, 0x140, 0x20, true, 0xd0982639de78846b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SL_APPX_CACHE_VALUE_DESCRIPTOR.Data", data, 0x160, 0x8, true, 0xa86c5ed770443c8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif