#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VERIFY16.OperationCode", operation_code, 0x0, 0x8, true, 0x3dfe55d0cf566acb)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VERIFY16.ByteCheck", byte_check, 0x9, 0x1, true, 0x8859b3764bf1b12c, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VERIFY16.BlockVerify", block_verify, 0xa, 0x1, true, 0x2fceeb54a85f9605, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VERIFY16.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0xb84fde2dc716c75, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VERIFY16.VerifyProtect", verify_protect, 0xd, 0x3, true, 0x860d02ca1a4a3b79, 3, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_VERIFY16.LogicalBlock", logical_block, 0x10, 0x40, true, 0x890598d8e10d9837)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VERIFY16.VerificationLength", verification_length, 0x50, 0x20, true, 0x1f47b02322e0735a)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VERIFY16.Streaming", streaming, 0x77, 0x1, true, 0x1453b6ff4affb765, 1, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VERIFY16.Control", control, 0x78, 0x8, true, 0xf00b49a7e8b07dee)
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