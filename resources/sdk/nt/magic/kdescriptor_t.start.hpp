#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KDESCRIPTOR.Limit", limit, 0x30, 0x10, true, 0xe1364396ae865478)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KDESCRIPTOR.Base", base, 0x40, 0x40, true, 0xd951f385e2f8c01f)
#else
#define _m00
#define _m01
#endif