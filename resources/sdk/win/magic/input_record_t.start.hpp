#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_INPUT_RECORD.EventType", event_type, 0x0, 0x10, true, 0xbbc4fd2a7bd7ee1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::key_event_record_t), "_INPUT_RECORD.Event.KeyEvent", key_event, 0x0, 0x80, true, 0x6491d7432abe1449)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::mouse_event_record_t), "_INPUT_RECORD.Event.MouseEvent", mouse_event, 0x0, 0x80, true, 0xd9f1ea625e88b45f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::window_buffer_size_record_t), "_INPUT_RECORD.Event.WindowBufferSizeEvent", window_buffer_size_event, 0x0, 0x20, true, 0x53836fb3f255eacb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::menu_event_record_t), "_INPUT_RECORD.Event.MenuEvent", menu_event, 0x0, 0x20, true, 0x1482014642fcc532)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::focus_event_record_t), "_INPUT_RECORD.Event.FocusEvent", focus_event, 0x0, 0x20, true, 0x158238772d34ddc2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_event_t), "_INPUT_RECORD.Event", event, 0x20, 0x80, true, 0x7f36f4738e23c7ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif