#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_HEAP_VAMGR_RANGE.RbNode", rb_node, 0x0, 0xc0, true, 0x9c52f2ac1fcab5bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_HEAP_VAMGR_RANGE.Next", next, 0x0, 0x40, true, 0xc064c1d923dde11d)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VAMGR_RANGE.Allocated", allocated, 0x0, 0x1, true, 0x14c66031b4bf842d, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VAMGR_RANGE.Internal", internal, 0x1, 0x1, true, 0x5c2cb5fe028f4afd, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VAMGR_RANGE.Standalone", standalone, 0x2, 0x1, true, 0x5fba25340fa49c0d, 1, uint8_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_VAMGR_RANGE.AllocatorIndex", allocator_index, 0x8, 0x8, true, 0xf40437d9b4f3dc78)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_HEAP_VAMGR_RANGE.OwnerCtx", owner_ctx, 0x40, 0x80, true, 0xcec3ec319eab5eaf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VAMGR_RANGE.SizeInChunks", size_in_chunks, 0xc0, 0x40, true, 0xf248bce0d27a825d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_VAMGR_RANGE.ChunkCount", chunk_count, 0xc0, 0x10, true, 0x6509c8b109cf752)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_VAMGR_RANGE.PrevChunkCount", prev_chunk_count, 0xd0, 0x10, true, 0x482bdf199b87e722)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VAMGR_RANGE.Signature", signature, 0xc0, 0x40, true, 0x546e2653030b26a0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif