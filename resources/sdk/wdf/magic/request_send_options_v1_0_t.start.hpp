#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_0.Size", size, 0x0, 0x0, false, 0x38a06801ee3ab124)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_0.Flags", flags, 0x0, 0x0, false, 0x3f3429c3de72beea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_0.Timeout", timeout, 0x0, 0x0, false, 0xeac5703e796cdad3)
#else
#define _m00
#define _m01
#define _m02
#endif