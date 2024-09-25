#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS.Size", size, 0x0, 0x20, true, 0x4ded7d874f5b8c69)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_SEND_OPTIONS.Flags", flags, 0x20, 0x20, true, 0x6e40f26226e2a53a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_REQUEST_SEND_OPTIONS.Timeout", timeout, 0x40, 0x40, true, 0x2e40588de81c09b4)
#else
#define _m00
#define _m01
#define _m02
#endif