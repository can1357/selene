#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CPU_QUOTA_QUERY_ENTRY.SessionId", session_id, 0x0, 0x20, true, 0xd29a5bf305f380f3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CPU_QUOTA_QUERY_ENTRY.Weight", weight, 0x20, 0x20, true, 0x9d52440b3569371d)
#else
#define _m00
#define _m01
#endif