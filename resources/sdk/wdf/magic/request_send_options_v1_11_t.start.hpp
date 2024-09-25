#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_11.Size", size, 0x0, 0x0, false, 0x2de4c75a050e8cea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_11.Flags", flags, 0x0, 0x0, false, 0x2cb03301060bd545)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_11.Timeout", timeout, 0x0, 0x0, false, 0x7fbe24221d33a168)
#else
#define _m00
#define _m01
#define _m02
#endif