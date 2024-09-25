#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SESSION_STATE_INFORMATION.SessionId", session_id, 0x0, 0x20, true, 0x9c931be815db1750)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum io::session_state_t), "_IO_SESSION_STATE_INFORMATION.SessionState", session_state, 0x20, 0x20, true, 0xac52397116e25a33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_SESSION_STATE_INFORMATION.LocalSession", local_session, 0x40, 0x8, true, 0x28ecdc530053138c)
#else
#define _m00
#define _m01
#define _m02
#endif