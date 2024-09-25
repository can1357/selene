#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_DRIVE_LETTER_CURDIR.Flags", flags, 0x0, 0x10, true, 0x15e0d533d00ab704)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_DRIVE_LETTER_CURDIR.Length", length, 0x10, 0x10, true, 0x1ce4ed7cd1a11755)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DRIVE_LETTER_CURDIR.TimeStamp", time_stamp, 0x20, 0x20, true, 0x499d0a3594c9fc9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_RTL_DRIVE_LETTER_CURDIR.DosPath", dos_path, 0x40, 0x80, true, 0xcff55ec6247f6e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif