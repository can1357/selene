#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_POINTL.x", x, 0x0, 0x20, true, 0xf3bccc82829e409b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_POINTL.y", y, 0x20, 0x20, true, 0x86006504eb1306c)
#else
#define _m00
#define _m01
#endif