#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_READCONSOLE_CONTROL.nLength", n_length, 0x0, 0x20, true, 0xbdd12111f6c2f51d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_READCONSOLE_CONTROL.nInitialChars", n_initial_chars, 0x20, 0x20, true, 0xe99eacc28b2fbfa2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_READCONSOLE_CONTROL.dwCtrlWakeupMask", dw_ctrl_wakeup_mask, 0x40, 0x20, true, 0x5901532d16aa0e79)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_READCONSOLE_CONTROL.dwControlKeyState", dw_control_key_state, 0x60, 0x20, true, 0xe86402b6ccd281bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif