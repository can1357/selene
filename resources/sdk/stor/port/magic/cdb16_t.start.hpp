#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB16.OperationCode", operation_code, 0x0, 0x8, true, 0xbb7a00ae23eb8e0d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB16.ForceUnitAccess", force_unit_access, 0xb, 0x1, true, 0x211e6b306c404cc1, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB16.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0x7de3da3a518cd28a, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB16.Protection", protection, 0xd, 0x3, true, 0x475eaaacc348492, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CDB16.LogicalBlock", logical_block, 0x10, 0x40, true, 0x7811178a867285cb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDB16.TransferLength", transfer_length, 0x50, 0x20, true, 0x90b6c5c61b5e8a4a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB16.Control", control, 0x78, 0x8, true, 0xc44fd4975999c3cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif