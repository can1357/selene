#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.DeleteInProgress", delete_in_progress, 0x2, 0x1, true, 0x3241f4f77dbec4d, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.NoChange", no_change, 0x3, 0x1, true, 0x28acdb01fc59acd3, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMVAD_FLAGS.VadType", vad_type, 0x4, 0x3, true, 0x9d068ec2d7a9078, 3, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMVAD_FLAGS.Protection", protection, 0x7, 0x5, true, 0xad414d64c2a83e4e, 5, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_MMVAD_FLAGS.PreferredNode", preferred_node, 0xc, 0x6, true, 0xacf1b6369c016a56, 0, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.PrivateMemory", private_memory, 0x14, 0x1, true, 0x60a4be2ed8f5b0b1, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.Lock", lock, 0x0, 0x1, true, 0x7c179bd25c7d855d, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.LockContended", lock_contended, 0x1, 0x1, true, 0xe63a0423af9c9259, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMVAD_FLAGS.PageSize", page_size, 0x12, 0x2, true, 0xbcb1fd433254ccb4, 2, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.PrivateFixup", private_fixup, 0x0, 0x0, false, 0xef7f3a4e58c31752, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.ManySubsections", many_subsections, 0x0, 0x0, false, 0xe069b4cbe9d50107, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.Enclave", enclave, 0x0, 0x0, false, 0x57ae408c4eeabd9e, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS.PageSize64K", page_size64k, 0x0, 0x0, false, 0x5981c7aff5d080a2, 1, uint32_t)
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