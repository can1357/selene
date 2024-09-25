#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREXTTEXTOUTA.emr", emr, 0x0, 0x40, true, 0xa755963fe0e0a9fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMREXTTEXTOUTA.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x9bfc039043762d1a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTTEXTOUTA.iGraphicsMode", i_graphics_mode, 0xc0, 0x20, true, 0x758ba388623fb511)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagEMREXTTEXTOUTA.exScale", ex_scale, 0xe0, 0x20, true, 0x4e56fae1ab26ebc0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagEMREXTTEXTOUTA.eyScale", ey_scale, 0x100, 0x20, true, 0x37b5e4c8012456f0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emrtext_t), "tagEMREXTTEXTOUTA.emrtext", emrtext, 0x120, 0x40, true, 0x54a03800f4cee5de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif