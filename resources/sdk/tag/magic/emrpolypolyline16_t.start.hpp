#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPOLYPOLYLINE16.emr", emr, 0x0, 0x40, true, 0x8150b6c8a4035c65)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPOLYPOLYLINE16.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xfa6e0320a3e46dec)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYPOLYLINE16.nPolys", n_polys, 0xc0, 0x20, true, 0x91115c1fada45e13)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYPOLYLINE16.cpts", cpts, 0xe0, 0x20, true, 0x1eef3bdc5dac7002)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "tagEMRPOLYPOLYLINE16.aPolyCounts", a_poly_counts, 0x100, 0x20, true, 0x7c579dfd02a589aa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::points_t, 1>), "tagEMRPOLYPOLYLINE16.apts", apts, 0x120, 0x20, true, 0x98a7a7f166a4d4cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif