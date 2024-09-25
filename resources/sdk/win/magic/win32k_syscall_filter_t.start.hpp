#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32K_SYSCALL_FILTER.FilterState", filter_state, 0x0, 0x20, true, 0x5a7c769a5a656ed9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32K_SYSCALL_FILTER.FilterSet", filter_set, 0x20, 0x20, true, 0xef4b85daed71407b)
#else
#define _m00
#define _m01
#endif