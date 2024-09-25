#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::memory_error_section_validbits_t), "_WHEA_MEMORY_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x40, true, 0xc856d392c16b6e5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_status_t), "_WHEA_MEMORY_ERROR_SECTION.ErrorStatus", error_status, 0x40, 0x40, true, 0x248b868e88c44c65)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_MEMORY_ERROR_SECTION.PhysicalAddress", physical_address, 0x80, 0x40, true, 0xff69f365ab5c210c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_MEMORY_ERROR_SECTION.PhysicalAddressMask", physical_address_mask, 0xc0, 0x40, true, 0xaff3aeb9f24d5571)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.Node", node, 0x100, 0x10, true, 0x889db2b90cbeaaf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.Card", card, 0x110, 0x10, true, 0xba690b956881d665)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.Module", module, 0x120, 0x10, true, 0x46cbdce6fe36ea93)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.Bank", bank, 0x130, 0x10, true, 0x1ff86a5d6b1cc0a1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.Device", device, 0x140, 0x10, true, 0x52e7380a26545b32)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.Row", row, 0x150, 0x10, true, 0x3296431253a48822)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.Column", column, 0x160, 0x10, true, 0xfb3c410f3b2e11c8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.BitPosition", bit_position, 0x170, 0x10, true, 0x572e013a7cbacb0a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_MEMORY_ERROR_SECTION.RequesterId", requester_id, 0x180, 0x40, true, 0x2a1d8e457fad9f7a)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_MEMORY_ERROR_SECTION.ResponderId", responder_id, 0x1c0, 0x40, true, 0xf9043db2966bbe9f)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_MEMORY_ERROR_SECTION.TargetId", target_id, 0x200, 0x40, true, 0x9dd7573dc4a1ae2c)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_MEMORY_ERROR_SECTION.ErrorType", error_type, 0x240, 0x8, true, 0x43660c2b86ce0b1b)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_MEMORY_ERROR_SECTION.Extended", extended, 0x248, 0x8, true, 0xfe088e2b3711f85)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.RankNumber", rank_number, 0x250, 0x10, true, 0x735978e768161eae)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.CardHandle", card_handle, 0x260, 0x10, true, 0x61f5a16d34fbbfde)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_ERROR_SECTION.ModuleHandle", module_handle, 0x270, 0x10, true, 0xee3535c02da91131)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif