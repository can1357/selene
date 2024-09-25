#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTITLEBARINFOEX.cbSize", cb_size, 0x0, 0x20, true, 0xf84e987935e59bab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagTITLEBARINFOEX.rcTitleBar", rc_title_bar, 0x20, 0x80, true, 0xd0e28e4833ac79c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "tagTITLEBARINFOEX.rgstate", rgstate, 0xa0, 0xc0, true, 0x4b4e6b5e6de1c48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::rect_t, 6>), "tagTITLEBARINFOEX.rgrect", rgrect, 0x160, 0x0, true, 0x5f3106d6d0cc69fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif