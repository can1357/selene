#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "CMutexSem2.m_cs", m_cs, 0x0, 0x40, true, 0xb8d09d3d2712774b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CMutexSem2.m_fCsInitialized", m_f_cs_initialized, 0x140, 0x20, true, 0xb60a84621399cd8b)
#else
#define _m00
#define _m01
#endif