#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOLYTEXTA.x", x, 0x0, 0x20, true, 0x71f6f75233979402)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOLYTEXTA.y", y, 0x20, 0x20, true, 0x2892eb8a301f88d7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOLYTEXTA.n", n, 0x40, 0x20, true, 0xaedb208ca262f63c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const char*), "tagPOLYTEXTA.lpstr", lpstr, 0x80, 0x40, true, 0x43d17b3f1705d0e9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOLYTEXTA.uiFlags", ui_flags, 0xc0, 0x20, true, 0x1ad38fe23b14fded)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagPOLYTEXTA.rcl", rcl, 0xe0, 0x80, true, 0xc62262bb0e4c83e4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "tagPOLYTEXTA.pdx", pdx, 0x180, 0x40, true, 0x98f495f1655777c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif