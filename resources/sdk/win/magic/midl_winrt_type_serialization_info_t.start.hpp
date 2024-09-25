#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_WINRT_TYPE_SERIALIZATION_INFO.Version", version, 0x0, 0x20, true, 0x8e93f3069b4dad0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_MIDL_WINRT_TYPE_SERIALIZATION_INFO.TypeFormatString", type_format_string, 0x40, 0x40, true, 0x5bc73425d86ab659)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIDL_WINRT_TYPE_SERIALIZATION_INFO.FormatStringSize", format_string_size, 0x80, 0x10, true, 0xb08d82f59a07df02)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIDL_WINRT_TYPE_SERIALIZATION_INFO.TypeOffset", type_offset, 0x90, 0x10, true, 0x37a373be383a1104)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::midl_stub_desc_t*), "_MIDL_WINRT_TYPE_SERIALIZATION_INFO.StubDesc", stub_desc, 0xc0, 0x40, true, 0x3684d7382a21ff8b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif