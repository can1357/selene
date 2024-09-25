#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_POLICY_STATUS.cbSize", cb_size, 0x0, 0x20, true, 0x37c8d0345ef45fe9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_POLICY_STATUS.dwError", dw_error, 0x20, 0x20, true, 0x71d352aa8efe22b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_CHAIN_POLICY_STATUS.lChainIndex", l_chain_index, 0x40, 0x20, true, 0xbe47d9b1d5838a48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_CHAIN_POLICY_STATUS.lElementIndex", l_element_index, 0x60, 0x20, true, 0xa0ff973ea38a6283)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_POLICY_STATUS.pvExtraPolicyStatus", pv_extra_policy_status, 0x80, 0x40, true, 0x780a591178a7db99)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif