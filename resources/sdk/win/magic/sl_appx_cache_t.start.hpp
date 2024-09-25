#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_APPX_CACHE.Version", version, 0x0, 0x20, true, 0xb08f6ecdfb03a564)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_APPX_CACHE.Flags", flags, 0x20, 0x20, true, 0xdaa5aa6fe12863b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_APPX_CACHE.DataSize", data_size, 0x40, 0x20, true, 0xe76b5d3eecb8b866)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SL_APPX_CACHE.DataCheckSum", data_check_sum, 0x80, 0x40, true, 0xd17eaa0de1023570)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::sl_appx_cache_value_descriptor_t, 1>), "_SL_APPX_CACHE.Descriptors", descriptors, 0xc0, 0x80, true, 0x51f4ce781e57e7a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif