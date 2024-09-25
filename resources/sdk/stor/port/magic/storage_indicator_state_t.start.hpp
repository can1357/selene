#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.Ok", ok, 0x0, 0x1, true, 0x17961f78c5148bd7, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.Locate", locate, 0x1, 0x1, true, 0xf6e16f353a303a6e, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.Fail", fail, 0x2, 0x1, true, 0x27e67358049f25ad, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.Rebuild", rebuild, 0x3, 0x1, true, 0x649e3caca6592797, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.PFA", pfa, 0x4, 0x1, true, 0xb9c2d0acaa36f16a, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.HotSpare", hot_spare, 0x5, 0x1, true, 0xc6d16cd90f5fd01a, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.InACriticalArray", in_a_critical_array, 0x6, 0x1, true, 0x13145601dc1d6530, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.InAFailedArray", in_a_failed_array, 0x7, 0x1, true, 0xbbae47788e4ab99b, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.InvalidDevice", invalid_device, 0x8, 0x1, true, 0xee5736209209a750, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_INDICATOR_STATE.State.Disabled", disabled, 0x9, 0x1, true, 0x704a363a56165c1c, 1, uint32_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_state_t), "_STORAGE_INDICATOR_STATE.State", state, 0x0, 0x20, true, 0xdc99941e55234c31)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_INDICATOR_STATE.AsUlong", as_ulong, 0x0, 0x20, true, 0x736de00a56ba4dc)
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
#endif