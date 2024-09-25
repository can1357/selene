#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.CannotBeNull", cannot_be_null, 0x0, 0x1, true, 0x65a714311ee41604, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.Serialize", serialize, 0x1, 0x1, true, 0x2d4f58dcdbb0b226, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.NoSerialize", no_serialize, 0x2, 0x1, true, 0xb167a9d15c4e3e4f, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.Strict", strict, 0x3, 0x1, true, 0x7d3986c202b652ff, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.IsReturn", is_return, 0x4, 0x1, true, 0x586b2d10fcd95540, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.IsOut", is_out, 0x5, 0x1, true, 0xbd4c7548f0edb89b, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.IsIn", is_in, 0x6, 0x1, true, 0x12236f2ae617ea80, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_CONTEXT_HANDLE_FLAGS.IsViaPointer", is_via_pointer, 0x7, 0x1, true, 0x3f494e47c5e9f040, 1, uint8_t)
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