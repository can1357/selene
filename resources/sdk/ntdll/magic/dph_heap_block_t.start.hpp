#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_BLOCK.pNextAlloc", p_next_alloc, 0x0, 0x40, true, 0xcc5c009e58a2133d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DPH_HEAP_BLOCK.AvailableEntry", available_entry, 0x0, 0x80, true, 0xeb75d91296996824)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_links_t), "_DPH_HEAP_BLOCK.TableLinks", table_links, 0x0, 0x0, true, 0xd0ad73617b762362)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DPH_HEAP_BLOCK.pUserAllocation", p_user_allocation, 0x100, 0x40, true, 0xc0511b0ae50b8218)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DPH_HEAP_BLOCK.pVirtualBlock", p_virtual_block, 0x140, 0x40, true, 0xeb897cf8576ad487)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_BLOCK.nVirtualBlockSize", n_virtual_block_size, 0x180, 0x40, true, 0x49cf188674a3267d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_BLOCK.nVirtualAccessSize", n_virtual_access_size, 0x1c0, 0x40, true, 0xafd75efb385c2341)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_BLOCK.nUserRequestedSize", n_user_requested_size, 0x200, 0x40, true, 0x4b3b5716d0122fda)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_BLOCK.nUserActualSize", n_user_actual_size, 0x240, 0x40, true, 0xa0f7ac2d8feca358)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPH_HEAP_BLOCK.UserValue", user_value, 0x280, 0x40, true, 0x9d12cf9655254e2e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_BLOCK.UserFlags", user_flags, 0x2c0, 0x20, true, 0x50b504ee496e311d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_block_t*), "_DPH_HEAP_BLOCK.StackTrace", stack_trace, 0x300, 0x40, true, 0x34b5333c37f6e5cb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DPH_HEAP_BLOCK.AdjacencyEntry", adjacency_entry, 0x340, 0x80, true, 0x3b91bce7474bde1c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DPH_HEAP_BLOCK.pVirtualRegion", p_virtual_region, 0x3c0, 0x40, true, 0x80605080dd1bd75f)
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
#define _m11
#define _m12
#define _m13
#endif