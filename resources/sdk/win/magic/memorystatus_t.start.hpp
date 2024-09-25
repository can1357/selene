#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORYSTATUS.dwLength", dw_length, 0x0, 0x20, true, 0xfa7103df07af991c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORYSTATUS.dwMemoryLoad", dw_memory_load, 0x20, 0x20, true, 0xdb075f356c63d4e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUS.dwTotalPhys", dw_total_phys, 0x40, 0x40, true, 0x6947f0d20813d7ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUS.dwAvailPhys", dw_avail_phys, 0x80, 0x40, true, 0x5718cb8de7efdd54)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUS.dwTotalPageFile", dw_total_page_file, 0xc0, 0x40, true, 0x59ef5ebf6336a96e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUS.dwAvailPageFile", dw_avail_page_file, 0x100, 0x40, true, 0x1248a2b80c7e73af)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUS.dwTotalVirtual", dw_total_virtual, 0x140, 0x40, true, 0xa0115eb1291ad32b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUS.dwAvailVirtual", dw_avail_virtual, 0x180, 0x40, true, 0xf82d8baa8faee378)
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