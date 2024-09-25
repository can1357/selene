#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CPipeProxyImp.m_cRef", m_c_ref, 0x40, 0x20, true, 0xb2cde2964d5df8dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CPipeProxyImp.m_pUnkOuter", m_p_unk_outer, 0x80, 0x40, true, 0x37fea77437979129)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CPipeProxyImp.m_pRealPipeProxy", m_p_real_pipe_proxy, 0xc0, 0x40, true, 0x166352dfa904841f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CPipeProxyImp.m_pInternalPipeProxy", m_p_internal_pipe_proxy, 0x100, 0x40, true, 0x45a7aa66896f762d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_proxy_buffer_t*), "CPipeProxyImp.m_pInternalPB", m_p_internal_pb, 0x140, 0x40, true, 0xb0ca0c77e731a025)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CPipeProxyImp.m_IidOfPipe", m_iid_of_pipe, 0x180, 0x80, true, 0xe74551c972ca85cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif