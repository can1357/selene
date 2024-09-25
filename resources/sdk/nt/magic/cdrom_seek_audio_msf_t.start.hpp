#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SEEK_AUDIO_MSF.M", m, 0x0, 0x8, true, 0xa2c38d97acd2b827)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SEEK_AUDIO_MSF.S", s, 0x8, 0x8, true, 0x543124afb1687fe9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SEEK_AUDIO_MSF.F", f, 0x10, 0x8, true, 0x4f9766a8b3ea13d6)
#else
#define _m00
#define _m01
#define _m02
#endif