#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SESSION_USER_CONTEXT.ContextToken", context_token, 0x0, 0x40, true, 0xc211544cd2d1a764)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SESSION_USER_CONTEXT.SessionId", session_id, 0x40, 0x20, true, 0xc80cf3c5a3166be8)
#else
#define _m00
#define _m01
#endif