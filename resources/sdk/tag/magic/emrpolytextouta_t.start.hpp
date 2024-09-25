#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPOLYTEXTOUTA.emr", emr, 0x0, 0x40, true, 0xc9498c241fc98d93)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPOLYTEXTOUTA.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x8b31b6113b12e53a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYTEXTOUTA.iGraphicsMode", i_graphics_mode, 0xc0, 0x20, true, 0x244a743935fe2e7a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagEMRPOLYTEXTOUTA.exScale", ex_scale, 0xe0, 0x20, true, 0x9a28f8ccbf590547)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagEMRPOLYTEXTOUTA.eyScale", ey_scale, 0x100, 0x20, true, 0xee9b69524fc78b6d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRPOLYTEXTOUTA.cStrings", c_strings, 0x120, 0x20, true, 0xc52d7ea3d527a19f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::emrtext_t, 1>), "tagEMRPOLYTEXTOUTA.aemrtext", aemrtext, 0x140, 0x40, true, 0xbd894e7f10329e47)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif