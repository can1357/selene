#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_SERIAL_DEVICE_DATA.Version", version, 0x0, 0x10, true, 0x37df440fa37a1d64)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_SERIAL_DEVICE_DATA.Revision", revision, 0x10, 0x10, true, 0xd88572bc6af0ccf3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_SERIAL_DEVICE_DATA.BaudClock", baud_clock, 0x20, 0x20, true, 0x93c4e44d97ff2620)
#else
#define _m00
#define _m01
#define _m02
#endif