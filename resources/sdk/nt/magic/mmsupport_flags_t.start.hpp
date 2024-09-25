#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMSUPPORT_FLAGS.WorkingSetType", working_set_type, 0x0, 0x3, true, 0x1822a0011006888a, 3, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.MaximumWorkingSetHard", maximum_working_set_hard, 0x6, 0x1, true, 0xd1808a76bce221f3, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.MinimumWorkingSetHard", minimum_working_set_hard, 0x7, 0x1, true, 0xedaf4b726c4c5cb5, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.SessionMaster", session_master, 0x8, 0x1, true, 0xef4338c36e0e1fac, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMSUPPORT_FLAGS.TrimmerState", trimmer_state, 0x9, 0x2, true, 0x9de13e0fa94ac4cc, 2, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMSUPPORT_FLAGS.PageStealers", page_stealers, 0xc, 0x4, true, 0x84b4450c90744e68, 4, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMSUPPORT_FLAGS.u1", u1, 0x0, 0x10, true, 0x88d89258ec0896da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMSUPPORT_FLAGS.MemoryPriority", memory_priority, 0x10, 0x8, true, 0x514bb72628c10352)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.WsleDeleted", wsle_deleted, 0x18, 0x1, true, 0xf12ed61c2d7026a7, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.SvmEnabled", svm_enabled, 0x19, 0x1, true, 0x7b22bb2629d6a8a2, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.ForceAge", force_age, 0x1a, 0x1, true, 0xf505dffe18fecc04, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.NewMaximum", new_maximum, 0x1c, 0x1, true, 0x2315f8d0a7734cb8, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMSUPPORT_FLAGS.CommitReleaseState", commit_release_state, 0x1d, 0x2, true, 0xa0f3d2c7518e7cc, 2, uint8_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMSUPPORT_FLAGS.u2", u2, 0x18, 0x8, true, 0x1a407f3e5a740c0b)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.ForceTrim", force_trim, 0x1b, 0x1, true, 0x3d0b38201f2d4a9a, 1, uint8_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.VmExiting", vm_exiting, 0x0, 0x0, false, 0xe9b6f80d6fcbe12b, 1, uint8_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSUPPORT_FLAGS.ExpansionFailed", expansion_failed, 0x0, 0x0, false, 0x7e0ecc797b8a7baa, 1, uint8_t)
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