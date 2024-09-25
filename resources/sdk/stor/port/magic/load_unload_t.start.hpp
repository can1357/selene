#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOAD_UNLOAD.OperationCode", operation_code, 0x0, 0x8, true, 0xdf953e0b40af709b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOAD_UNLOAD.Immediate", immediate, 0x8, 0x1, true, 0xceb734b0ac3096fb, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_LOAD_UNLOAD.Lun", lun, 0xd, 0x3, true, 0xaa71566a35bb49c6, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOAD_UNLOAD.Start", start, 0x20, 0x1, true, 0xc66bf750e60a44ec, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOAD_UNLOAD.LoadEject", load_eject, 0x21, 0x1, true, 0xe504799b27f33b88, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOAD_UNLOAD.Slot", slot, 0x40, 0x8, true, 0xc937dab93e4dcb3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif