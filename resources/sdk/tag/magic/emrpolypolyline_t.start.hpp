#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPOLYPOLYLINE.emr", emr, 0x0, 0x40, true, 0xc59f186d76fcd0e1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPOLYPOLYLINE.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x6e143d931a550840)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYPOLYLINE.nPolys", n_polys, 0xc0, 0x20, true, 0x21ab5e75e10f22c4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYPOLYLINE.cptl", cptl, 0xe0, 0x20, true, 0x8948685e23835b59)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "tagEMRPOLYPOLYLINE.aPolyCounts", a_poly_counts, 0x100, 0x20, true, 0xe3e23ce8dcd5b867)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::pointl_t, 1>), "tagEMRPOLYPOLYLINE.aptl", aptl, 0x120, 0x40, true, 0x4f4113563c8cc94)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif