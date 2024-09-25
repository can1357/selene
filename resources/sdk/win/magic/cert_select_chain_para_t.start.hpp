#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_SELECT_CHAIN_PARA.hChainEngine", h_chain_engine, 0x0, 0x40, true, 0x4012027e95e5b3c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CERT_SELECT_CHAIN_PARA.pTime", p_time, 0x40, 0x40, true, 0xe73cf32f559388f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_SELECT_CHAIN_PARA.hAdditionalStore", h_additional_store, 0x80, 0x40, true, 0xa96bd956bf75acd7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_chain_para_t*), "_CERT_SELECT_CHAIN_PARA.pChainPara", p_chain_para, 0xc0, 0x40, true, 0xfd5b647e6cde4ab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SELECT_CHAIN_PARA.dwFlags", dw_flags, 0x100, 0x20, true, 0xb7c19a14143ae542)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif