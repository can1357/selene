#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, void const*>), "CFastBH.m_ifHandle", m_if_handle, 0x0, 0x40, true, 0xa017e8c57f8a2e7f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CFastBH.m_hRpc", m_h_rpc, 0x80, 0x40, true, 0x29d8c80b21bb63a6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CFastBH.m_dontLinger", m_dont_linger, 0x40, 0x8, true, 0x7cb0af3c55837d73)
#else
#define _m00
#define _m01
#define _m02
#endif