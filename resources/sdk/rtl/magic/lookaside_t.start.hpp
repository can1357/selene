#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_RTL_LOOKASIDE.ListHead", list_head, 0x0, 0x80, true, 0x4a019bc1fde19beb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_LOOKASIDE.Depth", depth, 0x80, 0x10, true, 0x6b53fed243cb0e7a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_LOOKASIDE.MaximumDepth", maximum_depth, 0x90, 0x10, true, 0xabcb51fc722b94d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LOOKASIDE.TotalAllocates", total_allocates, 0xa0, 0x20, true, 0xae121a660d224b23)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LOOKASIDE.AllocateMisses", allocate_misses, 0xc0, 0x20, true, 0xb89057b93efc51fa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LOOKASIDE.TotalFrees", total_frees, 0xe0, 0x20, true, 0xf77596cdea6957fc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LOOKASIDE.FreeMisses", free_misses, 0x100, 0x20, true, 0xdf6544afeb97ddce)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LOOKASIDE.LastTotalAllocates", last_total_allocates, 0x120, 0x20, true, 0xa77d588e6058e497)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LOOKASIDE.LastAllocateMisses", last_allocate_misses, 0x140, 0x20, true, 0x90e3cc96c4319fe5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LOOKASIDE.LastTotalFrees", last_total_frees, 0x160, 0x20, true, 0xf234a397a5347fe6)
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
#endif