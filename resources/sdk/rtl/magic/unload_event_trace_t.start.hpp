#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_UNLOAD_EVENT_TRACE.BaseAddress", base_address, 0x0, 0x40, true, 0x885e93c5f17fb046)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_UNLOAD_EVENT_TRACE.SizeOfImage", size_of_image, 0x40, 0x40, true, 0x2990bc1fa8a39b31)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE.Sequence", sequence, 0x80, 0x20, true, 0x919c0a2a5d361536)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE.TimeDateStamp", time_date_stamp, 0xa0, 0x20, true, 0xb1296d3213a33fb0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UNLOAD_EVENT_TRACE.CheckSum", check_sum, 0xc0, 0x20, true, 0xb36f3ec093820e4e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_RTL_UNLOAD_EVENT_TRACE.ImageName", image_name, 0xe0, 0x0, true, 0x8c500c0fcb8f78cb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_RTL_UNLOAD_EVENT_TRACE.Version", version, 0x2e0, 0x40, true, 0x8444b8ab2a701611)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif