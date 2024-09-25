#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONF_ARRAY_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x8c3b3b4b7e73ad5c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONF_ARRAY_HEADER_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0xd761c53b7e730a1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_array_flags_t), "_NDR64_CONF_ARRAY_HEADER_FORMAT.Flags", flags, 0x10, 0x8, true, 0x8bbf79b19bb77c1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_CONF_ARRAY_HEADER_FORMAT.ElementSize", element_size, 0x20, 0x20, true, 0xa5e2c9a333bb5aae)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_CONF_ARRAY_HEADER_FORMAT.ConfDescriptor", conf_descriptor, 0x40, 0x40, true, 0xbcb7ec943bd26c0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif