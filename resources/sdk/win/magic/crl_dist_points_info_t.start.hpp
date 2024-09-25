#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_DIST_POINTS_INFO.cDistPoint", c_dist_point, 0x0, 0x20, true, 0xbf6515b7eefebffb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crl_dist_point_t*), "_CRL_DIST_POINTS_INFO.rgDistPoint", rg_dist_point, 0x40, 0x40, true, 0x7a72b6d69e8d98e2)
#else
#define _m00
#define _m01
#endif