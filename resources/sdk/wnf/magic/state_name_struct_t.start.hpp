#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WNF_STATE_NAME_STRUCT.Version", version, 0x0, 0x4, true, 0x874ee2b77d7863b4, 4, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WNF_STATE_NAME_STRUCT.NameLifetime", name_lifetime, 0x4, 0x2, true, 0x9cc1092ac078f6f1, 2, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WNF_STATE_NAME_STRUCT.DataScope", data_scope, 0x6, 0x4, true, 0xe18382739b5773be, 4, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WNF_STATE_NAME_STRUCT.PermanentData", permanent_data, 0xa, 0x1, true, 0xa2efcbd48598ba59, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint53_t), "_WNF_STATE_NAME_STRUCT.Sequence", sequence, 0xb, 0x35, true, 0xd190b59d7f39dd6a, 53, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif