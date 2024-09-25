#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_POLICY_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x65cd405111d1acad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_POLICY_PARA.dwFlags", dw_flags, 0x20, 0x20, true, 0x7f6600bd8030b113)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_POLICY_PARA.pvExtraPolicyPara", pv_extra_policy_para, 0x40, 0x40, true, 0x7b5116cbde8e9a61)
#else
#define _m00
#define _m01
#define _m02
#endif