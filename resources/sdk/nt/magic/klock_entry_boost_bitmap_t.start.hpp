#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_KLOCK_ENTRY_BOOST_BITMAP.AllFields", all_fields, 0x0, 0x20, true, 0x45d67e90849f5086, 0, uint32_t,uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY_BOOST_BITMAP.AllBoosts", all_boosts, 0x0, 0x11, true, 0x6d15e1ba7e3a65da, 0, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_KLOCK_ENTRY_BOOST_BITMAP.CpuBoostsBitmap", cpu_boosts_bitmap, 0x0, 0xf, true, 0xc7bfd451a26bf689, 0, uint16_t,uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY_BOOST_BITMAP.IoBoost", io_boost, 0xf, 0x1, true, 0xd977a3000a8a7eb2, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY_BOOST_BITMAP.IoQoSBoost", io_qo_s_boost, 0x10, 0x1, true, 0x76a2bd1224c2304e, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY_BOOST_BITMAP.IoNormalPriorityWaiterCount", io_normal_priority_waiter_count, 0x11, 0x8, true, 0x6bfc6bd6059900d3, 8, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_KLOCK_ENTRY_BOOST_BITMAP.IoQoSWaiterCount", io_qo_s_waiter_count, 0x19, 0x7, true, 0xfb08b593c09c6619, 7, uint16_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY_BOOST_BITMAP.WaiterCounts", waiter_counts, 0x0, 0x0, false, 0x1aec34adc8952eb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif