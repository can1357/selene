#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_rundown_t&), "KRundownHolder.m_rundown", m_rundown, 0x0, 0x40, true, 0xaca863d2c8f36ade)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KRundownHolder.m_count", m_count, 0x40, 0x20, true, 0x5a46814ee4efd7b3)
#else
#define _m00
#define _m01
#endif