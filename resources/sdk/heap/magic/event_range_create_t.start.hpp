#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EVENT_RANGE_CREATE.HeapHandle", heap_handle, 0x0, 0x40, true, 0x9fa9d63bb5bcec99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_EVENT_RANGE_CREATE.FirstRangeSize", first_range_size, 0x40, 0x40, true, 0x84dd9dd4157928d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_EVENT_RANGE_CREATE.Flags", flags, 0x80, 0x20, true, 0x38b4310c336c0c65)
#else
#define _m00
#define _m01
#define _m02
#endif