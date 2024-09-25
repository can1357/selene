#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPOLYLINE16.emr", emr, 0x0, 0x40, true, 0xc14c67c4d4ece7f8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPOLYLINE16.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xa1a31bfd755fe09e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYLINE16.cpts", cpts, 0xc0, 0x20, true, 0xc1fd044f4e4217c7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::points_t, 1>), "tagEMRPOLYLINE16.apts", apts, 0xe0, 0x20, true, 0x56dd2f46050e66c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif