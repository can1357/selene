#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_string_header_format_t), "_NDR64_RANGED_STRING_FORMAT.Header", header, 0x0, 0x20, true, 0x9aab7131c3312b69)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDR64_RANGED_STRING_FORMAT.Min", min, 0x40, 0x40, true, 0x8278d88e16ce287)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDR64_RANGED_STRING_FORMAT.Max", max, 0x80, 0x40, true, 0x81a73065171e08be)
#else
#define _m00
#define _m01
#define _m02
#endif