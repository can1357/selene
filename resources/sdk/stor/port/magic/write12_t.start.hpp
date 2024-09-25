#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE12.OperationCode", operation_code, 0x0, 0x8, true, 0xca30b2b86c8090c9)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE12.RelativeAddress", relative_address, 0x8, 0x1, true, 0x71451cad1cc27fa8, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE12.EBP", ebp, 0xa, 0x1, true, 0xe0d4a5994e4be2cc, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE12.ForceUnitAccess", force_unit_access, 0xb, 0x1, true, 0xc11bc97dbcc5ace0, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE12.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0x48c206fa3c919096, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WRITE12.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x7a948feab1ffece7, 3, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_WRITE12.LogicalBlock", logical_block, 0x10, 0x20, true, 0xe6fdd297f7780f86)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_WRITE12.TransferLength", transfer_length, 0x30, 0x20, true, 0xf5833242edc1eb14)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE12.Streaming", streaming, 0x57, 0x1, true, 0xd8c6b6d301fc463d, 1, uint8_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE12.Control", control, 0x58, 0x8, true, 0x890484dfeef9e3ed)
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
#endif