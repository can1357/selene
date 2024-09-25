#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE16.OperationCode", operation_code, 0x0, 0x8, true, 0x9425cbb465be5f3b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE16.ForceUnitAccess", force_unit_access, 0xb, 0x1, true, 0x80f21ba6e5fc0126, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE16.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0xdabe3a4e77c0c327, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WRITE16.WriteProtect", write_protect, 0xd, 0x3, true, 0x86c2d0e72b210a6f, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_WRITE16.LogicalBlock", logical_block, 0x10, 0x40, true, 0xf6d62bca5eb26e20)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_WRITE16.TransferLength", transfer_length, 0x50, 0x20, true, 0xc2529c848e2ecc81)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE16.Streaming", streaming, 0x77, 0x1, true, 0x2c10b198a2e9d1b1, 1, uint8_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE16.Control", control, 0x78, 0x8, true, 0x79d30fea59fd23a0)
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