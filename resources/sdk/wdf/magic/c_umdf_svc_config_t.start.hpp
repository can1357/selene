#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CUmdfSvcConfig.m_Key", m_key, 0x0, 0x40, true, 0x2f9d0ec6c75576d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "CUmdfSvcConfig.m_AutoClose", m_auto_close, 0x40, 0x8, true, 0xe4986aebdf8dd9d)
#else
#define _m00
#define _m01
#endif