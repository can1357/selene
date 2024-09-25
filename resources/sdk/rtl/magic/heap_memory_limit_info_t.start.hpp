#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_MEMORY_LIMIT_INFO.Version", version, 0x0, 0x20, true, 0x8d55b81b6f980a0d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::heap_memory_limit_data_t), "_RTL_HEAP_MEMORY_LIMIT_INFO.Data", data, 0x40, 0x0, true, 0x39afc086e2258d7d)
#else
#define _m00
#define _m01
#endif