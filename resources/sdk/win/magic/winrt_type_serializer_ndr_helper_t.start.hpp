#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "WinrtTypeSerializerNdrHelper._pTypeFormatString", p_type_format_string, 0x0, 0x40, true, 0x57e176fd2d0f2810)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "WinrtTypeSerializerNdrHelper._formatStringSize", format_string_size, 0x40, 0x10, true, 0x4e4166c0539af28f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "WinrtTypeSerializerNdrHelper._typeOffset", type_offset, 0x50, 0x10, true, 0xc6db6ba6922ce89)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_desc_t), "WinrtTypeSerializerNdrHelper._stubDesc", stub_desc, 0x80, 0xc0, true, 0x243a2e792518c881)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif