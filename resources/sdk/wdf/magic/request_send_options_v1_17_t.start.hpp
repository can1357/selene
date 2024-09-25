#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_17.Size", size, 0x0, 0x0, false, 0xc8992eff4c385c30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_17.Flags", flags, 0x0, 0x0, false, 0x1ae9867acb99a44f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_17.Timeout", timeout, 0x0, 0x0, false, 0xd4d7680abd66d9e8)
#else
#define _m00
#define _m01
#define _m02
#endif