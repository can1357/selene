#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_TAG_INFO.NumberOfAllocations", number_of_allocations, 0x0, 0x20, true, 0x3b0eb2117c8df156)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_TAG_INFO.NumberOfFrees", number_of_frees, 0x20, 0x20, true, 0x422fe47fe63638d4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_TAG_INFO.BytesAllocated", bytes_allocated, 0x40, 0x40, true, 0xf285f9d21f3190bf)
#else
#define _m00
#define _m01
#define _m02
#endif