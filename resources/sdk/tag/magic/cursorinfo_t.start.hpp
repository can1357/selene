#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCURSORINFO.cbSize", cb_size, 0x0, 0x20, true, 0x11cf6df69d14933e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCURSORINFO.flags", flags, 0x20, 0x20, true, 0x11831f34ed8dfd52)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagCURSORINFO.hCursor", h_cursor, 0x40, 0x40, true, 0x4c79e1988b720a8f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagCURSORINFO.ptScreenPos", pt_screen_pos, 0x80, 0x40, true, 0xe235cc63a170522e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif