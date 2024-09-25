#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_5.Size", size, 0x0, 0x0, false, 0xa45c6e3ad242e871)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_5.Flags", flags, 0x0, 0x0, false, 0x8d2d455c1616008d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_5.Timeout", timeout, 0x0, 0x0, false, 0x77499abb9c91a316)
#else
#define _m00
#define _m01
#define _m02
#endif