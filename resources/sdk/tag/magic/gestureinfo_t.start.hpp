#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTUREINFO.cbSize", cb_size, 0x0, 0x20, true, 0xe3a82e4dee69fea4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTUREINFO.dwFlags", dw_flags, 0x20, 0x20, true, 0x8bfb8a256db5c71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTUREINFO.dwID", dw_id, 0x40, 0x20, true, 0xb26e7b15088181ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGESTUREINFO.hwndTarget", hwnd_target, 0x80, 0x40, true, 0xe6749197f93a597c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::points_t), "tagGESTUREINFO.ptsLocation", pts_location, 0xc0, 0x20, true, 0xbe258ce9a6cdde42)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTUREINFO.dwInstanceID", dw_instance_id, 0xe0, 0x20, true, 0x5bbec90783c0875f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTUREINFO.dwSequenceID", dw_sequence_id, 0x100, 0x20, true, 0x341396097e0ab783)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagGESTUREINFO.ullArguments", ull_arguments, 0x140, 0x40, true, 0xcf2b590c5e32beaf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTUREINFO.cbExtraArgs", cb_extra_args, 0x180, 0x20, true, 0xc2d574458e0e6a18)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif