#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BOGUS_ARRAY_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xb4db573704467c0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BOGUS_ARRAY_HEADER_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0x3c394259848fff6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_array_flags_t), "_NDR64_BOGUS_ARRAY_HEADER_FORMAT.Flags", flags, 0x10, 0x8, true, 0xb5bb16d238a3bf2d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BOGUS_ARRAY_HEADER_FORMAT.NumberDims", number_dims, 0x18, 0x8, true, 0xed201f22f2bc355c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_BOGUS_ARRAY_HEADER_FORMAT.NumberElements", number_elements, 0x20, 0x20, true, 0xca8bf04673664225)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_BOGUS_ARRAY_HEADER_FORMAT.Element", element, 0x40, 0x40, true, 0x36e8143bd57d996)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif