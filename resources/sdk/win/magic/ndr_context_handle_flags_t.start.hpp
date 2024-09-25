#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.CannotBeNull", cannot_be_null, 0x0, 0x1, true, 0x1ccdd7b428506a35, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.Serialize", serialize, 0x1, 0x1, true, 0xdea6f7673e2b9639, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.NoSerialize", no_serialize, 0x2, 0x1, true, 0x8bc78cd9eebb4af2, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.IsStrict", is_strict, 0x3, 0x1, true, 0x9de341342cbe5631, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.IsReturn", is_return, 0x4, 0x1, true, 0xf73b391e8c3d3ef4, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.IsOut", is_out, 0x5, 0x1, true, 0xefb7112bf4aa6200, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.IsIn", is_in, 0x6, 0x1, true, 0x2a74b33dd157e002, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR_CONTEXT_HANDLE_FLAGS.IsViaPtr", is_via_ptr, 0x7, 0x1, true, 0xcdb64831adb33a14, 1, uint8_t)
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