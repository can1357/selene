#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_DIST_POINT_NAME.dwDistPointNameChoice", dw_dist_point_name_choice, 0x0, 0x20, true, 0x4635f933f8e2e98c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_info_t), "_CRL_DIST_POINT_NAME.FullName", full_name, 0x40, 0x80, true, 0xd472e6f34328c1b9)
#else
#define _m00
#define _m01
#endif