#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x3b5f9ec980afcfe3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.pszUsageIdentifier", psz_usage_identifier, 0x40, 0x40, true, 0x30eedda805197f4a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.dwKeySpec", dw_key_spec, 0x80, 0x20, true, 0x64b74451a43ba9a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.dwAcquirePrivateKeyFlags", dw_acquire_private_key_flags, 0xa0, 0x20, true, 0x7b7726308898c891)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.cIssuer", c_issuer, 0xc0, 0x20, true, 0xad8a69612502cf87)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.rgIssuer", rg_issuer, 0x100, 0x40, true, 0xeb910eb6da467d91)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_cert_chain_find_by_issuer_callback_t ), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.pfnFindCallback", pfn_find_callback, 0x140, 0x40, true, 0x3f5422674a36a42f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_FIND_BY_ISSUER_PARA.pvFindArg", pv_find_arg, 0x180, 0x40, true, 0xd8bda9f42818b36f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif