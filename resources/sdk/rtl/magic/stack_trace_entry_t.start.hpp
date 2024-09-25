#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::std_list_entry_t), "_RTL_STACK_TRACE_ENTRY.HashChain", hash_chain, 0x0, 0x40, true, 0xcca0addd2593e87d)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_RTL_STACK_TRACE_ENTRY.TraceCount", trace_count, 0x40, 0xb, true, 0xf05b2b8d12c70fc3, 11, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_RTL_STACK_TRACE_ENTRY.BlockDepth", block_depth, 0x4b, 0x5, true, 0xe3c56b8b14fb0e85, 5, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_STACK_TRACE_ENTRY.IndexHigh", index_high, 0x50, 0x10, true, 0x58affcc10ed89e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_STACK_TRACE_ENTRY.Index", index, 0x60, 0x10, true, 0xd5cabac9688fd805)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_STACK_TRACE_ENTRY.Depth", depth, 0x70, 0x10, true, 0x8348d137951be6f4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 32>), "_RTL_STACK_TRACE_ENTRY.BackTrace", back_trace, 0x80, 0x0, true, 0x9e1ca9babebf2fdf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_RTL_STACK_TRACE_ENTRY.FreeChain", free_chain, 0x80, 0x80, true, 0x13e0a9bc9f7c5b45)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif