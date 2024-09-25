#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.MustSize", must_size, 0x0, 0x1, true, 0x47ef1a8ed52ed913, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.MustFree", must_free, 0x1, 0x1, true, 0x585eb8e327c5607e, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsPipe", is_pipe, 0x2, 0x1, true, 0x113e6592b307a4db, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsIn", is_in, 0x3, 0x1, true, 0x7dd070675c26fbab, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsOut", is_out, 0x4, 0x1, true, 0x8c1f3e7b28f020e7, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsReturn", is_return, 0x5, 0x1, true, 0x750afc0a5badcca4, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsBasetype", is_basetype, 0x6, 0x1, true, 0x622993e6a2aac67b, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsByValue", is_by_value, 0x7, 0x1, true, 0x4171ac17e3e246d8, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsSimpleRef", is_simple_ref, 0x8, 0x1, true, 0x3e731a5737459b7a, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsDontCallFreeInst", is_dont_call_free_inst, 0x9, 0x1, true, 0x8c26d309a0879052, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.SaveForAsyncFinish", save_for_async_finish, 0xa, 0x1, true, 0x4dd7b37d08b70007, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsPartialIgnore", is_partial_ignore, 0xb, 0x1, true, 0xdc2c9ba49dcdfafd, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PARAM_ATTRIBUTES.IsForceAllocate", is_force_allocate, 0xc, 0x1, true, 0x3c1d8edb46b3a2fd, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "PARAM_ATTRIBUTES.ServerAllocSize", server_alloc_size, 0xd, 0x3, true, 0x1dcc63cb84579267, 3, uint16_t)
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