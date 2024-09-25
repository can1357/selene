#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SUB_Q_DATA_FORMAT.Format", format, 0x0, 0x8, true, 0x13d2432757948c15)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_SUB_Q_DATA_FORMAT.Track", track, 0x8, 0x8, true, 0xef9f736439b48b)
#else
#define _m00
#define _m01
#endif