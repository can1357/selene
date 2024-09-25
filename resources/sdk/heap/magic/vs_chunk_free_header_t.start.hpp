#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::vs_chunk_header_t), "_HEAP_VS_CHUNK_FREE_HEADER.Header", header, 0x0, 0x80, true, 0xfff52d7d3aac5d18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VS_CHUNK_FREE_HEADER.OverlapsHeader", overlaps_header, 0x0, 0x40, true, 0x2ecc3a3d2d0a78bc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_HEAP_VS_CHUNK_FREE_HEADER.Node", node, 0x40, 0xc0, true, 0x6f652b54c14bab64)
#else
#define _m00
#define _m01
#define _m02
#endif