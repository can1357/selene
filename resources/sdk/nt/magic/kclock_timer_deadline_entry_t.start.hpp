#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_TIMER_DEADLINE_ENTRY.DueTime", due_time, 0x0, 0x0, false, 0x6a64651e390708b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCLOCK_TIMER_DEADLINE_ENTRY.TolerableDelay", tolerable_delay, 0x0, 0x0, false, 0x7dc73e9f3089e883)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KCLOCK_TIMER_DEADLINE_ENTRY.TypeFlags", type_flags, 0x0, 0x0, false, 0xb49a556208fe81fd)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KCLOCK_TIMER_DEADLINE_ENTRY.Valid", valid, 0x0, 0x0, false, 0x9f05cb23cd800376, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KCLOCK_TIMER_DEADLINE_ENTRY.NoWake", no_wake, 0x0, 0x0, false, 0x245b78a868e6dea6, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif