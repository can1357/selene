#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ERESOURCE.SystemResourcesList", system_resources_list, 0x0, 0x80, true, 0xa796d583d8c4a63c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::owner_entry_t*), "_ERESOURCE.OwnerTable", owner_table, 0x80, 0x40, true, 0x38308fcb79a56b95)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_ERESOURCE.ActiveCount", active_count, 0xc0, 0x10, true, 0x43ca54c2a7cc3c57)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ERESOURCE.Flag", flag, 0xd0, 0x10, true, 0xf150e1430e632afe)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ERESOURCE.ReservedLowFlags", reserved_low_flags, 0xd0, 0x8, true, 0xf5ce3c4c74150c5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ERESOURCE.WaiterPriority", waiter_priority, 0xd8, 0x8, true, 0xc0657ede9e8dc0a2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::kwait_chain_t>), "_ERESOURCE.SharedWaiters", shared_waiters, 0x100, 0x40, true, 0xa3263412c56b1e59)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::kevent_t*>), "_ERESOURCE.ExclusiveWaiters", exclusive_waiters, 0x140, 0x40, true, 0xa8f385bfb552ad89)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::owner_entry_t), "_ERESOURCE.OwnerEntry", owner_entry, 0x180, 0x80, true, 0x6db5338fb55511b7)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ERESOURCE.ActiveEntries", active_entries, 0x200, 0x20, true, 0x1aae6ad442e9343d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ERESOURCE.ContentionCount", contention_count, 0x220, 0x20, true, 0xeab215bed487634f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ERESOURCE.NumberOfSharedWaiters", number_of_shared_waiters, 0x240, 0x20, true, 0x815aa7b2dc0128b5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ERESOURCE.NumberOfExclusiveWaiters", number_of_exclusive_waiters, 0x260, 0x20, true, 0x56bc97aa83b082c1)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ERESOURCE.Address", address, 0x2c0, 0x40, true, 0xf0ea0e9a113e090)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ERESOURCE.CreatorBackTraceIndex", creator_back_trace_index, 0x2c0, 0x40, true, 0x5dd9df7a1e477dcc)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ERESOURCE.SpinLock", spin_lock, 0x300, 0x40, true, 0x4e0e056c7258fab7)
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