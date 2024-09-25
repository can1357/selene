#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ16.OperationCode", operation_code, 0x0, 0x8, true, 0x5b34e8e89598bfbf)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ16.ForceUnitAccess", force_unit_access, 0xb, 0x1, true, 0x62d052e9d63420dd, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ16.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0x109806de1edddeec, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ16.ReadProtect", read_protect, 0xd, 0x3, true, 0xc8024e6beb925e41, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_READ16.LogicalBlock", logical_block, 0x10, 0x40, true, 0x8db3d84aba71f04c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ16.TransferLength", transfer_length, 0x50, 0x20, true, 0x8502eba71ce0664c)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ16.Streaming", streaming, 0x77, 0x1, true, 0xbc3aa6fbb39fbe1f, 1, uint8_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ16.Control", control, 0x78, 0x8, true, 0x5b77ac7bb84a7d84)
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