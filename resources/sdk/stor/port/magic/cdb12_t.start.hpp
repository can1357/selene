#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB12.OperationCode", operation_code, 0x0, 0x8, true, 0xcb1e978f30f2480a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB12.RelativeAddress", relative_address, 0x8, 0x1, true, 0xf103561e6a1ee226, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB12.ForceUnitAccess", force_unit_access, 0xb, 0x1, true, 0x9bbac074f34e0513, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB12.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0x6f85682908a2ddf, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB12.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x4f368d3402266c9f, 3, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDB12.LogicalBlock", logical_block, 0x10, 0x20, true, 0xf433eec948b76c8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDB12.TransferLength", transfer_length, 0x30, 0x20, true, 0xcb09caabbffbb6f5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB12.Control", control, 0x58, 0x8, true, 0x50b3895d2825c2ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif