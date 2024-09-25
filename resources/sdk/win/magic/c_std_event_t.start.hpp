#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cst_inner_unknown_t), "CStdEvent._cInner", c_inner, 0x80, 0xc0, true, 0xdd5ef432be6171a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CStdEvent._pControl", p_control, 0x140, 0x40, true, 0xab41e04577941074)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CStdEvent.m_hEvent", m_h_event, 0x180, 0x40, true, 0x39c40cad77c6578d)
#else
#define _m00
#define _m01
#define _m02
#endif