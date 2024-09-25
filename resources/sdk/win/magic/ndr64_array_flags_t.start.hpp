#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_ARRAY_FLAGS.HasPointerInfo", has_pointer_info, 0x0, 0x1, true, 0xfc2f67a8ce5b761a, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_ARRAY_FLAGS.HasElementInfo", has_element_info, 0x1, 0x1, true, 0x1c8a1ae02a7d12d5, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_ARRAY_FLAGS.IsMultiDimensional", is_multi_dimensional, 0x2, 0x1, true, 0x817f148f3c9f048, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_ARRAY_FLAGS.IsArrayofStrings", is_arrayof_strings, 0x3, 0x1, true, 0x7796ddd08d7f5e38, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif