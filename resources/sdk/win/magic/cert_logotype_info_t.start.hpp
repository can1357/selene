#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_INFO.dwLogotypeInfoChoice", dw_logotype_info_choice, 0x0, 0x20, true, 0xd21d3ae7d7e06ad0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_data_t*), "_CERT_LOGOTYPE_INFO.pLogotypeDirectInfo", p_logotype_direct_info, 0x40, 0x40, true, 0x634128d23cdce43f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_reference_t*), "_CERT_LOGOTYPE_INFO.pLogotypeIndirectInfo", p_logotype_indirect_info, 0x40, 0x40, true, 0x9afefec98fb1b656)
#else
#define _m00
#define _m01
#define _m02
#endif