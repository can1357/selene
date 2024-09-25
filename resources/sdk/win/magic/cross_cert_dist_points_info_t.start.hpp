#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CROSS_CERT_DIST_POINTS_INFO.dwSyncDeltaTime", dw_sync_delta_time, 0x0, 0x20, true, 0x768a1de9cc4cdbe5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CROSS_CERT_DIST_POINTS_INFO.cDistPoint", c_dist_point, 0x20, 0x20, true, 0xacfa2902ce0f971a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_info_t*), "_CROSS_CERT_DIST_POINTS_INFO.rgDistPoint", rg_dist_point, 0x40, 0x40, true, 0x96a8cfe3ba235137)
#else
#define _m00
#define _m01
#define _m02
#endif