#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSF.StartingM", starting_m, 0x8, 0x8, true, 0x4f8d499781ce4d40)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSF.StartingS", starting_s, 0x10, 0x8, true, 0x65144e1e477fad26)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSF.StartingF", starting_f, 0x18, 0x8, true, 0xe7bfc4b0b32c2881)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSF.EndingM", ending_m, 0x20, 0x8, true, 0x1fcd0663b3b1043c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSF.EndingS", ending_s, 0x28, 0x8, true, 0xe08594e6ffbe0d20)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSF.EndingF", ending_f, 0x30, 0x8, true, 0xfde06cb1a2b8e67b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif