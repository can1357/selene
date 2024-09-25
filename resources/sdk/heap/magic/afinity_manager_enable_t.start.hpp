#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_AFINITY_MANAGER_ENABLE.Header", header, 0x0, 0x0, true, 0xeb43c60550e2906d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_AFINITY_MANAGER_ENABLE.HeapHandle", heap_handle, 0x100, 0x40, true, 0x626b0f08f6993f21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_AFINITY_MANAGER_ENABLE.BucketIndex", bucket_index, 0x140, 0x20, true, 0x4464bdf03b7d99f7)
#else
#define _m00
#define _m01
#define _m02
#endif