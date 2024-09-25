#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "AutoNetTraceActivity.m_bCreatedActivity", m_b_created_activity, 0x0, 0x20, true, 0xf9f2fda01c9457f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "AutoNetTraceActivity.m_PrevActivity", m_prev_activity, 0x20, 0x80, true, 0x8e619abd92d99274)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AutoNetTraceActivity.m_Context", m_context, 0xa0, 0x20, true, 0x8c64e6f1a2a474b8)
#else
#define _m00
#define _m01
#define _m02
#endif