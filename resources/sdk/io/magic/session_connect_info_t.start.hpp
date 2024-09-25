#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SESSION_CONNECT_INFO.SessionId", session_id, 0x0, 0x20, true, 0xcb95ceb67d9f99ac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_SESSION_CONNECT_INFO.LocalSession", local_session, 0x20, 0x8, true, 0xff18aff3714d65d0)
#else
#define _m00
#define _m01
#endif