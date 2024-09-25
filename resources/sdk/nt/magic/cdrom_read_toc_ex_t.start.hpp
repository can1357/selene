#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CDROM_READ_TOC_EX.Format", format, 0x0, 0x4, true, 0xcdb917b12da18393, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_READ_TOC_EX.Msf", msf, 0x7, 0x1, true, 0x64711d9769f3213e, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_READ_TOC_EX.SessionTrack", session_track, 0x8, 0x8, true, 0xacf14dc9b8a1ea8c)
#else
#define _m00
#define _m01
#define _m02
#endif