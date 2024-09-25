#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TYPE.Signature", signature, 0x0, 0x10, true, 0xd56d516ba8e0a626)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TYPE.Size", size, 0x10, 0x10, true, 0xa2e894982ad3636e)
#else
#define _m00
#define _m01
#endif