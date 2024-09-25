#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRequestOutputBuffer.m_Buffer", m_buffer, 0x40, 0x40, true, 0xb1d47123cce6eb40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxRequestOutputBuffer.m_Mdl", m_mdl, 0x40, 0x40, true, 0x53f1984588c213b3)
#else
#define _m00
#define _m01
#endif