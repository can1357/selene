#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_VWIFI_COMBINATION.Header", header, 0x0, 0x20, true, 0x8fd9a49245f1ead1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_VWIFI_COMBINATION.uNumInfrastructure", u_num_infrastructure, 0x20, 0x20, true, 0xe9f7a64cb945ed1b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_VWIFI_COMBINATION.uNumAdhoc", u_num_adhoc, 0x40, 0x20, true, 0x2568439d1d8f7a3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_VWIFI_COMBINATION.uNumSoftAP", u_num_soft_ap, 0x60, 0x20, true, 0xb1395ce78595b607)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif