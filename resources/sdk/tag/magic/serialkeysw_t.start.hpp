#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSW.cbSize", cb_size, 0x0, 0x20, true, 0xc5b269a9bc80875c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSW.dwFlags", dw_flags, 0x20, 0x20, true, 0xa9fffaa73c900d9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSERIALKEYSW.lpszActivePort", lpsz_active_port, 0x40, 0x40, true, 0x7367604f86a69179)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSERIALKEYSW.lpszPort", lpsz_port, 0x80, 0x40, true, 0x34011b166c20f02e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSW.iBaudRate", i_baud_rate, 0xc0, 0x20, true, 0x45f72eddb35a5c25)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSW.iPortState", i_port_state, 0xe0, 0x20, true, 0x18ba8d8941d2516)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSW.iActive", i_active, 0x100, 0x20, true, 0x3abd37c5a0aa0c7d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif