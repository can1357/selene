#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxIrp.m_Irp", m_irp, 0x0, 0x40, true, 0x8b84afbb5b4aa5be)
#else
#define _m00
#endif