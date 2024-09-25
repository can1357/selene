#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const sdk::hresult), "_com_error.m_hresult", m_hresult, 0x40, 0x20, true, 0xfa3c6c1243e7448e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_error_info_t*), "_com_error.m_perrinfo", m_perrinfo, 0x80, 0x40, true, 0xeaa2664a477c4a9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_com_error.m_pszMsg", m_psz_msg, 0xc0, 0x40, true, 0x39a941b74b35b032)
#else
#define _m00
#define _m01
#define _m02
#endif