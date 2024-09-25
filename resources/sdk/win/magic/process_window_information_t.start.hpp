#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_WINDOW_INFORMATION.WindowFlags", window_flags, 0x0, 0x20, true, 0x92a7354fa6788586)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_WINDOW_INFORMATION.WindowTitleLength", window_title_length, 0x20, 0x10, true, 0x93e76ea6a8b1a89b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PROCESS_WINDOW_INFORMATION.WindowTitle", window_title, 0x30, 0x10, true, 0xa71ae928bdee0e5b)
#else
#define _m00
#define _m01
#define _m02
#endif