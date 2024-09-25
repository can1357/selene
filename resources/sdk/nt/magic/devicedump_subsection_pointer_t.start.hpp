#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_SUBSECTION_POINTER.dwSize", dw_size, 0x0, 0x20, true, 0x36c51df4f229742e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_SUBSECTION_POINTER.dwFlags", dw_flags, 0x20, 0x20, true, 0xf78b218495dbd13d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_SUBSECTION_POINTER.dwOffset", dw_offset, 0x40, 0x20, true, 0x14cfc6fe47c8f5fd)
#else
#define _m00
#define _m01
#define _m02
#endif