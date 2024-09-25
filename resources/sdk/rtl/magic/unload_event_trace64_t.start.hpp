#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_UNLOAD_EVENT_TRACE64.BaseAddress", base_address, 0x0, 0x40, true, 0xd949cc5c9bb6dd17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_UNLOAD_EVENT_TRACE64.SizeOfImage", size_of_image, 0x40, 0x40, true, 0x2bd835f7525be8e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE64.Sequence", sequence, 0x80, 0x20, true, 0x8bb35f107f6d6309)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE64.TimeDateStamp", time_date_stamp, 0xa0, 0x20, true, 0xbc9bee237b01ba06)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE64.CheckSum", check_sum, 0xc0, 0x20, true, 0x4d0c08b6cef58a4b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_RTL_UNLOAD_EVENT_TRACE64.ImageName", image_name, 0xe0, 0x0, true, 0x2de90d241dfa3c11)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_RTL_UNLOAD_EVENT_TRACE64.Version", version, 0x2e0, 0x40, true, 0xa586dda4189ce07e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif