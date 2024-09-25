#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_9.Size", size, 0x0, 0x0, false, 0x4df62ee142f93f93)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS_V1_9.Flags", flags, 0x0, 0x0, false, 0xa1c3d24e3e40744e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS_V1_9.Timeout", timeout, 0x0, 0x0, false, 0x9f8bf8dd6a026764)
#else
#define _m00
#define _m01
#define _m02
#endif