#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_7.Size", size, 0x0, 0x0, false, 0x55740bc17f0ec828)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_7.Flags", flags, 0x0, 0x0, false, 0x7b301d2341af86c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_7.Timeout", timeout, 0x0, 0x0, false, 0x740fde0e3fdf03e7)
#else
#define _m00
#define _m01
#define _m02
#endif