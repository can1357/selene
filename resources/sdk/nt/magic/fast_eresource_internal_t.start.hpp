#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FAST_ERESOURCE_INTERNAL.SystemResourcesList", system_resources_list, 0x0, 0x80, true, 0xa5d0f9fb583d90a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FAST_ERESOURCE_INTERNAL.ReservedPointer", reserved_pointer, 0x80, 0x40, true, 0x85d8fcf446b1c8c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_FAST_ERESOURCE_INTERNAL.ActiveCount", active_count, 0xc0, 0x10, true, 0x6233d5395b9ccee2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FAST_ERESOURCE_INTERNAL.Flag", flag, 0xd0, 0x10, true, 0x9e2edb89fc6a3d4a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kwait_chain_t), "_FAST_ERESOURCE_INTERNAL.SharedWaiters", shared_waiters, 0x100, 0x40, true, 0xc039d054b5a10efc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kwait_chain_t), "_FAST_ERESOURCE_INTERNAL.ExclusiveWaiters", exclusive_waiters, 0x140, 0x40, true, 0xed74d087018b7b92)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FAST_ERESOURCE_INTERNAL.OwnerEntryListHead", owner_entry_list_head, 0x180, 0x80, true, 0xc5ca3248f3b68de3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAST_ERESOURCE_INTERNAL.ActiveEntries", active_entries, 0x200, 0x20, true, 0xa9d777f190cd7b8f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAST_ERESOURCE_INTERNAL.ContentionCount", contention_count, 0x220, 0x20, true, 0x1401471ca8787404)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAST_ERESOURCE_INTERNAL.NumberOfSharedWaiters", number_of_shared_waiters, 0x240, 0x20, true, 0x4e3ea8db998bd4bd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAST_ERESOURCE_INTERNAL.NumberOfExclusiveWaiters", number_of_exclusive_waiters, 0x260, 0x20, true, 0x3145f8b9dccac84a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FAST_ERESOURCE_INTERNAL.ReservedWin64OnlyPointer", reserved_win64_only_pointer, 0x280, 0x40, true, 0x590d14052862a536)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FAST_ERESOURCE_INTERNAL.Address", address, 0x2c0, 0x40, true, 0x76403533d73b7102)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FAST_ERESOURCE_INTERNAL.CreatorBackTraceIndex", creator_back_trace_index, 0x2c0, 0x40, true, 0xb12fb70416583cce)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FAST_ERESOURCE_INTERNAL.SpinLock", spin_lock, 0x300, 0x40, true, 0xc8baeb21f7755c26)
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
#endif