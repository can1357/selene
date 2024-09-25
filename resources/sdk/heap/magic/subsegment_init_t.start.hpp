#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_SUBSEGMENT_INIT.Header", header, 0x0, 0x0, true, 0xdd3ffc3ed17646c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SUBSEGMENT_INIT.HeapHandle", heap_handle, 0x100, 0x40, true, 0x13ed76a96848e779)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SUBSEGMENT_INIT.SubSegment", sub_segment, 0x140, 0x40, true, 0xedb44cc0143d0a8d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUBSEGMENT_INIT.BlockSize", block_size, 0x180, 0x40, true, 0x24d97e59131d4994)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUBSEGMENT_INIT.BlockCount", block_count, 0x1c0, 0x40, true, 0x54c416b1996802ac)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SUBSEGMENT_INIT.AffinityIndex", affinity_index, 0x200, 0x20, true, 0x6bd53aadeabdcf7d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif