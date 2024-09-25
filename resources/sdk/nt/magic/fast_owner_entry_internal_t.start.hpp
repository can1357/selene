#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FAST_OWNER_ENTRY_INTERNAL.ListEntry", list_entry, 0x0, 0x80, true, 0xd01df4c63ef48245)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FAST_OWNER_ENTRY_INTERNAL.AbLockHandle", ab_lock_handle, 0x80, 0x8, true, 0x967e5e5950c4ab53)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FAST_OWNER_ENTRY_INTERNAL.Disowned", disowned, 0x88, 0x1, true, 0x83427d1e579133a0, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FAST_OWNER_ENTRY_INTERNAL.DynamicallyAllocated", dynamically_allocated, 0x89, 0x1, true, 0x64947c77773d5027, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FAST_OWNER_ENTRY_INTERNAL.CallerExclusive", caller_exclusive, 0x8a, 0x1, true, 0x79b5a4a7d9ef0c54, 1, uint8_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FAST_OWNER_ENTRY_INTERNAL.IsSublistHead", is_sublist_head, 0x90, 0x8, true, 0xb051b4c161984d25)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FAST_OWNER_ENTRY_INTERNAL.IsWaiting", is_waiting, 0x98, 0x8, true, 0xf33741b79e0ba8e6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FAST_OWNER_ENTRY_INTERNAL.LockAddress", lock_address, 0xc0, 0x40, true, 0xf39572eaf53bc969)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FAST_OWNER_ENTRY_INTERNAL.ThreadAddress", thread_address, 0x100, 0x40, true, 0xfe1e4c0d1f7616e1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FAST_OWNER_ENTRY_INTERNAL.SublistHead", sublist_head, 0x140, 0x80, true, 0xdf8e9de965abe712)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FAST_OWNER_ENTRY_INTERNAL.LockListEntry", lock_list_entry, 0x1c0, 0x80, true, 0x274d78c2d6de21f8)
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