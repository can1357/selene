#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DL_EUI48.Byte", byte, 0x0, 0x30, true, 0xd3f1c9a53eee88bf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union ndis::dl_oui_t), "_DL_EUI48.Oui", oui, 0x0, 0x18, true, 0x33e9cc260d2150fa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union ndis::dl_ei48_t), "_DL_EUI48.Ei48", ei48, 0x18, 0x18, true, 0x1255129642af88c)
#else
#define _m00
#define _m01
#define _m02
#endif