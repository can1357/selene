#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_ALARM_ACE.Header", header, 0x0, 0x20, true, 0x116ada7ed3658c5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_ACE.Mask", mask, 0x20, 0x20, true, 0xdd064ae7fddc02fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_ACE.SidStart", sid_start, 0x40, 0x20, true, 0xdda7c84a147e2b4a)
#else
#define _m00
#define _m01
#define _m02
#endif