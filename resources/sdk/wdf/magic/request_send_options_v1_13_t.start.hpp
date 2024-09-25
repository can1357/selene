#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_13.Size", size, 0x0, 0x0, false, 0xb8561c74a23790bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_13.Flags", flags, 0x0, 0x0, false, 0x3295dde3ef3994d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_13.Timeout", timeout, 0x0, 0x0, false, 0x40312aae5624736f)
#else
#define _m00
#define _m01
#define _m02
#endif