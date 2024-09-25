#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_MOUSE_EVENT_RECORD.dwMousePosition", dw_mouse_position, 0x0, 0x20, true, 0xe510fcfb81909db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MOUSE_EVENT_RECORD.dwButtonState", dw_button_state, 0x20, 0x20, true, 0x393755e6389fa476)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MOUSE_EVENT_RECORD.dwControlKeyState", dw_control_key_state, 0x40, 0x20, true, 0x572bf9d0823836c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MOUSE_EVENT_RECORD.dwEventFlags", dw_event_flags, 0x60, 0x20, true, 0x765f2dce9ef2abfd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif