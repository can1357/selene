#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.HasNewCorrDesc", has_new_corr_desc, 0x0, 0x1, true, 0xef2e43416f2be0cd, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.ClientCorrCheck", client_corr_check, 0x1, 0x1, true, 0x4fc4e511b3e75ce6, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.ServerCorrCheck", server_corr_check, 0x2, 0x1, true, 0xd74864bd9d14161c, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.HasNotify", has_notify, 0x3, 0x1, true, 0xdd617c3cfc5940f1, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.HasNotify2", has_notify2, 0x4, 0x1, true, 0x38768678d02a38b2, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.HasComplexReturn", has_complex_return, 0x5, 0x1, true, 0x5af67aabbd264f1d, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.HasConformanceRange", has_conformance_range, 0x6, 0x1, true, 0xc4492b5815bc1c48, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS2.HasBigByValueParam", has_big_by_value_param, 0x7, 0x1, true, 0xe8d637e52dc994ca, 1, uint8_t)
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