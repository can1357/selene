#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRequestSystemBuffer.m_Buffer", m_buffer, 0x40, 0x40, true, 0x8bf4b77e9940c07f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxRequestSystemBuffer.m_Mdl", m_mdl, 0x40, 0x40, true, 0x2f62dc050b6097c6)
#else
#define _m00
#define _m01
#endif