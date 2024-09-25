#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STORE_PROV_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xb507acc215b063e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STORE_PROV_INFO.cStoreProvFunc", c_store_prov_func, 0x20, 0x20, true, 0x35a60e71b1504557)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_CERT_STORE_PROV_INFO.rgpvStoreProvFunc", rgpv_store_prov_func, 0x40, 0x40, true, 0x6b2ac4cc093af895)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_STORE_PROV_INFO.hStoreProv", h_store_prov, 0x80, 0x40, true, 0x159d116aa4d6f85b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STORE_PROV_INFO.dwStoreProvFlags", dw_store_prov_flags, 0xc0, 0x20, true, 0x1676e3048402bf9e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_STORE_PROV_INFO.hStoreProvFuncAddr2", h_store_prov_func_addr2, 0x100, 0x40, true, 0xf0d61ca7b5844955)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif