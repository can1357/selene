#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_NAME_INFO.cRDN", c_rdn, 0x0, 0x20, true, 0xaffa3a30f3132905)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_rdn_t*), "_CERT_NAME_INFO.rgRDN", rg_rdn, 0x40, 0x40, true, 0xe7118dd6105f76ec)
#else
#define _m00
#define _m01
#endif