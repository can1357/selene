#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.Lock", lock, 0x0, 0x40, true, 0xaa351ffd6c7b2173)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.ThreadId", thread_id, 0x40, 0x20, true, 0x7b1e7029aea51577)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.NewCpuPriorityFloor", new_cpu_priority_floor, 0x60, 0x8, true, 0x4e9d3dc0223f1a4b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.OldCpuPriority", old_cpu_priority, 0x68, 0x8, true, 0x39c8bf3f22146a3)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int3_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.NewIoPriorityFloor", new_io_priority_floor, 0x70, 0x3, true, 0xa163f560cd21d3b1, 3, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int3_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.OldIoPriority", old_io_priority, 0x73, 0x3, true, 0x63d9a5271dfbfd36, 3, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.NewIoQoSPriorityFloor", new_io_qo_s_priority_floor, 0x76, 0x1, true, 0x17773925fef5a73f, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.OldIoQoSPriority", old_io_qo_s_priority, 0x77, 0x1, true, 0x64339fd15c8eb8c, 1, uint8_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.IoPriorities", io_priorities, 0x70, 0x8, true, 0x6a576b2be2082b56)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.ExecutingDpc", executing_dpc, 0x78, 0x1, true, 0xcf6ee09707429d1a, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.WakeupBoost", wakeup_boost, 0x79, 0x1, true, 0x349f7527b0ccf421, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.BoostedOutstandingIrps", boosted_outstanding_irps, 0x7a, 0x2, true, 0x820a263cea7b022d, 2, uint8_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.Flags", flags, 0x78, 0x8, true, 0xcd93c50bd032ad03)
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
#endif