#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MECHANICAL_STATUS_INFORMATION_HEADER.CurrentSlot", current_slot, 0x0, 0x5, true, 0x20479f4ff80f8def, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MECHANICAL_STATUS_INFORMATION_HEADER.ChangerState", changer_state, 0x5, 0x2, true, 0x50d927f373941b03, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MECHANICAL_STATUS_INFORMATION_HEADER.Fault", fault, 0x7, 0x1, true, 0x2be2d77db38e1d5a, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MECHANICAL_STATUS_INFORMATION_HEADER.MechanismState", mechanism_state, 0xd, 0x3, true, 0x894f3ecccf8baa02, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MECHANICAL_STATUS_INFORMATION_HEADER.CurrentLogicalBlockAddress", current_logical_block_address, 0x10, 0x18, true, 0xc23e1e0c155ccddb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MECHANICAL_STATUS_INFORMATION_HEADER.NumberAvailableSlots", number_available_slots, 0x28, 0x8, true, 0x80724cb62658932e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MECHANICAL_STATUS_INFORMATION_HEADER.SlotTableLength", slot_table_length, 0x30, 0x10, true, 0xb3ad43acd217a1db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif