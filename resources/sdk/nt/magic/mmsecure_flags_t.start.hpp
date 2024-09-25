#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.ReadOnly", read_only, 0x0, 0x1, true, 0xa604f3da0eaade79, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.ReadWrite", read_write, 0x1, 0x1, true, 0x928d45930f38fb5, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.SecNoChange", sec_no_change, 0x2, 0x1, true, 0x3f268d7e7526649d, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.NoDelete", no_delete, 0x3, 0x1, true, 0xe8d53f4ca6fc4cec, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.RequiresPteReversal", requires_pte_reversal, 0x4, 0x1, true, 0xe3c08be89516963a, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.ExclusiveSecure", exclusive_secure, 0x5, 0x1, true, 0x55720d438defb4c7, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.UserModeOnly", user_mode_only, 0x6, 0x1, true, 0x3143da5e301e89a1, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.NoInherit", no_inherit, 0x7, 0x1, true, 0xf6ccb8f1897b701e, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECURE_FLAGS.CheckVad", check_vad, 0x8, 0x1, true, 0xbd4e64534275b154, 1, uint32_t)
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
#endif