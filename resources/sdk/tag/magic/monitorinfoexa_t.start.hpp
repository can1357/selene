#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMONITORINFOEXA.cbSize", cb_size, 0x0, 0x20, true, 0xf7660edd1b61c04)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagMONITORINFOEXA.rcMonitor", rc_monitor, 0x20, 0x80, true, 0x77577bfc633a9274)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagMONITORINFOEXA.rcWork", rc_work, 0xa0, 0x80, true, 0x759660a9ebd642d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMONITORINFOEXA.dwFlags", dw_flags, 0x120, 0x20, true, 0xa8a791ba50ab9fa0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "tagMONITORINFOEXA.szDevice", sz_device, 0x140, 0x0, true, 0xeabec88572eb6a8f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif