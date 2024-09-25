#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "SNameKey.pIpid", p_ipid, 0x0, 0x40, true, 0x276bc4ccb1006adc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::securitybinding_t*), "SNameKey.pName", p_name, 0x40, 0x40, true, 0x47ee354ad15e6d7b)
#else
#define _m00
#define _m01
#endif