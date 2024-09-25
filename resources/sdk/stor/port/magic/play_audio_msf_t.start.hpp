#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.OperationCode", operation_code, 0x0, 0x8, true, 0xadc7864e2af29ba9)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PLAY_AUDIO_MSF.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x5e8ef428ccea594b, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.StartingM", starting_m, 0x18, 0x8, true, 0x3c295b4235552075)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.StartingS", starting_s, 0x20, 0x8, true, 0xdd91634955825149)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.StartingF", starting_f, 0x28, 0x8, true, 0x61c2b6d2122fb20f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.EndingM", ending_m, 0x30, 0x8, true, 0xaadda9cd252b0988)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.EndingS", ending_s, 0x38, 0x8, true, 0x9b8d2765cf80e925)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.EndingF", ending_f, 0x40, 0x8, true, 0xe4ab5e4d9e51fe1b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO_MSF.Control", control, 0x48, 0x8, true, 0x90a78c0f21b8d5a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif