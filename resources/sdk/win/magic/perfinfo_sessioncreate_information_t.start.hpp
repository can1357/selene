#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_SESSIONCREATE_INFORMATION.UniqueSessionId", unique_session_id, 0x0, 0x40, true, 0xb71ddeae5b4d259)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SESSIONCREATE_INFORMATION.SessionId", session_id, 0x40, 0x20, true, 0x1b2df8c4db1a69f9)
#else
#define _m00
#define _m01
#endif