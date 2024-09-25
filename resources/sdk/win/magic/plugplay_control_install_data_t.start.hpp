#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_INSTALL_DATA.BufferLength", buffer_length, 0x0, 0x20, true, 0x706946a78cb4ef6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_INSTALL_DATA.Buffer", buffer, 0x40, 0x40, true, 0x9003aa7f80591ac2)
#else
#define _m00
#define _m01
#endif