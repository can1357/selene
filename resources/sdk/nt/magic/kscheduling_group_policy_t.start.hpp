#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULING_GROUP_POLICY.Value", value, 0x0, 0x20, true, 0x20204d5e7a6ce398)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSCHEDULING_GROUP_POLICY.Weight", weight, 0x0, 0x10, true, 0xd6d666b3ec7ce8be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSCHEDULING_GROUP_POLICY.MinRate", min_rate, 0x0, 0x10, true, 0xddea9fed5cf3b3d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSCHEDULING_GROUP_POLICY.MaxRate", max_rate, 0x10, 0x10, true, 0xc7d7637aa407e821)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULING_GROUP_POLICY.AllFlags", all_flags, 0x20, 0x20, true, 0xfffc1bd45c76051a)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCHEDULING_GROUP_POLICY.Type", type, 0x20, 0x1, true, 0x2d2d6e54c3bc4889, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCHEDULING_GROUP_POLICY.Disabled", disabled, 0x21, 0x1, true, 0x7d01a9fd3f3d4fcf, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCHEDULING_GROUP_POLICY.RankBias", rank_bias, 0x22, 0x1, true, 0x28f0d92f6f6b8565, 1, uint32_t)
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