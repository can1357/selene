#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cmre_inner_unknown_t), "CManualResetEvent._cInner", c_inner, 0x80, 0xc0, true, 0x142a9e29112bb56d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CManualResetEvent._pControl", p_control, 0x140, 0x40, true, 0x7d9a04b47b0aa45c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_event_t*), "CManualResetEvent.m_cStdEvent", m_c_std_event, 0x180, 0x40, true, 0x795189403fcc4b9e)
#else
#define _m00
#define _m01
#define _m02
#endif