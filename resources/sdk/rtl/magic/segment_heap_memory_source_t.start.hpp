#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SEGMENT_HEAP_MEMORY_SOURCE.Flags", flags, 0x0, 0x20, true, 0x844dc8aba081ac8e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SEGMENT_HEAP_MEMORY_SOURCE.MemoryTypeMask", memory_type_mask, 0x20, 0x20, true, 0x56bc4317890d9adb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SEGMENT_HEAP_MEMORY_SOURCE.NumaNode", numa_node, 0x40, 0x20, true, 0xb372ee52525108ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_SEGMENT_HEAP_MEMORY_SOURCE.PartitionHandle", partition_handle, 0x80, 0x40, true, 0xd9fe03a4811158cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif