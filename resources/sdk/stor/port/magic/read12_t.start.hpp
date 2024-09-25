#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ12.OperationCode", operation_code, 0x0, 0x8, true, 0x3e182f829cee0686)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ12.RelativeAddress", relative_address, 0x8, 0x1, true, 0xd1ad3857c0ebfe49, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ12.ForceUnitAccess", force_unit_access, 0xb, 0x1, true, 0x3b2460573471c6b5, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ12.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0x4d240ba625c82f51, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ12.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x2744fe26670608ea, 3, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ12.LogicalBlock", logical_block, 0x10, 0x20, true, 0x8bee0ae12a9ce24c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ12.TransferLength", transfer_length, 0x30, 0x20, true, 0x41a0c2219ef74c2a)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ12.Streaming", streaming, 0x57, 0x1, true, 0xee4069624fc61941, 1, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ12.Control", control, 0x58, 0x8, true, 0x1e466b5cc5366936)
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