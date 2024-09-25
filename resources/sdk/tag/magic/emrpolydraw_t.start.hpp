#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPOLYDRAW.emr", emr, 0x0, 0x40, true, 0x601fdc70d6ba7a74)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPOLYDRAW.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xc889cafd1bee0d00)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYDRAW.cptl", cptl, 0xc0, 0x20, true, 0x6101b802d44e47bf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::pointl_t, 1>), "tagEMRPOLYDRAW.aptl", aptl, 0xe0, 0x40, true, 0xaed9ab3c8f043af9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRPOLYDRAW.abTypes", ab_types, 0x120, 0x8, true, 0x5f83ed0f7351d0ab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif