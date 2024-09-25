#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_SESSION_WINLOGON.SessionId", session_id, 0x0, 0x20, true, 0x9a15e3c262b8dd8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_SESSION_WINLOGON.Console", console, 0x20, 0x8, true, 0xb127473edce38b24)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_SESSION_WINLOGON.Locked", locked, 0x28, 0x8, true, 0x9154581dd8274081)
#else
#define _m00
#define _m01
#define _m02
#endif