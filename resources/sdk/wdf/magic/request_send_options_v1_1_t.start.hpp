#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_1.Size", size, 0x0, 0x0, false, 0xea7131953cddb455)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_1.Flags", flags, 0x0, 0x0, false, 0x690ab1e49557ad05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_1.Timeout", timeout, 0x0, 0x0, false, 0x194bf3bf2db9129c)
#else
#define _m00
#define _m01
#define _m02
#endif