#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPOLYDRAW16.emr", emr, 0x0, 0x40, true, 0xa2ca21d971703d17)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPOLYDRAW16.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x4a82ae7568ebf2a3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYDRAW16.cpts", cpts, 0xc0, 0x20, true, 0xd6bc08e95abc33e8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::points_t, 1>), "tagEMRPOLYDRAW16.apts", apts, 0xe0, 0x20, true, 0x5b25f5d3128c4b39)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRPOLYDRAW16.abTypes", ab_types, 0x100, 0x8, true, 0x97bac6de32b495da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif