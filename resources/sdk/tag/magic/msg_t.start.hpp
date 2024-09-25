#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagMSG.hwnd", hwnd, 0x0, 0x40, true, 0xe30b9b388298b708)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSG.message", message, 0x40, 0x20, true, 0xe6b8e0d6c94e1c86)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMSG.wParam", w_param, 0x80, 0x40, true, 0x65f4cebb221d59a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagMSG.lParam", l_param, 0xc0, 0x40, true, 0xe2389d9162ca2d3b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSG.time", time, 0x100, 0x20, true, 0x31cd3cada4c05792)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMSG.pt", pt, 0x120, 0x40, true, 0x7a76385bdd5fdee1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif