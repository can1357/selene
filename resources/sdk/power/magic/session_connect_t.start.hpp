#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_SESSION_CONNECT.Connected", connected, 0x0, 0x8, true, 0x8458788c7f68d06)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_SESSION_CONNECT.Console", console, 0x8, 0x8, true, 0xe810334816e128ee)
#else
#define _m00
#define _m01
#endif