#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_NV_MEMORY_RANGE.BaseAddress", base_address, 0x0, 0x40, true, 0xa1146cef9b6c21a1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NV_MEMORY_RANGE.Length", length, 0x40, 0x40, true, 0x1b342e68f9e04a49)
#else
#define _m00
#define _m01
#endif