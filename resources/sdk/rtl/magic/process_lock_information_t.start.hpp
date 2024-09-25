#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_PROCESS_LOCK_INFORMATION.Address", address, 0x0, 0x40, true, 0xf29a457400126c2c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_LOCK_INFORMATION.Type", type, 0x40, 0x10, true, 0xc2ca157dae4cd444)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_LOCK_INFORMATION.CreatorBackTraceIndex", creator_back_trace_index, 0x50, 0x10, true, 0xa719bbbc8431da8d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_PROCESS_LOCK_INFORMATION.OwningThread", owning_thread, 0x80, 0x40, true, 0x3ee973d5c4636d18)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_PROCESS_LOCK_INFORMATION.LockCount", lock_count, 0xc0, 0x20, true, 0x4fe147d2a219f5b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_LOCK_INFORMATION.ContentionCount", contention_count, 0xe0, 0x20, true, 0xc013ba1ab08a31d1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_LOCK_INFORMATION.EntryCount", entry_count, 0x100, 0x20, true, 0x192a26357922079b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_PROCESS_LOCK_INFORMATION.RecursionCount", recursion_count, 0x120, 0x20, true, 0x9a35588fad8b067b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_LOCK_INFORMATION.NumberOfWaitingShared", number_of_waiting_shared, 0x140, 0x20, true, 0x434b8c7f62936652)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_LOCK_INFORMATION.NumberOfWaitingExclusive", number_of_waiting_exclusive, 0x160, 0x20, true, 0x6083248601ea20e)
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