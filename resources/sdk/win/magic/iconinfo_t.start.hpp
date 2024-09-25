#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ICONINFO.fIcon", f_icon, 0x0, 0x20, true, 0x9ea5c8a6f174b196)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFO.xHotspot", x_hotspot, 0x20, 0x20, true, 0x274500df92dd0b6a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFO.yHotspot", y_hotspot, 0x40, 0x20, true, 0xbff1c49a5a585b75)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "_ICONINFO.hbmMask", hbm_mask, 0x80, 0x40, true, 0x80d8de6b069dcfa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "_ICONINFO.hbmColor", hbm_color, 0xc0, 0x40, true, 0xc256ad9d406b8e9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif