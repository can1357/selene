#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_15.Size", size, 0x0, 0x0, false, 0x73de1ca829071d0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_15.Flags", flags, 0x0, 0x0, false, 0x2567973b8443f872)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_15.Timeout", timeout, 0x0, 0x0, false, 0x6666a5804ea71ef9)
#else
#define _m00
#define _m01
#define _m02
#endif