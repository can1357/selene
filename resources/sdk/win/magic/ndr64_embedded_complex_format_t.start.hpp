#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EMBEDDED_COMPLEX_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x83eee6dd8cdedae4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EMBEDDED_COMPLEX_FORMAT.Reserve1", reserve1, 0x8, 0x8, true, 0xae3fa2b048440021)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_EMBEDDED_COMPLEX_FORMAT.Reserve2", reserve2, 0x10, 0x10, true, 0xe44e9936dd56f435)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_EMBEDDED_COMPLEX_FORMAT.Type", type, 0x40, 0x40, true, 0xb27b6d3e5244a567)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif