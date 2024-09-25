#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_div_t.quot", quot, 0x0, 0x20, true, 0xdbed801497dee6ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_div_t.rem", rem, 0x20, 0x20, true, 0x2f1914a7ea51847)
#else
#define _m00
#define _m01
#endif