#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::stack_database_lock_t), "_STACK_TRACE_DATABASE.Lock", lock, 0x0, 0x40, true, 0x6ca3ebd6c8657679)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STACK_TRACE_DATABASE.PeakHashCollisionListLength", peak_hash_collision_list_length, 0x380, 0x40, true, 0x35e3d628a5d5674a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STACK_TRACE_DATABASE.LowerMemoryStart", lower_memory_start, 0x3c0, 0x40, true, 0x38a34257d9f7f9d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STACK_TRACE_DATABASE.PreCommitted", pre_committed, 0x400, 0x8, true, 0xef1fad9e152ce280)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STACK_TRACE_DATABASE.DumpInProgress", dump_in_progress, 0x408, 0x8, true, 0xfbb4ae2d6979b097)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STACK_TRACE_DATABASE.CommitBase", commit_base, 0x440, 0x40, true, 0x1346da0307937ec6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STACK_TRACE_DATABASE.CurrentLowerCommitLimit", current_lower_commit_limit, 0x480, 0x40, true, 0x2ec99f5ab4b44d2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STACK_TRACE_DATABASE.CurrentUpperCommitLimit", current_upper_commit_limit, 0x4c0, 0x40, true, 0x36747b7ac2ca4886)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_STACK_TRACE_DATABASE.NextFreeLowerMemory", next_free_lower_memory, 0x500, 0x40, true, 0x18c6d157ecd49a94)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_STACK_TRACE_DATABASE.NextFreeUpperMemory", next_free_upper_memory, 0x540, 0x40, true, 0xe928abca33ca53f7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_TRACE_DATABASE.NumberOfEntriesLookedUp", number_of_entries_looked_up, 0x580, 0x20, true, 0x3b44ae5765d421e6)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_TRACE_DATABASE.NumberOfEntriesAdded", number_of_entries_added, 0x5a0, 0x20, true, 0xc4f2b1cac69d687d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::stack_trace_entry_t**), "_STACK_TRACE_DATABASE.EntryIndexArray", entry_index_array, 0x5c0, 0x40, true, 0xe259f0d05392f9f1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_TRACE_DATABASE.NumberOfEntriesAllocated", number_of_entries_allocated, 0x600, 0x20, true, 0xd3559e1aa735c69)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_TRACE_DATABASE.NumberOfEntriesAvailable", number_of_entries_available, 0x620, 0x20, true, 0x9eec759e65d3e34e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_TRACE_DATABASE.NumberOfAllocationFailures", number_of_allocation_failures, 0x640, 0x20, true, 0xa37236ecfa89b8ed)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::slist_header_t, 32>), "_STACK_TRACE_DATABASE.FreeLists", free_lists, 0x680, 0x0, true, 0xe022d0a29eff54d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_TRACE_DATABASE.NumberOfBuckets", number_of_buckets, 0x1680, 0x20, true, 0x6d463e0c828cd8f9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::std_list_head_t, 1>), "_STACK_TRACE_DATABASE.Buckets", buckets, 0x16c0, 0x80, true, 0x736e2652bece08ec)
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
#define _m16
#define _m17
#define _m18
#endif