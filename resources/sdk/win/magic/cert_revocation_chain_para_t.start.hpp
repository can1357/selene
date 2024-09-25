#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_CHAIN_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xd50837ebc2e60f8a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_REVOCATION_CHAIN_PARA.hChainEngine", h_chain_engine, 0x40, 0x40, true, 0x34ebe7e7081b0300)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_REVOCATION_CHAIN_PARA.hAdditionalStore", h_additional_store, 0x80, 0x40, true, 0xf6cc2291fe7efb84)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_CHAIN_PARA.dwChainFlags", dw_chain_flags, 0xc0, 0x20, true, 0xae507d5cd8617fa7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_CHAIN_PARA.dwUrlRetrievalTimeout", dw_url_retrieval_timeout, 0xe0, 0x20, true, 0xdb613e03263b3eb9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CERT_REVOCATION_CHAIN_PARA.pftCurrentTime", pft_current_time, 0x100, 0x40, true, 0x500d0449ea7eb1f8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CERT_REVOCATION_CHAIN_PARA.pftCacheResync", pft_cache_resync, 0x140, 0x40, true, 0xbe0ff3e3a574a814)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_CHAIN_PARA.cbMaxUrlRetrievalByteCount", cb_max_url_retrieval_byte_count, 0x180, 0x20, true, 0x7792f3b3fc4f0df3)
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