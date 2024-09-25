#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY_LOCK_STATE.CrossThreadReleasable", cross_thread_releasable, 0x0, 0x1, true, 0x1b2bd1ae6f0d3bdb, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY_LOCK_STATE.Busy", busy, 0x1, 0x1, true, 0xd51d91c1fd729b6, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY_LOCK_STATE.InTree", in_tree, 0x3f, 0x1, true, 0x568cc83ba74bc193, 1, uint64_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KLOCK_ENTRY_LOCK_STATE.LockState", lock_state, 0x0, 0x40, true, 0xf94e623a3eb535ef)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KLOCK_ENTRY_LOCK_STATE.SessionState", session_state, 0x40, 0x40, true, 0xe1c0449cef56660)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY_LOCK_STATE.SessionId", session_id, 0x40, 0x20, true, 0x4a911f4e00c8c288)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY_LOCK_STATE.SessionPad", session_pad, 0x60, 0x20, true, 0x83d916de2b04a2ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif