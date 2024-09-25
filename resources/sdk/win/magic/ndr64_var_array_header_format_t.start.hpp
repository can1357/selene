#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_VAR_ARRAY_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xa65f81120eeda885)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_VAR_ARRAY_HEADER_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0x83f38b59cc95b3ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_array_flags_t), "_NDR64_VAR_ARRAY_HEADER_FORMAT.Flags", flags, 0x10, 0x8, true, 0xc44c4478fd1170f1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_VAR_ARRAY_HEADER_FORMAT.TotalSize", total_size, 0x20, 0x20, true, 0x6eda656cb2c0736a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_VAR_ARRAY_HEADER_FORMAT.ElementSize", element_size, 0x40, 0x20, true, 0xfb3d4dd6cbff9344)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_VAR_ARRAY_HEADER_FORMAT.VarDescriptor", var_descriptor, 0x80, 0x40, true, 0xe1e993a3bebe9f56)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif