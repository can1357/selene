#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORYSTATUSEX.dwLength", dw_length, 0x0, 0x20, true, 0xc11c11a280e4d022)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORYSTATUSEX.dwMemoryLoad", dw_memory_load, 0x20, 0x20, true, 0x90b90c85d41408d9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUSEX.ullTotalPhys", ull_total_phys, 0x40, 0x40, true, 0x4b2e9fec046e1fe0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUSEX.ullAvailPhys", ull_avail_phys, 0x80, 0x40, true, 0x6cdaece307cc416c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUSEX.ullTotalPageFile", ull_total_page_file, 0xc0, 0x40, true, 0x91f1a6c9033ca052)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUSEX.ullAvailPageFile", ull_avail_page_file, 0x100, 0x40, true, 0x438de1a3fd5738c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUSEX.ullTotalVirtual", ull_total_virtual, 0x140, 0x40, true, 0x23648e0d36ad3f87)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUSEX.ullAvailVirtual", ull_avail_virtual, 0x180, 0x40, true, 0x187e04b59320264a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORYSTATUSEX.ullAvailExtendedVirtual", ull_avail_extended_virtual, 0x1c0, 0x40, true, 0x244185ceaa3aec1d)
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