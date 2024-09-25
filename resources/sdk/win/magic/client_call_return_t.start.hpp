#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CLIENT_CALL_RETURN.Pointer", pointer, 0x0, 0x40, true, 0xf11aef6c13b05ec4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLIENT_CALL_RETURN.Simple", simple, 0x0, 0x40, true, 0xa237bcf38278f694)
#else
#define _m00
#define _m01
#endif