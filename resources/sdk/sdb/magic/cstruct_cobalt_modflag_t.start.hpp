#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SDB_CSTRUCT_COBALT_MODFLAG.BarriersOverride", barriers_override, 0x0, 0x40, true, 0x2c00ede1ea61b7ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SDB_CSTRUCT_COBALT_MODFLAG.InternalSelfMod", internal_self_mod, 0x40, 0x20, true, 0xb8016427caaee06d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SDB_CSTRUCT_COBALT_MODFLAG.PreciseExceptions", precise_exceptions, 0x60, 0x20, true, 0x1334f47ad74756f8)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Barriers", barriers, 0x98, 0x4, true, 0xe93e0994770b3b27, 4, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.JitCache", jit_cache, 0xa2, 0x1, true, 0x384673dd6af8c42d, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.AlwaysLock", always_lock, 0xa3, 0x1, true, 0xa49ba9c80a17c036, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.MergePushImmedPop", merge_push_immed_pop, 0xa4, 0x1, true, 0xe3a081dfb15ee623, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.StrongFloat", strong_float, 0xa5, 0x1, true, 0x8056fd718fa7d266, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.CHPE", chpe, 0xa6, 0x1, true, 0xcae3e2162ee9157d, 1, uint8_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.Group1AsUINT64", group1_as_uint64, 0x0, 0x40, true, 0x1dc827abd4754a4e)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.BarriersOverride", barriers_override, 0x0, 0x1, true, 0xe79631f21d41512d, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.InternalSelfMod", internal_self_mod, 0x1, 0x1, true, 0x331f24b441dd6d79, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.PreciseExceptions", precise_exceptions, 0x2, 0x1, true, 0xd53969522458a1fd, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.Barriers", barriers, 0x5, 0x1, true, 0xace419ea91f8c679, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.JitCache", jit_cache, 0x8, 0x1, true, 0x342165fd3fba0b61, 1, uint8_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.AlwaysLock", always_lock, 0x9, 0x1, true, 0x8b97960b0881346c, 1, uint8_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.MergePushImmedPop", merge_push_immed_pop, 0xa, 0x1, true, 0xe0e6f70c4fa55373, 1, uint8_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.StrongFloat", strong_float, 0xb, 0x1, true, 0x409d88a771679419, 1, uint8_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.CHPE", chpe, 0xc, 0x1, true, 0x58909691c452a4df, 1, uint8_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.VolatileMetadata", volatile_metadata, 0x0, 0x0, false, 0x25ce4983be1612c8, 1, uint8_t)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_specified_t), "_SDB_CSTRUCT_COBALT_MODFLAG.Specified", specified, 0xc0, 0x40, true, 0x3a4cbec8f31c24e1)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_MODFLAG.VolatileMetadata", volatile_metadata, 0x0, 0x0, false, 0x22cbafabad2636c6, 1, uint8_t)
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
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif