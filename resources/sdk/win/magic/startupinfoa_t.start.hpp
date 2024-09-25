#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.cb", cb, 0x0, 0x20, true, 0x44ddcd74877091bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_STARTUPINFOA.lpReserved", lp_reserved, 0x40, 0x40, true, 0x863398e434bb96c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_STARTUPINFOA.lpDesktop", lp_desktop, 0x80, 0x40, true, 0x7362285088c6b7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_STARTUPINFOA.lpTitle", lp_title, 0xc0, 0x40, true, 0x6c30c19243b3b358)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwX", dw_x, 0x100, 0x20, true, 0x7cefd4bf524b2239)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwY", dw_y, 0x120, 0x20, true, 0x8d53b2a870d67cae)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwXSize", dw_x_size, 0x140, 0x20, true, 0x579a5478b5913c0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwYSize", dw_y_size, 0x160, 0x20, true, 0x7a6e3a5208edb47d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwXCountChars", dw_x_count_chars, 0x180, 0x20, true, 0xa86a68ba9645a4dc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwYCountChars", dw_y_count_chars, 0x1a0, 0x20, true, 0x195884e641b24398)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwFillAttribute", dw_fill_attribute, 0x1c0, 0x20, true, 0x9ed3d7d714d51e59)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTUPINFOA.dwFlags", dw_flags, 0x1e0, 0x20, true, 0x672dfc9d9a01c547)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STARTUPINFOA.wShowWindow", w_show_window, 0x200, 0x10, true, 0x94c93c739dfee509)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STARTUPINFOA.cbReserved2", cb_reserved2, 0x210, 0x10, true, 0xda5352f11b7e6933)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_STARTUPINFOA.lpReserved2", lp_reserved2, 0x240, 0x40, true, 0xfb274ebbdc7a6d5f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STARTUPINFOA.hStdInput", h_std_input, 0x280, 0x40, true, 0xe8c8d30b50447e31)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STARTUPINFOA.hStdOutput", h_std_output, 0x2c0, 0x40, true, 0xa6355d72c799a159)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STARTUPINFOA.hStdError", h_std_error, 0x300, 0x40, true, 0x5f9f7c251a74a21a)
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