#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_CURDIR.DosPath", dos_path, 0x0, 0x80, true, 0x856d78967da5e6df)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CURDIR.Handle", handle, 0x80, 0x40, true, 0xd3fe82905cddfca3)
#else
#define _m00
#define _m01
#endif