#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_RANGE.Start", start, 0x0, 0x40, true, 0x7a5f4b8a217d8d95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_RANGE.End", end, 0x40, 0x40, true, 0x18fbf07395f7f706)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RANGE.UserData", user_data, 0x80, 0x40, true, 0x4170ab1fdd2cea7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RANGE.Owner", owner, 0xc0, 0x40, true, 0x378fe455331155e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_RANGE.Attributes", attributes, 0x100, 0x8, true, 0x5a64e4f715361297)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_RANGE.Flags", flags, 0x108, 0x8, true, 0x7867bfc5e50a48b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif