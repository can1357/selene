#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STORE_PROV_FIND_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xee783c1a29f24ac0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STORE_PROV_FIND_INFO.dwMsgAndCertEncodingType", dw_msg_and_cert_encoding_type, 0x20, 0x20, true, 0xd725648ccebde86a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STORE_PROV_FIND_INFO.dwFindFlags", dw_find_flags, 0x40, 0x20, true, 0xa299dccdf8b27106)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STORE_PROV_FIND_INFO.dwFindType", dw_find_type, 0x60, 0x20, true, 0xd61c2af6e1010cdc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_CERT_STORE_PROV_FIND_INFO.pvFindPara", pv_find_para, 0x80, 0x40, true, 0x258b283070afa4b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif