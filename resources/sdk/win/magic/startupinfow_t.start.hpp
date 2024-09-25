#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.cb", cb, 0x0, 0x20, true, 0x4d5ec11e4306d0da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STARTUPINFOW.lpReserved", lp_reserved, 0x40, 0x40, true, 0xd73422dcfe72a1c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STARTUPINFOW.lpDesktop", lp_desktop, 0x80, 0x40, true, 0x257260f164427149)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STARTUPINFOW.lpTitle", lp_title, 0xc0, 0x40, true, 0x98243d6e764c27fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwX", dw_x, 0x100, 0x20, true, 0xfd86d27ab9c83f6e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwY", dw_y, 0x120, 0x20, true, 0x2f157ab431a8b5e3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwXSize", dw_x_size, 0x140, 0x20, true, 0x382965edcae59c99)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwYSize", dw_y_size, 0x160, 0x20, true, 0xcc0c8b06b8160f01)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwXCountChars", dw_x_count_chars, 0x180, 0x20, true, 0x6dec500250b6a423)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwYCountChars", dw_y_count_chars, 0x1a0, 0x20, true, 0x54665e4eff16abad)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwFillAttribute", dw_fill_attribute, 0x1c0, 0x20, true, 0xc3ee7e0aa7fddc3e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOW.dwFlags", dw_flags, 0x1e0, 0x20, true, 0x744dbd7a67fb798a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STARTUPINFOW.wShowWindow", w_show_window, 0x200, 0x10, true, 0xc80efb31855b34f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STARTUPINFOW.cbReserved2", cb_reserved2, 0x210, 0x10, true, 0xb75f8b9ed6453c1a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_STARTUPINFOW.lpReserved2", lp_reserved2, 0x240, 0x40, true, 0xdf609deb93582b9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STARTUPINFOW.hStdInput", h_std_input, 0x280, 0x40, true, 0x5d45a97998764382)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STARTUPINFOW.hStdOutput", h_std_output, 0x2c0, 0x40, true, 0x7beb1d3477909c0d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STARTUPINFOW.hStdError", h_std_error, 0x300, 0x40, true, 0xa9783763b89a1330)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif