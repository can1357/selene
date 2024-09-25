#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FX_SPIN_LOCK_HISTORY_ENTRY.CallersAddress", callers_address, 0x0, 0x40, true, 0xd433939c4c6ba4db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FX_SPIN_LOCK_HISTORY_ENTRY.AcquiredAtTime", acquired_at_time, 0x40, 0x40, true, 0x57d3b4c3c32cf659)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FX_SPIN_LOCK_HISTORY_ENTRY.LockedDuraction", locked_duraction, 0x80, 0x40, true, 0x9ebf42b136fffdad)
#else
#define _m00
#define _m01
#define _m02
#endif