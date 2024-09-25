#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AVRF_MEMORY_RANGE.BaseAddress", base_address, 0x0, 0x40, true, 0x15d7358095e4db4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AVRF_MEMORY_RANGE.Size", size, 0x40, 0x40, true, 0x9ea4c9b046950594)
#else
#define _m00
#define _m01
#endif