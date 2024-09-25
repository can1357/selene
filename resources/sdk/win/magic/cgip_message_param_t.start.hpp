#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CGIPMessageParam.m_dwCookie", m_dw_cookie, 0x100, 0x20, true, 0xed44e2e338a0ab43)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CGIPMessageParam.m_causalityId", m_causality_id, 0x120, 0x80, true, 0xc71b5cd3b390f415)
#else
#define _m00
#define _m01
#endif