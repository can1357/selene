#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPAIR_TRACK.OperationCode", operation_code, 0x0, 0x8, true, 0xc54c0081b552235e)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_REPAIR_TRACK.Immediate", immediate, 0x8, 0x1, true, 0xb3b8276c9e6f839c, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_REPAIR_TRACK.TrackNumber", track_number, 0x20, 0x10, true, 0xf8277a4fbbb7b609)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPAIR_TRACK.Control", control, 0x48, 0x8, true, 0xc5ceb89911a7fc09)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif