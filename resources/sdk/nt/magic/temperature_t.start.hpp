#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEMPERATURE.Temperature", temperature, 0x8, 0x8, true, 0xdff44c91c789fefa)
#else
#define _m00
#endif