#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SLOT_TABLE_INFORMATION.DiscChanged", disc_changed, 0x0, 0x1, true, 0xfb02b95bc78632b4, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SLOT_TABLE_INFORMATION.DiscPresent", disc_present, 0x7, 0x1, true, 0xfa77ac41d2993a64, 1, uint8_t)
#else
#define _m00
#define _m01
#endif