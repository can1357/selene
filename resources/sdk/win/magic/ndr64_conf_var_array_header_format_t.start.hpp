#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONF_VAR_ARRAY_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x3c17d611b3f1096e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONF_VAR_ARRAY_HEADER_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0xbc369d837ec0575b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_array_flags_t), "_NDR64_CONF_VAR_ARRAY_HEADER_FORMAT.Flags", flags, 0x10, 0x8, true, 0x5466297c3cd92be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_CONF_VAR_ARRAY_HEADER_FORMAT.ElementSize", element_size, 0x20, 0x20, true, 0xaa3624e97db8403d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_CONF_VAR_ARRAY_HEADER_FORMAT.ConfDescriptor", conf_descriptor, 0x40, 0x40, true, 0x44e9b9a1eb323b0b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_CONF_VAR_ARRAY_HEADER_FORMAT.VarDescriptor", var_descriptor, 0x80, 0x40, true, 0xcbb0eaabf94931ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif