#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_COMBINE_INFORMATION.Handle", handle, 0x0, 0x40, true, 0x3365330550f2fbeb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_COMBINE_INFORMATION.PagesCombined", pages_combined, 0x40, 0x40, true, 0x14cf30877169a079)
#else
#define _m00
#define _m01
#endif