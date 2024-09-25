#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_GAMMA_RAMP_RGB.Red", red, 0x0, 0x20, true, 0xad25c37764f8c4a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_GAMMA_RAMP_RGB.Green", green, 0x20, 0x20, true, 0xe2cc69afba26523)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_GAMMA_RAMP_RGB.Blue", blue, 0x40, 0x20, true, 0xbf4575380caf8440)
#else
#define _m00
#define _m01
#define _m02
#endif