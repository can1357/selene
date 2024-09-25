#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_HEAP_VS_CONTEXT.Lock", lock, 0x0, 0x40, true, 0xb8230a2805340758)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_HEAP_VS_CONTEXT.FreeChunkTree", free_chunk_tree, 0x80, 0x80, true, 0x9cf1f00c2607367d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_VS_CONTEXT.SubsegmentList", subsegment_list, 0x100, 0x80, true, 0xc1ccf908476cd37e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VS_CONTEXT.TotalCommittedUnits", total_committed_units, 0x180, 0x40, true, 0xfc7ee72a8ee35988)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VS_CONTEXT.FreeCommittedUnits", free_committed_units, 0x1c0, 0x40, true, 0x5383aeb92b4f785e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_VS_CONTEXT.BackendCtx", backend_ctx, 0x400, 0x40, true, 0x5433adb28d62ba31)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::suballocator_callbacks_t), "_HEAP_VS_CONTEXT.Callbacks", callbacks, 0x440, 0x40, true, 0xb068795e844e5137)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtlp::hp_lock_type_t), "_HEAP_VS_CONTEXT.LockType", lock_type, 0x40, 0x20, true, 0xc128a44449db4478)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::vs_delay_free_context_t), "_HEAP_VS_CONTEXT.DelayFreeContext", delay_free_context, 0x200, 0x80, true, 0xe225094b8077df03)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_vs_config_t), "_HEAP_VS_CONTEXT.Config", config, 0x580, 0x20, true, 0x108d2d66eb921a48)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_VS_CONTEXT.Flags", flags, 0x5a0, 0x20, true, 0x329e7b892e3de2bb)
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