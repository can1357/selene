#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.ErrorStatus", error_status, 0x0, 0x1, true, 0x43893d165cf0cd00, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.PhysicalAddress", physical_address, 0x1, 0x1, true, 0xbfddc5f732e36fff, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.PhysicalAddressMask", physical_address_mask, 0x2, 0x1, true, 0xacfd7cb2f9637007, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.Node", node, 0x3, 0x1, true, 0xd93206d8e6464dcf, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.Card", card, 0x4, 0x1, true, 0xaa3c5e5d2a96976, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.Module", module, 0x5, 0x1, true, 0xce5724d2fd838184, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.Bank", bank, 0x6, 0x1, true, 0x9bf7f826b79c5223, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.Device", device, 0x7, 0x1, true, 0xae024510a89f77e5, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.Row", row, 0x8, 0x1, true, 0x87a088405c519a31, 1, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.Column", column, 0x9, 0x1, true, 0xd5340bf0d594c5aa, 1, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.BitPosition", bit_position, 0xa, 0x1, true, 0x5164690f7ca6c37e, 1, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.RequesterId", requester_id, 0xb, 0x1, true, 0x58454e69e7abd1ce, 1, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.ResponderId", responder_id, 0xc, 0x1, true, 0x91e4f63eb488f267, 1, uint64_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.TargetId", target_id, 0xd, 0x1, true, 0xe7bfb1781d4b2b09, 1, uint64_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.ErrorType", error_type, 0xe, 0x1, true, 0xe26a49a7404ca473, 1, uint64_t)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0xe26e5083d9b0725d)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.RankNumber", rank_number, 0xf, 0x1, true, 0x5ebe4f1d6654c5cb, 1, uint64_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.CardHandle", card_handle, 0x10, 0x1, true, 0x61cc2555172792f6, 1, uint64_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.ModuleHandle", module_handle, 0x11, 0x1, true, 0x9e817a020234e9df, 1, uint64_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.ExtendedRow", extended_row, 0x12, 0x1, true, 0x5b37396348c0d3ab, 1, uint64_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.BankGroup", bank_group, 0x13, 0x1, true, 0x272c36b419b5d190, 1, uint64_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.BankAddress", bank_address, 0x14, 0x1, true, 0x286c48c69f33a917, 1, uint64_t)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.ChipIdentification", chip_identification, 0x15, 0x1, true, 0x5bfbbb73c381278, 1, uint64_t)
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
#define _m20
#define _m21
#define _m22
#endif