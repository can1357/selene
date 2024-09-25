#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLANK_MEDIA.OperationCode", operation_code, 0x0, 0x8, true, 0xc9c4da81a00c353)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_BLANK_MEDIA.BlankType", blank_type, 0x8, 0x3, true, 0x94adc38e4fdb009c, 3, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_BLANK_MEDIA.Immediate", immediate, 0xc, 0x1, true, 0xddd67a2241f2a6b6, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_BLANK_MEDIA.AddressOrTrack", address_or_track, 0x10, 0x20, true, 0x69c99e185e5e7f28)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLANK_MEDIA.Control", control, 0x58, 0x8, true, 0x56cfd3f352745b15)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif