#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_STACK_TRACE_BLOCK.RelatedTimestamp", related_timestamp, 0x0, 0x40, true, 0x48b461b162e68a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_ETW_STACK_TRACE_BLOCK.Thread", thread, 0x40, 0x40, true, 0xa0b051c125d6f61a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_ETW_STACK_TRACE_BLOCK.StackWalkDpc", stack_walk_dpc, 0x80, 0x0, true, 0xbe45f7196784f2b5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_STACK_TRACE_BLOCK.Flags", flags, 0x360, 0x20, true, 0x86c7d6851177e509)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_STACK_TRACE_BLOCK.ApcCount", apc_count, 0x380, 0x20, true, 0x7a5e4296ebaac582)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_ETW_STACK_TRACE_BLOCK.ApcListHead", apc_list_head, 0x280, 0x80, true, 0xc3db0c1b90cbfd98)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::apc_entry_t*), "_ETW_STACK_TRACE_BLOCK.ApcEntry", apc_entry, 0x300, 0x40, true, 0x1d9f17719405dfd2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_STACK_TRACE_BLOCK.ApcEntryCount", apc_entry_count, 0x340, 0x20, true, 0xbd0c618337e3bdfc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_STACK_TRACE_BLOCK.MaxApcCount", max_apc_count, 0x3a0, 0x20, true, 0x5c5a16b3da9e3739)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_STACK_TRACE_BLOCK.ApcSpinLock", apc_spin_lock, 0x0, 0x0, false, 0x7165f9db2215d701)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_ETW_STACK_TRACE_BLOCK.ApcFreeListHead", apc_free_list_head, 0x0, 0x0, false, 0xe85da1bd91e659a1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_ETW_STACK_TRACE_BLOCK.ApcGlobalListHead", apc_global_list_head, 0x0, 0x0, false, 0xea50aa2edb8f5788)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_STACK_TRACE_BLOCK.MinimumApcCount", minimum_apc_count, 0x0, 0x0, false, 0xc02b691ecb883e48)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_STACK_TRACE_BLOCK.MaximumApcCount", maximum_apc_count, 0x0, 0x0, false, 0x587e13edac52aa2a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_STACK_TRACE_BLOCK.OutstandingApcCount", outstanding_apc_count, 0x0, 0x0, false, 0x72d494d82386e0bd)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_STACK_TRACE_BLOCK.MaxOutstandingApcCount", max_outstanding_apc_count, 0x0, 0x0, false, 0xeb99c13eab20bb9a)
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
#define _m14
#define _m15
#endif