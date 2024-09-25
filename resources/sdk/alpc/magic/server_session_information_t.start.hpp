#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_SERVER_SESSION_INFORMATION.SessionId", session_id, 0x0, 0x20, true, 0x324d144e043a3616)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_SERVER_SESSION_INFORMATION.ProcessId", process_id, 0x20, 0x20, true, 0x6db813a119e10d92)
#else
#define _m00
#define _m01
#endif