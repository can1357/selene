#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_CURSOR_INFO.dwSize", dw_size, 0x0, 0x20, true, 0xa7ebd7822006abff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CONSOLE_CURSOR_INFO.bVisible", b_visible, 0x20, 0x20, true, 0xe48fca0260629bbb)
#else
#define _m00
#define _m01
#endif