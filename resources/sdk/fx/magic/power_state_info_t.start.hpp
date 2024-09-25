#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.Bits.QueueOpen", queue_open, 0x0, 0x1, true, 0xef4297df34603a66, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "FxPowerStateInfo.Bits.KnownDroppedEvents", known_dropped_events, 0x1, 0x1f, true, 0x1d7d0d6e4fdefda0, 31, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bits_t), "FxPowerStateInfo.Bits", bits, 0x0, 0x20, true, 0x4222e0a4cc049203)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerD0Known", power_d0_known, 0x1, 0x1, true, 0xebff36ab38bb7c55, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerDxKnown", power_dx_known, 0x2, 0x1, true, 0xcb8314408ef27ee0, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerWakeArrivalKnown", power_wake_arrival_known, 0x3, 0x1, true, 0x3bf9702f597720fe, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerWakeSucceededKnown", power_wake_succeeded_known, 0x4, 0x1, true, 0xaa633117f3aed23d, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerWakeFailedKnown", power_wake_failed_known, 0x5, 0x1, true, 0xd115674a2191311, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerWakeCanceledKnown", power_wake_canceled_known, 0x6, 0x1, true, 0xb7fd83824634a2c7, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerImplicitD0Known", power_implicit_d0_known, 0x7, 0x1, true, 0x903894de6e9fb7e2, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerImplicitD3Known", power_implicit_d3_known, 0x8, 0x1, true, 0x372eb53269ecdd7d, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerParentToD0Known", power_parent_to_d0_known, 0x9, 0x1, true, 0xf5a55fa4271b5c1e, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerMarkPageableKnown", power_mark_pageable_known, 0xa, 0x1, true, 0xd6afb32918405784, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerMarkNonpageableKnown", power_mark_nonpageable_known, 0xb, 0x1, true, 0x21c2101e9d7e17f3, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerCompleteD0Known", power_complete_d0_known, 0xc, 0x1, true, 0x817f583310358a55, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerStateInfo.BitsByName.PowerCompleteDxKnown", power_complete_dx_known, 0xd, 0x1, true, 0x5680834176b85f92, 1, uint32_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bits_by_name_t), "FxPowerStateInfo.BitsByName", bits_by_name, 0x0, 0x20, true, 0x25b78a17b4aed90e)
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
#endif