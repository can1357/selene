#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.MustSize", must_size, 0x0, 0x1, true, 0x40fed05a3623cee2, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.MustFree", must_free, 0x1, 0x1, true, 0x9856aaa32a714b30, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsPipe", is_pipe, 0x2, 0x1, true, 0xa56f1520efb4e308, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsIn", is_in, 0x3, 0x1, true, 0x89b5978f76069ca3, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsOut", is_out, 0x4, 0x1, true, 0xe4d88258589db49c, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsReturn", is_return, 0x5, 0x1, true, 0xd3ea2088ea43fbbd, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsBasetype", is_basetype, 0x6, 0x1, true, 0x8d8bbad2f05d9ee, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsByValue", is_by_value, 0x7, 0x1, true, 0x2ccbd0f23b99b3c4, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsSimpleRef", is_simple_ref, 0x8, 0x1, true, 0xc92a5ce152824019, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsDontCallFreeInst", is_dont_call_free_inst, 0x9, 0x1, true, 0x9b85cc4c94a45d4d, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.SaveForAsyncFinish", save_for_async_finish, 0xa, 0x1, true, 0x321ac7f5935c3286, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsPartialIgnore", is_partial_ignore, 0xb, 0x1, true, 0x58fd719fc3a678db, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.IsForceAllocate", is_force_allocate, 0xc, 0x1, true, 0xffc250ab1673b52a, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_PARAM_FLAGS.UseCache", use_cache, 0xf, 0x1, true, 0xbed3699c36d28f5f, 1, uint16_t)
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
#endif