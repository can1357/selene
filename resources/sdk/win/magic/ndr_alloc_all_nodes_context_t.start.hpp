#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "NDR_ALLOC_ALL_NODES_CONTEXT.AllocAllNodesMemory", alloc_all_nodes_memory, 0x0, 0x40, true, 0x4e39f9280899b668)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "NDR_ALLOC_ALL_NODES_CONTEXT.AllocAllNodesMemoryBegin", alloc_all_nodes_memory_begin, 0x40, 0x40, true, 0xa3ca715b6a762720)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "NDR_ALLOC_ALL_NODES_CONTEXT.AllocAllNodesMemoryEnd", alloc_all_nodes_memory_end, 0x80, 0x40, true, 0xadeb041369a2b7b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_ALLOC_ALL_NODES_CONTEXT.IsByteCount", is_byte_count, 0xc0, 0x20, true, 0xf60a6989f0293e6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif