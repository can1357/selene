#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CDestObjectWrapper.m_cRef", m_c_ref, 0x80, 0x20, true, 0x7d608997513931e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dest_info_t*), "CDestObjectWrapper.m_pIDI", m_p_idi, 0xc0, 0x40, true, 0x23394f4ae17a53e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CDestObjectWrapper.m_dwDestCtx", m_dw_dest_ctx, 0xa0, 0x20, true, 0xa0b04e4dbcb759ba)
#else
#define _m00
#define _m01
#define _m02
#endif