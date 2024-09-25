#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_RUNDOWN_RANGE.Address", address, 0x0, 0x40, true, 0x606741fa06f364af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_RUNDOWN_RANGE.Size", size, 0x40, 0x40, true, 0x96ca707f2206a28e)
#else
#define _m00
#define _m01
#endif