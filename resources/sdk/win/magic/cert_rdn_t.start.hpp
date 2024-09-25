#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_RDN.cRDNAttr", c_rdn_attr, 0x0, 0x20, true, 0x73f7909357919aa0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_rdn_attr_t*), "_CERT_RDN.rgRDNAttr", rg_rdn_attr, 0x40, 0x40, true, 0x1cf717b890e9c073)
#else
#define _m00
#define _m01
#endif