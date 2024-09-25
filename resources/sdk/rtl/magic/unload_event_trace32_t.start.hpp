#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE32.BaseAddress", base_address, 0x0, 0x20, true, 0xb5f64f6acbccb92c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE32.SizeOfImage", size_of_image, 0x20, 0x20, true, 0x3e4692e7eca310ea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE32.Sequence", sequence, 0x40, 0x20, true, 0x37dfd404d8b997b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE32.TimeDateStamp", time_date_stamp, 0x60, 0x20, true, 0xca55e01000cd3f12)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE32.CheckSum", check_sum, 0x80, 0x20, true, 0x45cdf6ccab86536c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_RTL_UNLOAD_EVENT_TRACE32.ImageName", image_name, 0xa0, 0x0, true, 0xc5e2a1d2508707f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_RTL_UNLOAD_EVENT_TRACE32.Version", version, 0x2a0, 0x40, true, 0x2e79b6e9d4f938d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif