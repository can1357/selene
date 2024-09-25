#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "tagPOINTS.x", x, 0x0, 0x10, true, 0x74f031b5b9d5a14e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "tagPOINTS.y", y, 0x10, 0x10, true, 0xd799d6c2cc8653d6)
#else
#define _m00
#define _m01
#endif